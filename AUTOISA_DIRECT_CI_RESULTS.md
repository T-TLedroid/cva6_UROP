# AutoISA Direct-CI — Phase 1 Progress & Verification Status

> Companion to [`AUTOISA_DIRECT_CI_DESIGN.md`](./AUTOISA_DIRECT_CI_DESIGN.md).
> Spec reference: [`AUTOISA_DIRECT_CI_TUTORIAL.md`](./AUTOISA_DIRECT_CI_TUTORIAL.md).

## 1. Current verification status

All directed tests pass on `cv32a65x` (Verilator, no Spike — custom opcodes).

| Test | Covers | Result |
|---|---|---|
| `cvxif_mac` | regression — existing combinational ALU/MAC path intact | ✅ SUCCESS |
| `cvxif_delay` | `cus_delay rd=rs1` at lat 0..4 (1/2/4/8/16 cyc) + dependency chain | ✅ SUCCESS |
| `cvxif_cdfg_demo` | `cus_cdfg_demo rd=((rs1*rs2)+rs3)^(rs1+rs3)` at lat 0/1/2/3, scalar cross-check, negative operands, dependency on pending producer | ✅ SUCCESS |

Run (see design doc §9 for the full command):

```bash
cd verif/sim
python3 cva6.py --testlist=../tests/testlist_cvxif.yaml --test cvxif_delay \
    --iss_yaml cva6.yaml --target cv32a65x --iss=veri-testharness \
    --issrun_opts=+debug_disable=1+UVM_VERBOSITY=UVM_NONE
```

Pass = `*** SUCCESS *** (tohost = 0)` in `verif/sim/out_*/veri-testharness_sim/<test>.cv32a65x.log.iss`.

### 1.1 Engine latency — verified via in-engine event instrumentation (Task 6, partial)

The directed tests prove functional correctness but not the configured cycle
latencies (the value path is independent of latency). To verify timing,
`cdfg_engine.sv` carries an optional event tracer (gated by
`+define+CDFG_EVENT_TRACE`, off by default) that prints the pure engine compute
latency per job, isolated from fetch/issue/scoreboard overhead:

```
[cdfg] ACCEPT  cyc=938 id=1 rd=13 op=DELAY lat=4
[cdfg] DISPAT  cyc=939 id=1
[cdfg] DONE    cyc=955 id=1 engine_lat=16
[cdfg] RESULT  cyc=956 id=1
```

Measured `engine_lat` (DONE − DISPATCH) matches the configured values exactly:

| Op | lat | configured | measured `engine_lat` |
|---|---|---|---|
| `cus_delay` | 0 / 1 / 2 / 3 / 4 | 1 / 2 / 4 / 8 / 16 | **1 / 2 / 4 / 8 / 16** |
| `cus_cdfg_demo` | 0 / 1 / 2 / 3 | 3 / 6 / 12 / 24 | **3 / 6 / 12 / 24** |

(`cus_cdfg_demo` is 3 stages × `1<<lat`.) Enable it:

```bash
python3 cva6.py --testlist=../tests/testlist_cvxif.yaml --test cvxif_delay \
    --iss_yaml cva6.yaml --target cv32a65x --iss=veri-testharness \
    --isscomp_opts="+define+CDFG_EVENT_TRACE" \
    --issrun_opts="+debug_disable=1+UVM_VERBOSITY=UVM_NONE"
# event lines -> verif/sim/out_*/veri-testharness_sim/cvxif_delay.cv32a65x.log.iss
```

The event stream also exposes the decoupling: a dependent job's `ACCEPT` can
land in the same cycle as its producer's `RESULT` (queued before the producer
drained). The full Task-6 CSV pipeline (cycle-stamping accept/dispatch/done/
result/consumer to a file) is still TODO.

## 2. Conformance vs. the tutorial (condensed)

### ✅ Protocol/control substrate — conforms
- `issue_ready = queue_has_free` (not `!engine_busy`); accept-while-engine-busy.
- Atomic job capture on `valid && ready && accept`; results/commits/kills keyed on `hartid+id`.
- `result_valid = compute_done && commit_seen && !killed`; speculative compute stays private.
- Kill: QUEUED→drop, RUNNING→abort, DONE→delete; **kill wins the same-cycle race** with `engine_done`.
- Result buffer holds payload stable under backpressure; never overwrites an unconsumed result.
- Commit interface (`cvxif_req_i.commit`) and `result_ready` backpressure now consumed by the engine (previously ignored).
- Independent scalar overlap enabled (CI offloaded + decoupled; native scalars run on the core ALU).

### ⚠️ Deviations / caveats
- **Structure**: the spec *suggests* three files (`autoisa_ci_request_queue/engine/result_buffer.sv`); all three blocks are implemented **inside one module** (`cdfg_engine.sv`) plus the shell. Functionally equivalent for Phase 1's single engine. The spec's §8.5 job *state machine* is modeled as `commit_seen`/`killed` **flags** rather than distinct FSM states (same information).
- **`copro_alu` MAC rs3**: the existing MAC unit's own `NrRgprPorts==3` checks drop rs3 under the 6-port config; `cus_mac` with non-zero rs3 is affected (its test uses `rs3=0` and passes). Out of scope; flagged for cleanup.

## 3. Gaps — not yet implemented

These are the remaining Phase-1 deliverables (testbench/CI work, currently paused).

| Tutorial item | Status |
|---|---|
| **Task 6 — event instrumentation** (accept/dispatch/done/result/consumer cycles as CSV) | 🟡 engine-side event tracer exists (`+define+CDFG_EVENT_TRACE`, §1.1) — engine latency verified; full CSV pipeline (consumer-cycle capture, file output) TODO |
| §11.1 — 100 randomized vectors per op vs software reference | ❌ a handful of directed cases |
| §11.2 — independent-overlap directed test + evidence | ❌ design supports it; not demonstrated/measured |
| §11.4 — distance-to-consumer sweep (LATENCY × K) | ❌ |
| §11.5 — queue-full backpressure directed test | ❌ |
| §11.6 — result backpressure (force `result_ready=0` for 1/2/4/8 cyc) | ❌ module-level |
| §11.7 — commit/kill matrix (kill queued/running/done + race) | ❌ module-level — **the paused testbench** |
| §11.8 — regression script + one-command runner | ❌ |
| docs/results artifacts (`events.csv`, `latency.csv`, `test_summary.tsv`) | ❌ |

`cvxif_cycle_count` has not been re-run; the ALU path it measures is unchanged.

## 4. Phase 1 completion checklist (tutorial §13)

| Item | Status |
|---|---|
| Direct encoding (`rd/rs1/rs2/rs3`, no pack/pop) | ✅ |
| Acceptance (`valid && ready && accept` captures job) | ✅ |
| Queue semantics (engine busy ≠ block; capacity does) | ✅ |
| Asynchronous execution (independent scalar before CI result) | 🟡 design ✅, not measured |
| Dependency correctness (consumer of pending rd waits) | ✅ |
| In-order boundary | ✅ |
| Result protocol (stable until `valid && ready`) | 🟡 logic ✅, no formal SVA / not stressed |
| ID correctness (request/result/commit/kill share `hartid+id`) | ✅ |
| Commit gate (compute before commit ≠ writeback) | 🟡 logic ✅, not tested (real core commits at issue) |
| Kill handling (queued/running/done discardable) | 🟡 logic ✅, module TB pending |
| Race handling (kill priority) | 🟡 logic ✅, module TB pending |
| Measurement (accept/dispatch/done/result/consumer cycles separate) | 🟡 engine event tracer verifies accept/dispatch/done/result + engine latency (§1.1); consumer-cycle + CSV TODO |
| Functional testing (randomized vectors) | ❌ |
| Regression (existing CV-X-IF tests pass) | 🟡 directed pass; `cvxif_cycle_count` not re-run |
| Reproducibility (one documented command) | ❌ |

**Legend**: ✅ done & verified · 🟡 implemented/verified-by-design, lacking measurement or module-level evidence · ❌ not started.

## 5. Recommended next steps

1. **Module-level testbench** (`verif/tb/cvxif_cdfg/`) driving the commit interface directly — closes the §11.6/§11.7 backpressure and commit/kill matrix gaps (the only way to exercise kill, since the real core drives `commit_kill=0`).
2. **Task 6 event instrumentation** — cycle-stamp accept/dispatch/done/result/consumer into a CSV; required evidence for the §11.2 overlap and §11.4 sweep.
3. **Randomized correctness** (§11.1) — 100 vectors/op vs a software reference.
4. **Regression + one-command runner** (§11.8, §13 reproducibility).

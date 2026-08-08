# AutoISA Direct-CI — Phase 1 Progress & Verification Status

> Companion to [`AUTOISA_DIRECT_CI_DESIGN.md`](./AUTOISA_DIRECT_CI_DESIGN.md).
> Spec reference: [`AUTOISA_DIRECT_CI_TUTORIAL.md`](./AUTOISA_DIRECT_CI_TUTORIAL.md).

## 1. Current verification status

| Layer | What | Result |
|---|---|---|
| Engine, module-level | `cdfg_tb` unit TB — functional, queue-depth, **queue-full (§11.5)**, **result-backpressure 1/2/4/8 (§11.6)**, **kill queued/running/done + race (§11.7/§8.4)**, commit-gate (§8.1), **randomized 270 vectors (§11.1)** | ✅ 332 checks, 0 fail |
| Engine latency | in-engine event tracer — `engine_lat` = 1/2/4/8/16 (delay), 3/6/12/24 (cdfg) | ✅ exact |
| Full core, functional | `cvxif_mac`, `cvxif_delay`, `cvxif_cdfg_demo` (regression intact) | ✅ SUCCESS |
| Full core, randomized | `autoisa_direct_ci_correctness` — 150 randomized `cus_delay` vectors | ✅ SUCCESS |
| Full core, overlap | `autoisa_direct_ci_overlap` — distance-to-consumer sweep + dependency check | ✅ SUCCESS |

### 1.1 The one command

```bash
export RISCV=(Your RISCV toolchain installation directory) e.g. /home/tt/cva6toolchain
bash verif/regress/run_autoisa_direct_ci_all.sh
```

Runs the unit TB + all directed/randomized/overlap tests (built with
`+define+CDFG_EVENT_TRACE`) and writes `results/autoisa_direct_ci/{events,*** latency,overlap}.csv`. Exit 0 only if every unit case and every directed test passes.

### 1.2 Engine latency — verified via in-engine event instrumentation (Task 6)

`cdfg_engine.sv` carries an `` `ifdef CDFG_EVENT_TRACE ``-gated tracer; `engine_lat`
(DONE − DISPATCH) is the pure engine compute latency, isolated from fetch/issue.

| Op | lat | configured | measured `engine_lat` |
|---|---|---|---|
| `cus_delay` | 0 / 1 / 2 / 3 / 4 | 1 / 2 / 4 / 8 / 16 | **1 / 2 / 4 / 8 / 16** |
| `cus_cdfg_demo` | 0 / 1 / 2 / 3 | 3 / 6 / 12 / 24 | **3 / 6 / 12 / 24** |

### 1.3 Overlap / distance-to-consumer sweep (§11.2 / §11.4)

`autoisa_direct_ci_overlap` measures T(K) = cycles(producer `cus_delay` lat=4 →
K independent scalars → dependent consumer). The `max(producer, K·scalar)` shape
— flat at ~20 for K≤2 then rising — is the overlap evidence:

| K | 0 | 1 | 2 | 4 | 8 | 16 | 32 | producer-only |
|---|---|---|---|---|---|---|---|---|
| T (cyc) | 20 | 20 | 20 | 21 | 23 | 27 | 38 | 19 |

## 2. Conformance vs. the tutorial

### ✅ Protocol/control substrate — conforms (engine unit TB)
`issue_ready = queue_has_free` (not `!engine_busy`); accept-while-engine-busy;
atomic capture; id-keyed results/commits/kills; `result_valid = done && commit_seen && !killed`;
kill QUEUED→drop / RUNNING→abort / DONE→delete; **kill wins the same-cycle race**;
result buffer holds payload stable under backpressure and never overwrites.
The commit interface and `result_ready` backpressure are consumed by the engine.

### ⚠️ Known limitation — CV-X-IF rs3 unreliable under RAW (cv32a65x)
Even after the rs3-width fixes (see design doc §6), the core's `forward_rs3`
path intermittently delivers `rs3=0` on the accept cycle when rs3 has a pending
producer. rs1/rs2 are fine. Consequence: **randomized `cus_cdfg_demo` is verified
by driving the engine directly in the unit TB** (120 vectors, deterministic), not
through the core. Directed `cvxif_cdfg_demo.S` passes (scheduling lets rs3 commit).
A real fix lives in the core's rs3 forwarding/scoreboard, out of Phase-1 scope.

### ⚠️ Structure
The spec *suggests* three RTL files; all three blocks (queue / engine / result
buffer + job state) live in one module (`cdfg_engine.sv`) for Phase-1's single
engine. The §8.5 job state machine is modeled as `commit_seen`/`killed` flags.

## 3. Phase-1 checklist (tutorial §13)

| Item | Status |
|---|---|
| Direct encoding (`rd/rs1/rs2/rs3`, no pack/pop) | ✅ |
| Acceptance (`valid && ready && accept` captures job) | ✅ unit TB |
| Queue semantics (engine busy ≠ block; capacity does) | ✅ unit TB queue_full |
| Asynchronous execution (independent scalar before CI result) | ✅ overlap sweep |
| Dependency correctness (consumer of pending rd waits) | ✅ overlap + unit TB |
| In-order boundary | ✅ core behavior |
| Result protocol (stable until `valid && ready`) | ✅ unit TB backpressure |
| ID correctness (request/result/commit/kill share `hartid+id`) | ✅ |
| Commit gate (compute before commit ≠ writeback) | ✅ unit TB commit_gate |
| Kill handling (queued/running/done discardable) | ✅ unit TB kill matrix |
| Race handling (kill priority) | ✅ unit TB kill_done_race |
| Measurement (accept/dispatch/done/result/consumer cycles) | ✅ events.csv + latency.csv + overlap.csv |
| Functional testing (randomized vectors) | ✅ delay 300 + cdfg 120 vectors |
| Regression (existing CV-X-IF tests pass) | ✅ cvxif_mac/cycle_count path intact |
| Reproducibility (one documented command) | ✅ run_autoisa_direct_ci_all.sh |

## 4. Files added by the verification layer

- `verif/tb/cvxif_cdfg/` — `cdfg_tb.sv` (engine unit TB), `cdfg_tb_main.cpp`
  (C++ clk driver), `Flist.cdfg`, `run.sh`.
- `verif/tests/custom/cv_xif/autoisa_direct_ci_correctness.c` — randomized delay.
- `verif/tests/custom/cv_xif/autoisa_direct_ci_overlap.S` — overlap/sweep.
- `verif/tests/custom/cv_xif/cdfg_events_to_csv.py` — events/latency/overlap → CSV.
- `verif/regress/autoisa_direct_ci_unit.sh`, `autoisa_direct_ci.sh`,
  `run_autoisa_direct_ci_all.sh`.
- Reports: `results/autoisa_direct_ci/{events,*** latency,overlap}.csv`.

## 5. Follow-on work (post-Phase-1)
1. Fix the core's CV-X-IF rs3 forwarding under RAW so randomized `cus_cdfg_demo`
   can run through the full core (currently engine-direct only).
2. Full-core `commit_kill` generation + a controlled misprediction rollback test.
3. Audit `copro_alu.sv` `NrRgprPorts==3` exact checks (cus_mac rs3).
4. Multiple CDFG engines + per-engine dispatch; real AutoISA CDFG datapaths.

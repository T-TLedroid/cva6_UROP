# AutoISA Direct-CI — Phase 1 Design

> Implementation of the Phase 1 "compute-only Direct-CI substrate" defined in
> [`AUTOISA_DIRECT_CI_TUTORIAL.md`](./AUTOISA_DIRECT_CI_TUTORIAL.md).
>
> Target: CVA6 `cv32a65x` (superscalar-in-issue, CV-X-IF enabled), Verilator.
> Status: **engine implemented, op semantics aligned to the tutorial, all
> directed tests passing.** Verification infrastructure (event instrumentation,
> randomized vectors, module-level commit/kill testbench) is the remaining work
> tracked in [`AUTOISA_DIRECT_CI_RESULTS.md`](./AUTOISA_DIRECT_CI_RESULTS.md).

## 1. What was built

A **decoupled Direct-CI execution substrate** was added to the existing
`core/cvxif_example/` CV-X-IF coprocessor. It accepts two custom instructions,
runs them asynchronously on a small CDFG execution engine, and returns results
tagged by transaction id — while the 1-cycle combinational `copro_alu`
(`cus_add`, `cus_mac`, …) is left untouched.

The two Phase-1 operations (tutorial §10, Task 1):

| Instruction | Encoding | Function | Latency |
|---|---|---|---|
| `cus_delay rd, rs1, lat` | CUSTOM-3, funct3=`0x2` | `rd = rs1` (pure latency probe) | `1<<lat`, lat 0..4 → 1,2,4,8,16 cyc |
| `cus_cdfg_demo rd, rs1, rs2, rs3, lat` | MADD (R4), funct3=`0x2` | `rd = ((rs1*rs2)+rs3) ^ (rs1+rs3)` | 3 stages × `1<<lat`, lat 0..3 → 1,2,4,8/stage |

`cus_cdfg_demo` is a small CDFG with **two parallel paths** (`rs1*rs2` and
`rs1+rs3`) and a non-trivial critical path, executed as three pipelined stages.

## 2. Architecture

```
CV-X-IF issue/register ──► is_cdfg_op? ──► REQUEST QUEUE (depth 2)
   (valid/ready/accept)                      issue_ready = queue_has_free
                                                  │ (head, engine idle, buf free)
                                                  ▼
                                         CDFG EXECUTION ENGINE (1 FSM)
                                          DELAY:     1 stage  -> rd = rs1
                                          CDFG_DEMO: 3 stages -> rd = ((rs1*rs2)+rs3)^(rs1+rs3)
                                                  │ (compute_done)
                                                  ▼
                                         RESULT BUFFER (depth 1, ready/valid)
                                                  │   result_valid = done && commit_seen && !killed
                                                  ▼
CV-X-IF result ◄── (arbiter w/ copro_alu; ALU priority) ◄── result
CV-X-IF commit/kill ──► JOB STATE (commit_seen, killed flags on queue/engine/buffer)
```

Key invariants (tutorial §3.1, §4, §8):

- `issue_ready = request_queue_has_free_entry` — **not** `!engine_busy`. An
  accepted CI may wait in the queue while the engine runs.
- Acceptance is atomic on `issue_valid && issue_ready && issue_resp.accept`; the
  full job (id, rd, operands, opcode/latency) is captured into the queue that
  cycle and no longer depends on the host holding the issue signals.
- Results, commits, and kills are all keyed on `hartid + id`.
- `result_valid = compute_done && commit_seen && !killed`. Speculative compute
  that finishes before commit stays private in the result buffer.
- **Kill wins over `engine_done` in the same cycle.** Kill handling by state:
  QUEUED → dropped (never dispatched); RUNNING → aborted; DONE → buffered result
  deleted.

## 3. Instruction encoding

Latency is an instruction-immediate selector (tutorial §2.2 allows
opcode/funct/immediate bits). The decode mask leaves the latency bits
don't-care so all latency variants decode to a single opcode; the latency
selector is read from the raw instruction in `instr_decoder.sv`.

```
DELAY      R-type:  funct7[6:3]=0000 (base) | funct7[2:0]=lat_sel | funct3=010 | opcode=1111011 (CUSTOM-3)
CDFG_DEMO  R4-type:  rs3[31:27] | funct2[1:0]=lat_sel | funct3=010 | opcode=1000011 (MADD)
```

Package entries (`core/cvxif_example/include/cvxif_instr_pkg.sv`):

```systemverilog
// cus_delay rd, rs1, lat   (reads rs1 only)
instr: 32'b00000_00_00000_00000_0_10_00000_1111011,
mask:  32'b11110_00_00000_00000_1_11_00000_1111111,   // funct7[2:0] don't-care
resp:  '{accept:1, writeback:1, register_read:{1'b0,1'b0,1'b1}}, opcode:DELAY

// cus_cdfg_demo rd, rs1, rs2, rs3, lat   (reads rs1, rs2, rs3)
instr: 32'b00000_00_00000_00000_0_10_00000_1000011,
mask:  32'b00000_00_00000_00000_1_11_00000_1111111,   // funct2, rs3 don't-care
resp:  '{accept:1, writeback:1, register_read:{1'b1,1'b1,1'b1}}, opcode:CDFG_DEMO
```

`funct3=0x2` is unused in both opcode spaces, cleanly separating the new ops
from the existing ones. Assembler macros live in
`verif/tests/custom/cv_xif/cvxif_macros.h`.

## 4. Engine microarchitecture (`cdfg_engine.sv`)

**Request queue** — depth 2, two entries `q0` (head) + `q1` (tail).
`queue_free_o = !q1.valid`. Push fills the lowest empty slot; pop shifts `q1→q0`.

**Execution engine** — one FSM:

```
E_IDLE ──(pop live head)──► E_RUN1 ──cnt──► {DELAY: deposit rd=rs1} 
                                     │
                                     (CDFG) ──► E_RUN2 ──cnt──► E_RUN3 ──cnt──► deposit rd=...
E_HOLD : result computed but result buffer busy; deposits when buffer frees.
```

CDFG stage datapath:

| Stage | State | Computes (parallel where shown) |
|---|---|---|
| 1 | `E_RUN1` | `n_mul = rs1*rs2`  ‖  `n_addB = rs1+rs3` |
| 2 | `E_RUN2` | `n_addA = n_mul + rs3` |
| 3 | `E_RUN3` | `rd = n_addA ^ n_addB` |

Each stage counts down `cnt = 1<<lat_sel` cycles. A kill in any running state
(`eng_killed_now = eng.killed || kill_for(eng)`) immediately aborts to `E_IDLE`
and discards the compute.

**Result buffer** — depth 1 (`rbuf`). A computed result deposits only when the
buffer is free (`bbuf_free = !rbuf.valid`), so an unconsumed result is never
overwritten. The buffer drains on `result_valid && result_ready`, or is deleted
if its job is killed.

**Job state** — `commit_seen` / `killed` are carried as flags on the queue
entries, engine slot, and result buffer. The same-cycle commit-at-issue of the
real core is captured at push time (`init_commit_seen`), so directed tests see
results as soon as compute completes.

## 5. Coprocessor integration (`cvxif_example_coprocessor.sv`)

- **Issue routing**: `is_cdfg_op = (opcode==DELAY)||(opcode==CDFG_DEMO)`.
  `issue_ready = is_cdfg_op ? (dec_ready && queue_free) : (dec_ready && ~alu_busy)`.
  `copro_alu` is inert for the new opcodes (its `case` hits `default`, `valid=0`).
- **Accept pulse**: `cdfg_push = issue_valid && is_cdfg_op && issue_ready && queue_free`.
- **Result arbitration**: the ALU result is a single-cycle pulse with no buffer,
  so it takes priority; the CDFG result (buffered) is granted on any ALU-idle
  cycle. `cdfg_grant = cdfg_result_valid && !alu_valid`; the engine's
  `result_ready_i = cvxif_req_i.result_ready && cdfg_grant`.
- **Commit & backpressure**: the previously-ignored `cvxif_req_i.commit(_valid)`
  and `cvxif_req_i.result_ready` are now wired to the engine.

## 6. Core changes required for rs3 forwarding

`cus_cdfg_demo` reads rs3. On the superscalar `cv32a65x` target
(`SuperscalarEn=1`, `NrIssuePorts=2`), rs3 was silently dropped to 0 because two
core spots gated rs3's width on `NrRgprPorts == 3` *exactly* — a single-issue
assumption. With the 6 read ports needed for 3-operand superscalar forwarding
(`NrRgprPorts/NrIssuePorts = 3`), rs3 truncated to `FLen` bits (≈0 with no FPU).

| File | Change |
|---|---|
| `core/include/issue_stage.sv` | `rs3_len_t` width gate: `NrRgprPorts==3` → `(NrRgprPorts/NrIssuePorts)==3` |
| `core/issue_read_operands.sv` | `rs3_res` width gate (same fix) |
| `core/include/build_config_pkg.sv` | `NrRgprPorts = CvxifEn ? (Superscalar?6:3) : (Superscalar?4:2)` — give CV-X-IF targets a 3rd operand-per-instruction read port |

These conditions are equivalent for every existing (non-CV-X-IF-superscalar)
config, so other regressions are unaffected. See the project memory entry
`cvxif-rs3-forwarding-superscalar-bug` for the full debugging trail.

> Note: the pre-existing `copro_alu.sv` MAC unit has its own `NrRgprPorts == 3`
> exact checks, so `cus_mac` with non-zero rs3 drops rs3 under the 6-port config.
> This is out of scope (its test only checks `rs3=0` cases and still passes) but
> is flagged for a future cleanup.

## 7. Protocol mapping to the tutorial

| Tutorial requirement | Where implemented |
|---|---|
| Acceptance handshake captures full job (§4) | `cdfg_push` → queue push |
| Asynchronous execution, id correlation (§5) | engine + result tagged by `id` |
| Independent scalar overlap (§5.2) | CI offloaded + decoupled; native scalars run on the core ALU meanwhile |
| Dependent consumer waits (§6) | result returns by `id`; core scoreboard handles RAW (exercised by dependency test cases) |
| Result backpressure, stable payload (§6.1) | `rbuf` holds under `!result_ready`; deposit only when buffer free |
| Two-phase commit gate (§8.1) | `result_valid = done && commit_seen && !killed` |
| Kill QUEUED/RUNNING/DONE + race (§8.4) | drop / abort / delete; `deposit_now` gated on `!killed` |
| In-order retirement (§5.3) | unchanged core behavior |

The tutorial (§8.5) notes the example coprocessor did not consume the commit
interface and defers full-core `commit_kill` validation. This implementation
**does** consume it, but the real core still drives `commit_kill=0`, so kill is
only exercisable at module level — the remaining testbench work.

## 8. File inventory

**New**
- `core/cvxif_example/cdfg_engine.sv` — the Direct-CI substrate (queue + engine + result buffer + job state).
- `verif/tests/custom/cv_xif/cvxif_delay.S`, `cvxif_cdfg_demo.S` — directed self-check tests.

**Modified**
- `core/cvxif_example/include/cvxif_instr_pkg.sv` — `DELAY`/`CDFG_DEMO` opcodes + entries.
- `core/cvxif_example/instr_decoder.sv` — emits `latency_sel_o`.
- `core/cvxif_example/cvxif_example_coprocessor.sv` — engine instance, issue routing, result arbiter, commit/backpressure wiring.
- `core/include/issue_stage.sv`, `core/issue_read_operands.sv`, `core/include/build_config_pkg.sv` — rs3 forwarding fixes.
- `core/Flist.cva6`, `core/Flist.cva6_gate` — added `cdfg_engine.sv`.
- `verif/tests/custom/cv_xif/cvxif_macros.h` — `cus_delay` / `cus_cdfg_demo` macros.
- `verif/tests/testlist_cvxif.yaml` — testlist entries.

## 9. Build & run

```bash
export RISCV=/home/tt/cva6toolchain
export PATH=$PWD/tools/verilator-v5.008/bin:$PATH
source verif/sim/setup-env.sh
export DV_SIMULATORS=veri-testharness          # no Spike: custom opcodes
export DV_OPTS="--issrun_opts=+debug_disable=1+UVM_VERBOSITY=UVM_NONE"
cd verif/sim
python3 cva6.py --testlist=../tests/testlist_cvxif.yaml --test cvxif_cdfg_demo \
    --iss_yaml cva6.yaml --target cv32a65x --iss=$DV_SIMULATORS $DV_OPTS
# likewise: --test cvxif_delay , --test cvxif_mac
```

Pass/fail is reported by the Verilator testbench as `*** SUCCESS *** (tohost = 0)`
or `*** FAILED *** (tohost = 1)` in the `*.log.iss`.

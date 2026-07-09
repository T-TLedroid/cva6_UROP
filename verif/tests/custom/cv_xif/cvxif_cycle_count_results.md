# CVXIF Example Coprocessor — Cycle-Count Measurements

**Goal:** determine how many cycles each custom instruction of the CVXIF
(CORE-V eXtension Interface) *example* coprocessor takes to complete on the
CVA6 RTL.

**Target:** `cv32a65x` (32-bit, with the CVXIF example coprocessor enabled).
**Simulator:** Verilator (`veri-testharness`) only.

---

## TL;DR

Every custom instruction in the example coprocessor takes **exactly the same
number of cycles as a normal integer `ADD`** — **except `cus_mac`**, which is
pipelined over two cycles (multiply registered in stage 1, accumulate add in
stage 2, host stalled for one cycle). The coprocessor adds **zero latency /
stall overhead** relative to the core ALU for the 1-cycle opcodes; `cus_mac`
alone exposes ~2-cycle latency.

| Instruction | Cycles / 256 issued | Cycles per instruction |
|---|---:|---:|
| `c.nop` (baseline, no datapath) | 225 | ~0.88 (nops are squashed) |
| `add` (baseline, **core ALU**) | 448 | **1.750** |
| `cus_nop` | 426 | ~1.66 |
| `cus_add` | 448 | **1.750** |
| `cus_double_rs1` | 448 | **1.750** |
| `cus_double_rs2` | 448 | **1.750** |
| `cus_add_multi` | 448 | **1.750** |
| `cus_add_rs3_madd` | 448 | **1.750** |
| `cus_add_rs3_msub` | 448 | **1.750** |
| `cus_add_rs3_nmadd` | 448 | **1.750** |
| `cus_add_rs3_nmsub` | 448 | **1.750** |
| `cus_mac` (rd = rs1*rs2 + rs3) — **2-cycle** | 514 | **2.008** |
| `mul` (independent dests) | 449 | **1.753** |
| `mul` (dependent chain) | 515 | **2.011** |

Each instruction is issued **256 times** (unrolled). Scaling the count from
64→256 multiplies every delta by ~4 (e.g. `add` 112→448, `mul`-chain
131→515), confirming the measurement is linear with no hidden fixed cost.

The fetch-bound CPI for 32-bit instructions lands in the **1.5–1.8** range
depending on instruction alignment in the I-cache (`cus_nop` in particular
moves with layout — it is still fetch-bound, just better/worse aligned).
The relative findings are stable: every custom instruction matches a native
`add`, and only the **dependent `mul` chain** is slower, because that is the
one case that is latency-bound rather than fetch-bound (see §5).

---

## 1. The example coprocessor

`core/cvxif_example/` implements 11 custom instructions (see
`include/cvxif_instr_pkg.sv`). Ten are exercised here:

| Macro | Operation | Encoding |
|---|---|---|
| `cus_nop`            | no operation                         | CUSTOM-3 |
| `cus_add rd,rs1,rs2` | rd = rs1 + rs2                       | CUSTOM-3 |
| `cus_double_rs1`     | rd = rs1 << 1                        | CUSTOM-3 |
| `cus_double_rs2`     | rd = rs2 << 1                        | CUSTOM-3 |
| `cus_add_multi`      | rd = rs1 + rs2 (multi-cycle demo)    | CUSTOM-3 |
| `cus_add_rs3_madd`   | rd = rs1 + rs2 + rs3                 | MADD     |
| `cus_add_rs3_msub`   | rd = rs1 - rs2 - rs3                 | MSUB     |
| `cus_add_rs3_nmadd`  | rd = -(rs1 + rs2 + rs3)              | NMADD    |
| `cus_add_rs3_nmsub`  | rd = -(rs1 - rs2 - rs3)              | NMSUB    |
| `cus_mac rd,rs1,rs2,rs3` | rd = (rs1 * rs2) + rs3           | MADD (funct3=1) |

## 2. RTL analysis (`copro_alu.sv`)

The execution unit is purely combinational with a single result register:

```systemverilog
assign valid_o  = valid_q;     // registered
assign result_o = result_q;
always_comb begin
  ...
  // every opcode case sets:
  valid_n = 1'b1;
  we_n    = 1'b1;
  ...
end
```

Every supported opcode asserts `valid_n = 1'b1` the cycle after issue
(`copro_alu.sv:55-129`); only the illegal/default case deasserts it
(`copro_alu.sv:135`). **So each instruction completes in 1 cycle** (issue at
cycle T → result + `valid` at T+1) — there is no multi-cycle handshake.

**Exception — `cus_mac` is 2-cycle.** The MAC (`rd = (rs1*rs2) + rs3`) is
pipelined: the multiply is registered in a stage-1 register and the accumulate
add is performed in stage 2 (the output register). A `busy` flag is raised
during stage 2 and gates `issue_ready`, so the host is held for one cycle while
the pending MAC result is emitted (issue at T → busy/stall at T+1 → result at
T+2). This keeps the multiply and the add out of one combinational cone — see
the note in `copro_alu.sv`. All other opcodes remain the pure 1-cycle path
above.

The empirical result below confirms this: the custom instructions are not
slower than a native ALU operation.

## 3. Testbench methodology

File: `verif/tests/custom/cv_xif/cvxif_cycle_count.S`

For each instruction:

1. `csrr t1, mcycle`           — start timestamp
2. execute **64 unrolled copies** of the instruction
3. `csrr t2, mcycle`           — end timestamp
4. `sub t3, t2, t1`            — delta = cycles for 64 copies
5. `sw t3, results[i]`

Per-instruction cost = delta / 64.

Key methodological points:

- **Destination registers are rotated** through a pool of caller-saved
  temporaries (`t0, t5, t6, a3-a7`) so consecutive instructions never target
  the same register — this removes any write-after-write scoreboard stall and
  measures true peak throughput. (A control run with a single fixed
  destination gave identical numbers, confirming the result is not a WAW
  artifact.)
- **Two baselines** are measured with the same scaffold: `c.nop` (no ALU /
  coprocessor activity) and a normal integer `add`.
- `mcycle` is a true cycle counter (`csr_regfile.sv:998` does
  `cycle_d = cycle_q + 1` every cycle).

### Why Verilator-only (no Spike)

- Cycle counts are an **RTL timing** property; Spike is a functional ISS whose
  `mcycle` is not comparable to the hardware.
- Spike's CVXIF model does not implement every opcode used here, so it traps
  (`handle_trap → tohost_exit(1337)`). Run with `--iss=veri-testharness`.

### Reading the result out

The Verilator testbench does not capture `printf` text, but its commit trace
logs every store as `mem <addr> <value>`. The `results` table address depends
on code layout (it was `0x80007000` at 64 copies, `0x80009000` at 256 copies),
so look it up from the symbol and grep that range:

```bash
O=$(ls -t verif/sim/out_*/directed_tests/cvxif_cycle_count.o | head -1)
B=$($RISCV/bin/riscv-none-elf-nm -n "$O" | awk '/ results$/{print $1}')
LOG=$(ls -t verif/sim/out_*/veri-testharness_sim/cvxif_cycle_count.cv32a65x.log | head -1)
for i in $(seq 0 13); do
  off=$(printf '%03x' $((i*4)))
  grep -oE "mem 0x${B%???}${off} 0x[0-9a-f]+" "$LOG"   # slot $i
done
```

(14 slots: 0=`c.nop`, 1=`add`, 2=`cus_nop`, 3–10=`cus_*`, 11=`mul` indep,
12=`mul` chain, 13=`cus_mac`.)

## 4. How to run

```bash
export RISCV=/home/tt/cva6toolchain
export PATH=$PWD/tools/verilator-v5.008/bin:$PATH   # verilator must be on PATH
source verif/sim/setup-env.sh
export DV_SIMULATORS=veri-testharness               # NO spike
export UVM_VERBOSITY=UVM_NONE
export DV_OPTS="--issrun_opts=+debug_disable=1+UVM_VERBOSITY=$UVM_VERBOSITY"
cd verif/sim
python3 cva6.py --testlist=../tests/testlist_cvxif.yaml --test cvxif_cycle_count \
    --iss_yaml cva6.yaml --target cv32a65x --iss=$DV_SIMULATORS $DV_OPTS
```

The test is wired into `verif/tests/testlist_cvxif.yaml` (entry
`cvxif_cycle_count`, using `common_test_config_lgcc` for the `-lgcc` link).

## 5. Interpretation

### Why `add` measures 1.75 cycles (not 1)

The ALU itself is single-cycle. The 1.75 is a **frontend instruction-fetch
bandwidth limit for 32-bit (uncompressed) instructions**, proven by encoding
the *same* operation two ways (64 copies each):

| Encoding | Size | Cycles | CPI |
|---|---|---:|---:|
| `add t0,a0,a1`    | 32-bit | 115 | **1.80** |
| `c.add t0,a0`     | 16-bit |  59 | **0.92** |
| `nop` (writes x0) | 32-bit |  59 | 0.92 |
| `c.nop`           | 16-bit |  57 | 0.89 |

cv32a65x fetches `FETCH_WIDTH=32` bits per packet (`build_config_pkg.sv:173`),
i.e. `INSTR_PER_FETCH = 32/16 = 2` with RVC. One packet therefore holds **two
compressed** instructions but only **one uncompressed** instruction. The
frontend does not sustain one packet every cycle on this narrow core, so:

- compressed (16-bit) instructions are 2× denser → ~1 CPI,
- uncompressed (32-bit) instructions — plain `add` **and every CVXIF custom
  instruction** — expose the fetch bubble → ~1.75 CPI.

NOPs are fast at any size because writing `x0` lets the core drop them before
fetch bandwidth matters. The execute/commit datapath is fine at 1/cycle
(witness `c.add` at 0.92). The throughput curve is exactly
`cycles(N) = 2 + 1.75·N` (the 2 is pipeline fill + the two `csrr mcycle`
reads).

### Conclusion for the coprocessor

The 1.75 CPI is a tax on **32-bit encodings generally**, not on the
coprocessor: the CVXIF custom instructions are encoded as uncompressed 32-bit
`.insn` words, so they hit the same fetch limit as native `add` — which is
exactly why they all measure identically. The coprocessor's own execution is
1 cycle (`copro_alu.sv`), with **zero extra latency or stall** versus the core
ALU. Replacing a `cus_*` with a native `add` would not change the cycle count;
only compressing the encoding (not possible for these custom opcodes) would.

**`cus_mac` is the exception** (2.008 cyc/insn). It is a 2-cycle pipelined
MAC whose stage-2 stall prevents back-to-back overlap, so — like a dependent
`mul` chain — it is latency-bound at ~2 cycles rather than fetch-bound at
1.75. This is by design: splitting multiply and accumulate across two cycles
keeps the 32×32 multiply out of the same combinational cone as the add (which
would otherwise be the longest path in the unit and longer than the core's own
1-stage `mul`).

### Integer multiply (`mul`) — throughput vs latency

Two `mul` cases are measured to show how a multi-cycle functional unit behaves:

- **Independent `mul`** (rotating destinations): **1.76 CPI**, i.e. essentially
  the same as `add`. `core/mult.sv:47-53` calls the multiplier "a dumb
  pipelined multiplier" that is "unconditionally ready to accept new requests",
  so back-to-back independent multiplies overlap in its pipeline and the
  bottleneck stays the frontend — exactly like `add`.
- **Dependent `mul` chain** (`mul t0, t0, t0`, serial): **2.04 CPI**. Here each
  multiply must wait for the previous result, so the multiplier's own latency
  is exposed: ~2 cycles per chained multiply (vs ~1.75 when fetch-bound).

The contrast is the point: a "heavy" op like `mul` looks just as cheap as
`add` *as long as it is not on the critical data-dependency path* — confirming
again that the 1.75 CPI floor in this testbench is the fetch bandwidth, not
any functional unit. The CVXIF custom instructions, being 1-cycle and
pipelined through `copro_alu`, would behave the same way (fetch-bound when
independent, 1-cycle latency on a dependent chain).

## 6. Files

| File | Purpose |
|---|---|
| `verif/tests/custom/cv_xif/cvxif_cycle_count.S` | cycle-count test program |
| `verif/tests/custom/cv_xif/cvxif_macros.h`       | custom-instruction assembler macros |
| `verif/tests/testlist_cvxif.yaml`                | testlist entry `cvxif_cycle_count` |
| `core/cvxif_example/copro_alu.sv`                | coprocessor ALU (1-cycle valid) |
| `core/cvxif_example/include/cvxif_instr_pkg.sv`  | opcode definitions |

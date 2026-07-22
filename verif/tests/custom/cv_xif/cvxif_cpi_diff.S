// See LICENSE for license details.
//
// CVXIF Coprocessor Differential-CPI Testbench
// ---------------------------------------------
// Goal: measure the STEADY-STATE cycles-per-instruction (CPI) of each custom
// instruction with the pipeline-fill overhead removed.
//
// Rationale
// ---------
// A single timing window measures T(N) = C + CPI * N, where the constant C is
// the pipeline-fill / measurement overhead -- the two `csrr mcycle` reads plus
// the frontend priming bubble before the first instruction reaches commit (the
// existing cvxif_cycle_count test models this as cycles(N) = 2 + 1.75*N).
// Dividing T(N)/N therefore UNDER-estimates peak throughput (it amortises the
// constant C over N). To remove C, measure at two repetition counts and take
// the slope:
//
//     CPI_steady = ( T(32) - T(16) ) / (32 - 16) = (T32 - T16) / 16
//
// The constant C is present in both T32 and T16, so it cancels. This is the
// classical two-point / differential CPI measurement.
//
// Methodology
// -----------
// For every instruction under test we record two deltas, each bracketed by
// `csrr mcycle` reads:
//   T16 = cycles for 16 copies ; T32 = cycles for 32 copies
// stored to results[2*i] (T16) and results[2*i+1] (T32).
//
// Reporting (done offline from the Verilator commit trace):
//   CPI16     = T16 / 16           (still includes the constant C, for contrast)
//   CPI32     = T32 / 32           (C amortised over more instructions)
//   CPI_diff  = (T32 - T16) / 16   (steady-state, pipeline-fill removed)
//
// All instructions use fixed rs1=a0, rs2=a1, rs3=a2 and write a destination
// they do NOT read back, so there is no RAW/WAW scoreboard stall -- this is
// peak throughput. The dependent `mul` chain is included as a latency reference
// (each mul reads its own previous result).
//
// CAVEAT -- inter-window fetch-buffer carry-over. On this in-order, fetch-bound
// core a stalling instruction (e.g. the 2-cycle cus_mac) blocks *issue* but not
// *fetch*, so the frontend keeps prefetching and fills the fetch buffer. That
// buffer then drains into the NEXT measurement window, making a short window
// appear faster than steady-state (e.g. 16 independent muls can measure ~1.2
// CPI instead of ~1.75). That violates the differential's linearity assumption
// and yields a nonsensical CPI. To prevent it, DRAIN (a run of compressed nops,
// outside the timed window) is executed before every window so each one starts
// from the same settled fetch state -- then the only difference between the 16-
// and 32-copy windows is the constant pipeline-fill, which the differential
// cancels.
//
// IMPORTANT: run with --iss=veri-testharness only (no spike). Spike's CVXIF
// model is incomplete and its mcycle is not comparable to the RTL. Deltas are
// read out of the Verilator commit trace (each 'sw' shows 'mem <addr> <value>').

#include "cvxif_macros.h"
#include "../env/encoding.h"

#define RES_OFF(n) (n*4)

// Settle the fetch buffer to steady state (outside any timed window). Compressed
// nops do not stall, so churning enough of them flushes any carry-over from a
// preceding stalling block and leaves the frontend in a consistent state.
    .macro DRAIN
    .rept 32
    c.nop
    .endr
    .endm

// MEASURE <instruction-line>, <slot16>, <slot32>
// Times 16 then 32 copies of <instruction-line> and stores the two raw cycle
// deltas. DRAIN runs before each window so both start from the same fetch state.
// The instruction text is passed quoted so multi-operand instructions (and the
// no-operand c.nop) share one macro.
    .macro MEASURE insntext, slot16, slot32
    DRAIN
    csrr  t1, mcycle
    .rept 16
    \insntext
    .endr
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(\slot16)(t4)

    DRAIN
    csrr  t1, mcycle
    .rept 32
    \insntext
    .endr
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(\slot32)(t4)
    .endm

    .globl main
    .align 4
main:
    // ---- operand setup --------------------------------------------------
    li   a0, 0x10000000          // rs1 test value
    li   a1, 0x20000000          // rs2 test value
    li   a2, 0x30000000          // rs3 test value
    lui  t4, %hi(results)        // base address of results table
    addi t4, t4, %lo(results)

    // ====================================================================
    // Baselines
    // ====================================================================
    MEASURE "c.nop",                 0, 1     // no datapath
    MEASURE "add t0, a0, a1",        2, 3     // core ALU, 1-cycle

    // ====================================================================
    // CVXIF custom instructions (example coprocessor)
    // ====================================================================
    MEASURE "cus_nop",                       4, 5
    MEASURE "cus_add t0, a0, a1",            6, 7
    MEASURE "cus_double_rs1 t0, a0, a1",     8, 9
    MEASURE "cus_double_rs2 t0, a0, a1",    10, 11
    MEASURE "cus_add_multi t0, a0, a1",     12, 13
    MEASURE "cus_add_rs3_madd t0, a0, a1, a2",  14, 15
    MEASURE "cus_add_rs3_msub t0, a0, a1, a2",  16, 17
    MEASURE "cus_add_rs3_nmadd t0, a0, a1, a2", 18, 19
    MEASURE "cus_add_rs3_nmsub t0, a0, a1, a2", 20, 21
    MEASURE "cus_mac t0, a0, a1, a2",       22, 23   // 2-cycle (mul + acc)

    // ====================================================================
    // Core multiplier: throughput (independent) vs latency (dependent chain)
    // ====================================================================
    MEASURE "mul t0, a0, a1",              24, 25    // independent dests
    mv   t0, a0                       // seed the dependent chain
    MEASURE "mul t0, t0, a1",             26, 27    // RAW chain -> latency

    // ---- terminate cleanly (pass) ---------------------------------------
    li    a0, 0
    jal   exit

    .data
    .align 4
results:
    .word 0   // 0  c.nop               T16
    .word 0   // 1  c.nop               T32
    .word 0   // 2  add                 T16
    .word 0   // 3  add                 T32
    .word 0   // 4  cus_nop             T16
    .word 0   // 5  cus_nop             T32
    .word 0   // 6  cus_add             T16
    .word 0   // 7  cus_add             T32
    .word 0   // 8  cus_double_rs1      T16
    .word 0   // 9  cus_double_rs1      T32
    .word 0   // 10 cus_double_rs2      T16
    .word 0   // 11 cus_double_rs2      T32
    .word 0   // 12 cus_add_multi       T16
    .word 0   // 13 cus_add_multi       T32
    .word 0   // 14 cus_add_rs3_madd    T16
    .word 0   // 15 cus_add_rs3_madd    T32
    .word 0   // 16 cus_add_rs3_msub    T16
    .word 0   // 17 cus_add_rs3_msub    T32
    .word 0   // 18 cus_add_rs3_nmadd   T16
    .word 0   // 19 cus_add_rs3_nmadd   T32
    .word 0   // 20 cus_add_rs3_nmsub   T16
    .word 0   // 21 cus_add_rs3_nmsub   T32
    .word 0   // 22 cus_mac             T16
    .word 0   // 23 cus_mac             T32
    .word 0   // 24 mul (independent)   T16
    .word 0   // 25 mul (independent)   T32
    .word 0   // 26 mul (dependent)     T16
    .word 0   // 27 mul (dependent)     T32

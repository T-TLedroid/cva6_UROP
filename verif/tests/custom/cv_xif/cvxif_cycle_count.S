// See LICENSE for license details.
//
// CVXIF Coprocessor Cycle-Count Testbench
// ----------------------------------------
// Measures how many cycles each CVXIF example-coprocessor custom instruction
// takes to execute, using the mcycle CSR.
//
// Methodology
// -----------
// For every instruction under test we:
//   1. read mcycle into t1            (start timestamp)
//   2. execute R unrolled copies of the instruction
//   3. read mcycle into t2            (end timestamp)
//   4. compute delta = t2 - t1        (= cycles for R copies)
//   5. store delta to results[i]
// cycles_per_instruction = delta / R   (reported in the summary .md)
//
// Two baselines are measured the same way for reference:
//   - a compressed NOP  (no coprocessor involvement)
//   - a normal integer ADD (core ALU, 1-cycle)
//
// All custom instructions in the example coprocessor assert their result
// valid immediately (see copro_alu.sv), so each is expected to match the
// 1-cycle baseline throughput when issued back-to-back without dependencies.
//
// IMPORTANT: run with --iss=veri-testharness only (no spike). Spike's CVXIF
// model does not implement every opcode used here and its mcycle timing is
// not comparable to the RTL anyway. The measured deltas are read out of the
// Verilator commit trace (each 'sw' shows 'mem <addr> <value>').

#include "cvxif_macros.h"
#include "../env/encoding.h"

#define REP 8           // each arithmetic block = 8 instructions x REP(8) = 64 copies
#define RES_OFF(n) (n*4)
// Destination registers are ROTATED through a pool of caller-saved temporaries
// (t0,t5,t6,a3,a4,a5,a6,a7) so that consecutive measured instructions never
// target the same register. This removes write-after-write (WAW) scoreboard
// stalls, giving the true peak throughput of each instruction.

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
    // Baseline 0: compressed NOP (no coprocessor)
    // ====================================================================
    csrr  t1, mcycle
    .rept 64
    c.nop
    .endr
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(0)(t4)

    // ====================================================================
    // Baseline 1: normal integer ADD (core ALU)
    // ====================================================================
    csrr  t1, mcycle
    .rept REP
    add   t0, a0, a1
    add   t5, a0, a1
    add   t6, a0, a1
    add   a3, a0, a1
    add   a4, a0, a1
    add   a5, a0, a1
    add   a6, a0, a1
    add   a7, a0, a1
    .endr
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(1)(t4)

    // ====================================================================
    // CVXIF: CUS_NOP
    // ====================================================================
    csrr  t1, mcycle
    .rept 64
    cus_nop
    .endr
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(2)(t4)

    // ====================================================================
    // CVXIF: CUS_ADD  (rd = rs1 + rs2)
    // ====================================================================
    csrr  t1, mcycle
    .rept REP
    cus_add t0, a0, a1
    cus_add t5, a0, a1
    cus_add t6, a0, a1
    cus_add a3, a0, a1
    cus_add a4, a0, a1
    cus_add a5, a0, a1
    cus_add a6, a0, a1
    cus_add a7, a0, a1
    .endr
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(3)(t4)

    // ====================================================================
    // CVXIF: CUS_DOUBLE_RS1  (rd = rs1 << 1)
    // ====================================================================
    csrr  t1, mcycle
    .rept REP
    cus_double_rs1 t0, a0, a1
    cus_double_rs1 t5, a0, a1
    cus_double_rs1 t6, a0, a1
    cus_double_rs1 a3, a0, a1
    cus_double_rs1 a4, a0, a1
    cus_double_rs1 a5, a0, a1
    cus_double_rs1 a6, a0, a1
    cus_double_rs1 a7, a0, a1
    .endr
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(4)(t4)

    // ====================================================================
    // CVXIF: CUS_DOUBLE_RS2  (rd = rs2 << 1)
    // ====================================================================
    csrr  t1, mcycle
    .rept REP
    cus_double_rs2 t0, a0, a1
    cus_double_rs2 t5, a0, a1
    cus_double_rs2 t6, a0, a1
    cus_double_rs2 a3, a0, a1
    cus_double_rs2 a4, a0, a1
    cus_double_rs2 a5, a0, a1
    cus_double_rs2 a6, a0, a1
    cus_double_rs2 a7, a0, a1
    .endr
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(5)(t4)

    // ====================================================================
    // CVXIF: CUS_ADD_MULTI  (rd = rs1 + rs2)
    // ====================================================================
    csrr  t1, mcycle
    .rept REP
    cus_add_multi t0, a0, a1
    cus_add_multi t5, a0, a1
    cus_add_multi t6, a0, a1
    cus_add_multi a3, a0, a1
    cus_add_multi a4, a0, a1
    cus_add_multi a5, a0, a1
    cus_add_multi a6, a0, a1
    cus_add_multi a7, a0, a1
    .endr
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(6)(t4)

    // ====================================================================
    // CVXIF: CUS_ADD_RS3_MADD  (rd = rs1 + rs2 + rs3)
    // ====================================================================
    csrr  t1, mcycle
    .rept REP
    cus_add_rs3_madd t0, a0, a1, a2
    cus_add_rs3_madd t5, a0, a1, a2
    cus_add_rs3_madd t6, a0, a1, a2
    cus_add_rs3_madd a3, a0, a1, a2
    cus_add_rs3_madd a4, a0, a1, a2
    cus_add_rs3_madd a5, a0, a1, a2
    cus_add_rs3_madd a6, a0, a1, a2
    cus_add_rs3_madd a7, a0, a1, a2
    .endr
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(7)(t4)

    // ====================================================================
    // CVXIF: CUS_ADD_RS3_MSUB  (rd = rs1 - rs2 - rs3)
    // ====================================================================
    csrr  t1, mcycle
    .rept REP
    cus_add_rs3_msub t0, a0, a1, a2
    cus_add_rs3_msub t5, a0, a1, a2
    cus_add_rs3_msub t6, a0, a1, a2
    cus_add_rs3_msub a3, a0, a1, a2
    cus_add_rs3_msub a4, a0, a1, a2
    cus_add_rs3_msub a5, a0, a1, a2
    cus_add_rs3_msub a6, a0, a1, a2
    cus_add_rs3_msub a7, a0, a1, a2
    .endr
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(8)(t4)

    // ====================================================================
    // CVXIF: CUS_ADD_RS3_NMADD (rd = -(rs1 + rs2 + rs3))
    // ====================================================================
    csrr  t1, mcycle
    .rept REP
    cus_add_rs3_nmadd t0, a0, a1, a2
    cus_add_rs3_nmadd t5, a0, a1, a2
    cus_add_rs3_nmadd t6, a0, a1, a2
    cus_add_rs3_nmadd a3, a0, a1, a2
    cus_add_rs3_nmadd a4, a0, a1, a2
    cus_add_rs3_nmadd a5, a0, a1, a2
    cus_add_rs3_nmadd a6, a0, a1, a2
    cus_add_rs3_nmadd a7, a0, a1, a2
    .endr
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(9)(t4)

    // ====================================================================
    // CVXIF: CUS_ADD_RS3_NMSUB (rd = -(rs1 - rs2 - rs3))
    // ====================================================================
    csrr  t1, mcycle
    .rept REP
    cus_add_rs3_nmsub t0, a0, a1, a2
    cus_add_rs3_nmsub t5, a0, a1, a2
    cus_add_rs3_nmsub t6, a0, a1, a2
    cus_add_rs3_nmsub a3, a0, a1, a2
    cus_add_rs3_nmsub a4, a0, a1, a2
    cus_add_rs3_nmsub a5, a0, a1, a2
    cus_add_rs3_nmsub a6, a0, a1, a2
    cus_add_rs3_nmsub a7, a0, a1, a2
    .endr
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(10)(t4)

    // ---- terminate cleanly (pass) ---------------------------------------
    li    a0, 0
    jal   exit

    .data
    .align 4
results:
    .word 0   // 0  baseline: c.nop
    .word 0   // 1  baseline: add
    .word 0   // 2  cus_nop
    .word 0   // 3  cus_add
    .word 0   // 4  cus_double_rs1
    .word 0   // 5  cus_double_rs2
    .word 0   // 6  cus_add_multi
    .word 0   // 7  cus_add_rs3_madd
    .word 0   // 8  cus_add_rs3_msub
    .word 0   // 9  cus_add_rs3_nmadd
    .word 0   // 10 cus_add_rs3_nmsub

// Diagnostic: map cycles(N) for back-to-back `add` to find the per-instruction
// throughput and any startup cost. Run veri-testharness only; read deltas from
// the commit trace (results at 0x80007000).

#include "cvxif_macros.h"
#include "../env/encoding.h"

#define RES_OFF(n) (n*4)
#define MEAS_ADD(N)          \
    csrr  t1, mcycle;        \
    .rept N;                 \
    add   t0, a0, a1;        \
    .endr;                   \
    csrr  t2, mcycle;        \
    sub   t3, t2, t1;        \
    sw    t3, RES_OFF(CNT)(t4);

    .globl main
    .align 4
main:
    li   a0, 0x10000000
    li   a1, 0x20000000
    lui  t4, %hi(results)
    addi t4, t4, %lo(results)

    // N=1, single dest t0 (RAW-free since only one)
    csrr  t1, mcycle
    add   t0, a0, a1
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(0)(t4)
    // N=2
    csrr  t1, mcycle
    add   t5, a0, a1
    add   t6, a0, a1
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(1)(t4)
    // N=4
    csrr  t1, mcycle
    add   t0, a0, a1
    add   t5, a0, a1
    add   t6, a0, a1
    add   a3, a0, a1
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(2)(t4)
    // N=8
    csrr  t1, mcycle
    add   t0, a0, a1
    add   t5, a0, a1
    add   t6, a0, a1
    add   a3, a0, a1
    add   a4, a0, a1
    add   a5, a0, a1
    add   a6, a0, a1
    add   a7, a0, a1
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(3)(t4)
    // N=16  (8-wide x2)
    csrr  t1, mcycle
    .rept 2
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
    sw    t3, RES_OFF(4)(t4)
    // N=32  (8-wide x4)
    csrr  t1, mcycle
    .rept 4
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
    sw    t3, RES_OFF(5)(t4)
    // N=64  (8-wide x8)
    csrr  t1, mcycle
    .rept 8
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
    sw    t3, RES_OFF(6)(t4)

    li    a0, 0
    jal   exit

    .data
    .align 4
results:
    .word 0  // N=1
    .word 0  // N=2
    .word 0  // N=4
    .word 0  // N=8
    .word 0  // N=16
    .word 0  // N=32
    .word 0  // N=64

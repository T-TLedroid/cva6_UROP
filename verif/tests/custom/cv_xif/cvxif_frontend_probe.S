// Frontend-bandwidth probe: compare 4-byte `add`, 2-byte `c.add` (real op),
// and 2-byte `c.nop`, 64 copies each. If c.add ~= add -> execute/commit bound.
// If c.add ~= c.nop -> frontend (instruction size) bound.

#include "cvxif_macros.h"
#include "../env/encoding.h"

#define RES_OFF(n) (n*4)

    .globl main
    .align 4
main:
    li   a0, 0x10000000
    li   a1, 0x20000000
    lui  t4, %hi(results)
    addi t4, t4, %lo(results)

    // 64x c.nop (2-byte, no-op)
    csrr  t1, mcycle
    .rept 64
    c.nop
    .endr
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(0)(t4)

    // 64x add (4-byte, real op), rotating dest
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
    sw    t3, RES_OFF(1)(t4)

    // 64x c.add (2-byte compressed, REAL op: rd = rd + rs2), rotating dest
    csrr  t1, mcycle
    .rept 8
    c.add t0, a0
    c.add t5, a1
    c.add t6, a0
    c.add a3, a1
    c.add a4, a0
    c.add a5, a1
    c.add a6, a0
    c.add a7, a1
    .endr
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(2)(t4)

    // 64x uncompressed nop (4-byte, real instruction `addi x0,x0,0` = nop)
    csrr  t1, mcycle
    .rept 64
    nop
    .endr
    csrr  t2, mcycle
    sub   t3, t2, t1
    sw    t3, RES_OFF(3)(t4)

    li    a0, 0
    jal   exit

    .data
    .align 4
results:
    .word 0  // c.nop (2B)
    .word 0  // add   (4B)
    .word 0  // c.add (2B real op)
    .word 0  // nop   (4B)

# See LICENSE for license details.

#*****************************************************************************
# Copyright 2026 Thales DIS France SAS
#
# Directed timing + correctness test for Direct-CI overlap / distance-to-
# consumer (AUTOISA_DIRECT_CI_TUTORIAL.md §11.2 / §11.3 / §11.4). Uses
# cus_delay (the pure latency probe) as the producer.
#
# For LAT=4 (1<<4 = 16 engine cycles) and K in {0,1,2,4,8,16,32}, it runs:
#
#     cus_delay t0, a0, 4        # producer: t0 = a0 after ~16 engine cycles
#     <K independent scalar insns>  (do not read t0)
#     add       t3, t0, a1       # consumer: reads the pending producer result
#
# FUNCTIONAL (hard pass/fail, §11.3): the consumer must read the producer's
#   fresh result (t3 == a0) for every K -- it never consumes a stale value.
# TIMING EVIDENCE (§11.2/§11.4): the measured delta T(K) ~ max(producer_latency,
#   K*scalar_cpi) -- flat for small K (the K scalars hide behind the producer),
#   then rising once K's work exceeds the producer latency. That max() shape,
#   not a sum, is the evidence that independent scalar work overlapped the
#   asynchronous CI execution. Deltas are stored to results[] (K=0..32 + the
#   standalone producer latency) and read from the commit trace via nm+grep.
#*****************************************************************************

#include "cvxif_macros.h"

# settle the fetch buffer before each measurement window
.macro DRAIN
    .rept 32
    c.nop
    .endr
.endm

  .globl main
main:
    la   a0, val_x1            # producer input value
    lw   a0, 0(a0)
    li   a1, 0                 # consumer "other" operand (0 -> t3 = t0)
    la   t6, results

    # ---- K = 0 (also the functional dependency check) ----
    DRAIN
    csrr t1, mcycle
    cus_delay t0, a0, 4
    add  t3, t0, a1
    csrr t5, mcycle
    sub  t4, t5, t1
    sw   t4, 0(t6)
    bne  t3, a0, fail          # consumer must see the producer result (t0==a0)

    # ---- K = 1 ----
    DRAIN
    csrr t1, mcycle
    cus_delay t0, a0, 4
    addi t2, t2, 1
    add  t3, t0, a1
    csrr t5, mcycle
    sub  t4, t5, t1
    sw   t4, 4(t6)
    bne  t3, a0, fail

    # ---- K = 2 ----
    DRAIN
    csrr t1, mcycle
    cus_delay t0, a0, 4
    addi t2, t2, 1
    addi t2, t2, 1
    add  t3, t0, a1
    csrr t5, mcycle
    sub  t4, t5, t1
    sw   t4, 8(t6)
    bne  t3, a0, fail

    # ---- K = 4 ----
    DRAIN
    csrr t1, mcycle
    cus_delay t0, a0, 4
    .rept 4
    addi t2, t2, 1
    .endr
    add  t3, t0, a1
    csrr t5, mcycle
    sub  t4, t5, t1
    sw   t4, 12(t6)
    bne  t3, a0, fail

    # ---- K = 8 ----
    DRAIN
    csrr t1, mcycle
    cus_delay t0, a0, 4
    .rept 8
    addi t2, t2, 1
    .endr
    add  t3, t0, a1
    csrr t5, mcycle
    sub  t4, t5, t1
    sw   t4, 16(t6)
    bne  t3, a0, fail

    # ---- K = 16 (K work now ~exceeds the 16c producer latency -> T rises) ----
    DRAIN
    csrr t1, mcycle
    cus_delay t0, a0, 4
    .rept 16
    addi t2, t2, 1
    .endr
    add  t3, t0, a1
    csrr t5, mcycle
    sub  t4, t5, t1
    sw   t4, 20(t6)
    bne  t3, a0, fail

    # ---- K = 32 ----
    DRAIN
    csrr t1, mcycle
    cus_delay t0, a0, 4
    .rept 32
    addi t2, t2, 1
    .endr
    add  t3, t0, a1
    csrr t5, mcycle
    sub  t4, t5, t1
    sw   t4, 24(t6)
    bne  t3, a0, fail

    # ---- standalone producer latency reference (engine ~16c) ----
    DRAIN
    csrr t1, mcycle
    cus_delay t0, a0, 4
    csrr t5, mcycle
    sub  t4, t5, t1
    sw   t4, 28(t6)

pass:
    li   a0, 0x0
    jal  exit

fail:
    li   a0, 0x1
    jal  exit

.balign 64
val_x1:
  .word 0x0000ABCD
results:
  .zero 64

# See LICENSE for license details.

#*****************************************************************************
# Copyright 2026 Thales DIS France SAS
#
# Licensed under the Solderpad Hardware Licence, Version 2.0 (the "License");
# SPDX-License-Identifier: Apache-2.0 WITH SHL-2.0
# You may obtain a copy of the License at https:#solderpad.org/licenses/
#
#----------------------------------------------------------------------------------
#
# Directed self-check test for the configurable-latency delay instruction of
# the CDFG execution engine (Direct-CI substrate) in the cvxif_example
# coprocessor (AUTOISA_DIRECT_CI_TUTORIAL.md, Task 1):
#
#   CUS_DELAY rd, rs1, lat  ->  rd = rs1 after (1 << lat) engine cycles
#
# cus_delay is a pure latency probe: its result is just rs1, isolating protocol
# and scheduling behavior from datapath complexity. The cases below cover the
# five supported latencies (1,2,4,8,16 cycles) and a data-dependency chain that
# forces the core's scoreboard to wait for a pending coprocessor result.
#----------------------------------------------------------------------------------

#include "cvxif_macros.h"

  .globl main
main:

    # --- Case 1: lat=0 (1 cycle), rd = rs1 = 42 ---
    li a0, 42
    cus_delay a3, a0, 0
    li t0, 42
    bne a3, t0, fail

    # --- Case 2: lat=1 (2 cycles), rd = rs1 = -1 ---
    li a0, -1
    cus_delay a3, a0, 1
    li t0, -1
    bne a3, t0, fail

    # --- Case 3: lat=2 (4 cycles), rd = rs1 = 0 ---
    li a0, 0
    cus_delay a3, a0, 2
    beq a3, x0, 3f
    j fail
3:

    # --- Case 4: lat=3 (8 cycles), rd = rs1 = 0x12345678 ---
    li a0, 0x12345678
    cus_delay a3, a0, 3
    li t0, 0x12345678
    bne a3, t0, fail

    # --- Case 5: lat=4 (16 cycles), rd = rs1 = 7 ---
    li a0, 7
    cus_delay a3, a0, 4
    li t0, 7
    bne a3, t0, fail

    # --- Case 6: dependency chain. The second cus_delay consumes the pending
    #     result of the first (a3), so the core must wait for the coprocessor
    #     writeback before issuing the second operand read. a4 = a3 = 99 ---
    li a0, 99
    cus_delay a3, a0, 3          # a3 = 99 (8-cycle engine job)
    cus_delay a4, a3, 0          # a4 = 99, waits for a3
    li t0, 99
    bne a4, t0, fail

pass:
    li a0, 0x0
    jal exit

fail:
    li a0, 0x1
    jal exit

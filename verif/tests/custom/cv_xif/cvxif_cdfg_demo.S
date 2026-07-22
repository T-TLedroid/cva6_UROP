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
# Directed self-check test for the multi-node CDFG demo instruction of the
# CDFG execution engine (Direct-CI substrate) in the cvxif_example coprocessor
# (AUTOISA_DIRECT_CI_TUTORIAL.md, Task 1):
#
#   CUS_CDFG_DEMO rd, rs1, rs2, rs3, lat  ->  rd = ((rs1 * rs2) + rs3) ^ (rs1 + rs3)
#
# The engine runs the graph as three stages (stage 1 computes the two parallel
# paths n_mul = rs1*rs2 and n_addB = rs1+rs3), each taking (1 << lat) cycles.
# Requires NrRgprPorts = 3 so rs3 is forwarded to the coprocessor.
#----------------------------------------------------------------------------------

#include "cvxif_macros.h"

  .globl main
main:

    # --- Case 1: lat=0, rd = ((3*7)+2) ^ (3+2) = 23 ^ 5 = 18 ---
    li a0, 3
    li a1, 7
    li a2, 2
    cus_cdfg_demo a3, a0, a1, a2, 0
    li t0, 18
    bne a3, t0, fail

    # --- Case 2: lat=3 (8 cyc/stage), rd = ((2*3)+4) ^ (2+4) = 10 ^ 6 = 12 ---
    li a0, 2
    li a1, 3
    li a2, 4
    cus_cdfg_demo a3, a0, a1, a2, 3
    li t0, 12
    bne a3, t0, fail

    # --- Case 3: cross-check against the core's scalar units, lat=1.
    #     rd = ((6*5)+2) ^ (6+2) = 32 ^ 8 = 40 ---
    li a0, 6
    li a1, 5
    li a2, 2
    cus_cdfg_demo a3, a0, a1, a2, 1
    mul t1, a0, a1            # t1 = rs1*rs2
    add t1, t1, a2           # t1 = (rs1*rs2)+rs3
    add t2, a0, a2           # t2 = rs1+rs3
    xor t0, t1, t2           # t0 = reference result
    bne a3, t0, fail

    # --- Case 4: negative operand, lat=2, rd = (((-2)*4)+3) ^ ((-2)+3) = -5 ^ 1 = -6 ---
    li a0, -2
    li a1, 4
    li a2, 3
    cus_cdfg_demo a3, a0, a1, a2, 2
    li t0, -6
    bne a3, t0, fail

    # --- Case 5: dependency on a pending coprocessor result. The demo consumes
    #     the result of a cus_delay (a3) as rs1.
    #     rd = ((30*3)+2) ^ (30+2) = 92 ^ 32 = 124 ---
    li a0, 30
    cus_delay a3, a0, 2          # a3 = 30 (pending engine job)
    li a1, 3
    li a2, 2
    cus_cdfg_demo a4, a3, a1, a2, 0   # rd = ((30*3)+2) ^ (30+2) = 124, waits for a3
    li t0, 124
    bne a4, t0, fail

pass:
    li a0, 0x0
    jal exit

fail:
    li a0, 0x1
    jal exit

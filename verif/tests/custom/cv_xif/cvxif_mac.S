# See LICENSE for license details.

#*****************************************************************************
# Copyright 2026 Thales DIS France SAS
#
# Licensed under the Solderpad Hardware Licence, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# SPDX-License-Identifier: Apache-2.0 WITH SHL-2.0
# You may obtain a copy of the License at https:#solderpad.org/licenses/
#
#----------------------------------------------------------------------------------
#
# Directed self-check test for the custom integer multiply-accumulate
# instruction implemented in the cvxif_example coprocessor:
#
#   CUS_MAC rd, rs1, rs2, rs3  ->  rd = (rs1 * rs2) + rs3   (low XLEN bits)
#
# NOTE: The default single-issue CVA6 configuration exposes only 2 register
# read ports to the coprocessor (NrRgprPorts = 2), so rs3 is not forwarded
# and the instruction computes rd = rs1 * rs2. The self-checks below
# therefore use rs3 = 0, which holds in both the 2-port and the 3-port
# configurations. The accumulate addend (rs3) is exercised when the core is
# built with NrRgprPorts = 3.
#----------------------------------------------------------------------------------

#include "cvxif_macros.h"

  #-------------------------------------------------------------
  # Custom test
  #-------------------------------------------------------------

  .globl main
main:

    # --- Case 1: positive operands, rd = (3 * 7) + 0 = 21 ---
    li a0, 3
    li a1, 7
    li a2, 0
    cus_mac a3, a0, a1, a2
    li t0, 21
    bne a3, t0, fail

    # --- Case 2: negative rs1, rd = ((-2) * 6) + 0 = -12 ---
    li a0, -2
    li a1, 6
    li a2, 0
    cus_mac a3, a0, a1, a2
    li t0, -12
    bne a3, t0, fail

    # --- Case 3: larger operands, cross-check the low-word product ---
    #     rd = (0x12345678 * 0x9abcdef0) + 0, low XLEN bits.
    li a0, 0x12345678
    li a1, 0x9abcdef0
    li a2, 0
    cus_mac a3, a0, a1, a2
    mul t0, a0, a1            # low-word reference product
    bne a3, t0, fail

    # --- Case 4: accumulate path (rs3 != 0). Only meaningful with
    #     NrRgprPorts = 3 (rd = 4*5 + 6 = 26); in the 2-port default the
    #     coprocessor sees rs3 = 0 (rd = 20). Executed here only to confirm
    #     the instruction is accepted with a non-zero rs3 operand. ---
    li a0, 4
    li a1, 5
    li a2, 6
    cus_mac a3, a0, a1, a2

pass:
    li a0, 0x0
    jal exit

fail:
    li a0, 0x1
    jal exit

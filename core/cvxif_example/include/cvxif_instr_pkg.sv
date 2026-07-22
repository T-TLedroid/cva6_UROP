// Copyright 2021 Thales DIS design services SAS
//
// Licensed under the Solderpad Hardware Licence, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// SPDX-License-Identifier: Apache-2.0 WITH SHL-2.0
// You may obtain a copy of the License at https://solderpad.org/licenses/
//
// Original Author: Guillaume Chauvon (guillaume.chauvon@thalesgroup.com)



package cvxif_instr_pkg;

  typedef enum logic [3:0] {
    ILLEGAL = 4'b0000,
    NOP = 4'b0001,
    ADD = 4'b0010,
    DOUBLE_RS1 = 4'b0011,
    DOUBLE_RS2 = 4'b0100,
    ADD_MULTI = 4'b0101,
    MADD_RS3_R4 = 4'b0110,
    MSUB_RS3_R4 = 4'b0111,
    NMADD_RS3_R4 = 4'b1000,
    NMSUB_RS3_R4 = 4'b1001,
    MAC = 4'b1010,
    DELAY = 4'b1011,      // cus_delay     : rd = rs1+rs2 after (1<<lat_sel) engine cycles
    CDFG_DEMO = 4'b1100,  // cus_cdfg_demo : rd = (rs1*rs2)*rs3, two-node chain
    ADD_RS3_R = 4'b1111
  } opcode_t;


  typedef struct packed {
    logic accept;
    logic writeback;  // TODO depends on dualwrite
    logic [2:0] register_read;  // TODO Nr read ports
  } issue_resp_t;

  typedef struct packed {
    logic        accept;
    logic [31:0] instr;
  } compressed_resp_t;

  typedef struct packed {
    logic [31:0] instr;
    logic [31:0] mask;
    issue_resp_t resp;
    opcode_t     opcode;
  } copro_issue_resp_t;


  typedef struct packed {
    logic [15:0]      instr;
    logic [15:0]      mask;
    compressed_resp_t resp;
  } copro_compressed_resp_t;

  // 4 Possible RISCV instructions for Coprocessor
  parameter int unsigned NbInstr = 13;
  parameter copro_issue_resp_t CoproInstr[NbInstr] = '{
      '{
          // Custom Nop
          instr:
          32'b00000_00_00000_00000_0_00_00000_1111011,  // custom3 opcode
          mask: 32'b11111_11_00000_00000_1_11_00000_1111111,
          resp : '{accept : 1'b1, writeback : 1'b0, register_read : {1'b0, 1'b0, 1'b0}},
          opcode : NOP
      },
      '{
          // Custom Add : cus_add rd, rs1, rs2
          instr:
          32'b00000_00_00000_00000_0_01_00000_1111011,  // custom3 opcode
          mask: 32'b11111_11_00000_00000_1_11_00000_1111111,
          resp : '{accept : 1'b1, writeback : 1'b1, register_read : {1'b0, 1'b1, 1'b1}},
          opcode : ADD
      },
      '{
          // Custom Add rs1 : cus_add rd, rs1, rs1
          instr:
          32'b00000_01_00000_00000_0_01_00000_1111011,  // custom3 opcode
          mask: 32'b11111_11_00000_00000_1_11_00000_1111111,
          resp : '{accept : 1'b1, writeback : 1'b1, register_read : {1'b0, 1'b0, 1'b1}},
          opcode : DOUBLE_RS1
      },
      '{
          // Custom Add rs2 : cus_add rd, rs2, rs2
          instr:
          32'b00000_10_00000_00000_0_01_00000_1111011,  // custom3 opcode
          mask: 32'b11111_11_00000_00000_1_11_00000_1111111,
          resp : '{accept : 1'b1, writeback : 1'b1, register_read : {1'b0, 1'b1, 1'b0}},
          opcode : DOUBLE_RS2
      },
      '{
          // Custom Add Multi rs1 : cus_add rd, rs1, rs1
          instr:
          32'b00000_11_00000_00000_0_01_00000_1111011,  // custom3 opcode
          mask: 32'b11111_11_00000_00000_1_11_00000_1111111,
          resp : '{accept : 1'b1, writeback : 1'b1, register_read : {1'b0, 1'b1, 1'b1}},
          opcode : ADD_MULTI
      },
      '{
          // Custom Add Multi rs1 : cus_add rd, rs1, rs1
          instr:
          32'b00001_00_00000_00000_0_01_00000_1111011,  // custom3 opcode
          mask: 32'b11111_11_00000_00000_1_11_00000_1111111,
          resp : '{accept : 1'b1, writeback : 1'b1, register_read : {1'b1, 1'b1, 1'b1}},
          opcode : ADD_RS3_R
      },
      '{
          // Custom Add Multi rs1 : cus_add rd, rs1, rs1
          instr:
          32'b00000_00_00000_00000_0_00_00000_1000011,  // MADD opcode
          mask: 32'b00000_11_00000_00000_1_11_00000_1111111,
          resp : '{accept : 1'b1, writeback : 1'b1, register_read : {1'b1, 1'b1, 1'b1}},
          opcode : MADD_RS3_R4
      },
      '{
          // Custom Add Multi rs1 : cus_add rd, rs1, rs1
          instr:
          32'b00000_00_00000_00000_0_00_00000_1000111,  // MSUB opcode
          mask: 32'b00000_11_00000_00000_1_11_00000_1111111,
          resp : '{accept : 1'b1, writeback : 1'b1, register_read : {1'b1, 1'b1, 1'b1}},
          opcode : MSUB_RS3_R4
      },
      '{
          // Custom Add Multi rs1 : cus_add rd, rs1, rs1
          instr:
          32'b00000_00_00000_00000_0_00_00000_1001011,  // NMSUB opcode
          mask: 32'b00000_11_00000_00000_1_11_00000_1111111,
          resp : '{accept : 1'b1, writeback : 1'b1, register_read : {1'b1, 1'b1, 1'b1}},
          opcode : NMSUB_RS3_R4
      },
      '{
          // Custom Add Multi rs1 : cus_add rd, rs1, rs1
          instr:
          32'b00000_00_00000_00000_0_00_00000_1001111,  // NMADD opcode
          mask: 32'b00000_11_00000_00000_1_11_00000_1111111,
          resp : '{accept : 1'b1, writeback : 1'b1, register_read : {1'b1, 1'b1, 1'b1}},
          opcode : NMADD_RS3_R4
      },
      '{
          // Custom integer Multiply-Accumulate : cus_mac rd, rs1, rs2, rs3
          // Computes rd = (rs1 * rs2) + rs3, low XLEN bits.
          // MADD opcode (R4-type) distinguished from the add-only MADD_RS3_R4
          // by funct3 = 0x1 (MADD_RS3_R4 uses funct3 = 0x0).
          instr:
          32'b00000_00_00000_00000_0_01_00000_1000011,  // MADD opcode, funct3 = 001
          mask: 32'b00000_11_00000_00000_1_11_00000_1111111,
          resp : '{accept : 1'b1, writeback : 1'b1, register_read : {1'b1, 1'b1, 1'b1}},
          opcode : MAC
      },
      '{
          // Custom configurable-latency delay : cus_delay rd, rs1, lat
          //   rd = rs1 after (1 << lat_sel) engine cycles (pure latency probe).
          // lat_sel is encoded in funct7[2:0] (0..4 -> 1,2,4,8,16); funct7[6:3]=0000 is
          // the fixed base. The mask leaves funct7[2:0] don't-care so all five
          // latencies decode to this single opcode (lat_sel read from instr in
          // instr_decoder). CUSTOM-3 opcode, funct3 = 010. Reads only rs1.
          instr:
          32'b00000_00_00000_00000_0_10_00000_1111011,
          mask: 32'b11110_00_00000_00000_1_11_00000_1111111,
          resp : '{accept : 1'b1, writeback : 1'b1, register_read : {1'b0, 1'b0, 1'b1}},
          opcode : DELAY
      },
      '{
          // Custom multi-node CDFG demo : cus_cdfg_demo rd, rs1, rs2, rs3, lat
          //   rd = ((rs1 * rs2) + rs3) ^ (rs1 + rs3)
          // executed by the CDFG engine as three stages (stage 1 runs the two
          // parallel paths), each taking (1 << lat_sel) cycles.
          // lat_sel is encoded in funct2[1:0] (0..3 -> 1,2,4,8 per stage); MADD
          // opcode (R4-type) with funct3 = 010 distinguishes it from cus_mac
          // (funct3 = 001). funct2 and rs3 are don't-care in the mask (rs3 is the
          // operand). Reads rs1, rs2, rs3.
          instr:
          32'b00000_00_00000_00000_0_10_00000_1000011,
          mask: 32'b00000_00_00000_00000_1_11_00000_1111111,
          resp : '{accept : 1'b1, writeback : 1'b1, register_read : {1'b1, 1'b1, 1'b1}},
          opcode : CDFG_DEMO
      }
  };

  parameter int unsigned NbCompInstr = 2;
  parameter copro_compressed_resp_t CoproCompInstr[NbCompInstr] = '{
      // C_NOP
      '{
          instr : 16'b111_0_00000_00000_00,
          mask : 16'b111_1_00000_00000_11,
          resp : '{accept : 1'b1, instr : 32'b00000_00_00000_00000_0_00_00000_1111011}
      },
      '{
          instr : 16'b111_1_00000_00000_00,
          mask : 16'b111_1_00000_00000_11,
          resp : '{accept : 1'b1, instr : 32'b00000_00_00000_00000_0_01_01010_1111011}
      }
  };

endpackage

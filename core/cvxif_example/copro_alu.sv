// Copyright 2024 Thales DIS France SAS
//
// Licensed under the Solderpad Hardware Licence, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// SPDX-License-Identifier: Apache-2.0 WITH SHL-2.0
// You may obtain a copy of the License at https://solderpad.org/licenses/
//
// Original Author: Guillaume Chauvon

module copro_alu
  import cvxif_instr_pkg::*;
#(
    parameter int unsigned NrRgprPorts = 2,
    parameter int unsigned XLEN = 32,
    parameter type hartid_t = logic,
    parameter type id_t = logic,
    parameter type registers_t = logic

) (
    input  logic                  clk_i,
    input  logic                  rst_ni,
    input  registers_t            registers_i,
    input  opcode_t               opcode_i,
    input  hartid_t               hartid_i,
    input  id_t                   id_i,
    input  logic       [     4:0] rd_i,
    output logic       [XLEN-1:0] result_o,
    output hartid_t               hartid_o,
    output id_t                   id_o,
    output logic       [     4:0] rd_o,
    output logic                  valid_o,
    output logic                  we_o,
    // Asserted while a MAC is in its second (accumulate) stage: the single
    // result register is busy emitting the pending MAC result, so the host
    // must not issue a new instruction this cycle. Gated into issue_ready in
    // cvxif_example_coprocessor.sv. (See the MAC note below.)
    output logic                  busy_o
);

  // -------------------------------------------------------------------------
  // Output register: the only stage for every opcode except MAC, for which it
  // is the second (accumulate) stage.
  // -------------------------------------------------------------------------
  logic [XLEN-1:0] result_n, result_q;
  hartid_t hartid_n, hartid_q;
  id_t id_n, id_q;
  logic valid_n, valid_q;
  logic [4:0] rd_n, rd_q;
  logic we_n, we_q;

  assign result_o = result_q;
  assign hartid_o = hartid_q;
  assign id_o     = id_q;
  assign valid_o  = valid_q;
  assign rd_o     = rd_q;
  assign we_o     = we_q;

  // -------------------------------------------------------------------------
  // MAC stage-1 register.
  //
  // cus_mulacc (opcode MAC) computes rd = (rs1 * rs2) + rs3. Doing the whole
  // multiply-accumulate in one combinational cycle puts a 32x32 multiply AND a
  // 32-bit add in the same cone -- longer than every other opcode (single
  // adders) and longer than the core's own multiply unit, which is itself a
  // single-stage multiplier that relies on retiming. Splitting MAC into two
  // stages gives the multiply and the add separate clock periods:
  //
  //   cycle T   : MAC issued  -> prod = rs1 * rs2 registered (mac_prod_q),
  //               busy_o raised
  //   cycle T+1 : host stalled (busy); result = prod + rs3 registered into the
  //               output register
  //   cycle T+2 : valid MAC result on the output  (2-cycle latency)
  //
  // The host is held for the T+1 cycle via issue_ready gating so the pending
  // MAC result (the oldest, in program order) is never overwritten by a
  // 1-cycle instruction issued the following cycle.
  // -------------------------------------------------------------------------
  logic             mac_s1_valid_d, mac_s1_valid_q;  // a MAC result is pending
  logic [XLEN-1:0]  mac_prod_d,  mac_prod_q;         // stage-1 product
  logic [XLEN-1:0]  mac_acc_q;                       // accumulate addend (rs3)
  hartid_t          mac_hartid_q;
  id_t              mac_id_q;
  logic [4:0]       mac_rd_q;
  logic             mac_we_q;

  // The unit is busy emitting a MAC result: do not accept a new instruction.
  assign busy_o = mac_s1_valid_q;

  // Stage 1 fires when a MAC is presented and no MAC result is already pending.
  assign mac_s1_valid_d = (opcode_i == cvxif_instr_pkg::MAC) && ~mac_s1_valid_q;
  // The multiply lives here alone -- it no longer shares a cone with the add.
  assign mac_prod_d = (opcode_i == cvxif_instr_pkg::MAC) ?
      (registers_i[0] * registers_i[1]) : '0;

  always_comb begin
    case (opcode_i)
      cvxif_instr_pkg::NOP: begin
        result_n = '0;
        hartid_n = hartid_i;
        id_n     = id_i;
        valid_n  = 1'b1;
        rd_n     = '0;
        we_n     = 1'b0;
      end
      cvxif_instr_pkg::ADD: begin
        result_n = registers_i[1] + registers_i[0];
        hartid_n = hartid_i;
        id_n     = id_i;
        valid_n  = 1'b1;
        rd_n     = rd_i;
        we_n     = 1'b1;
      end
      cvxif_instr_pkg::DOUBLE_RS1: begin
        result_n = registers_i[0] + registers_i[0];
        hartid_n = hartid_i;
        id_n     = id_i;
        valid_n  = 1'b1;
        rd_n     = rd_i;
        we_n     = 1'b1;
      end
      cvxif_instr_pkg::DOUBLE_RS2: begin
        result_n = registers_i[1] + registers_i[1];
        hartid_n = hartid_i;
        id_n     = id_i;
        valid_n  = 1'b1;
        rd_n     = rd_i;
        we_n     = 1'b1;
      end
      cvxif_instr_pkg::ADD_MULTI: begin
        result_n = registers_i[1] + registers_i[0];
        hartid_n = hartid_i;
        id_n     = id_i;
        valid_n  = 1'b1;
        rd_n     = rd_i;
        we_n     = 1'b1;
      end
      cvxif_instr_pkg::MADD_RS3_R4: begin
        result_n = NrRgprPorts == 3 ? (registers_i[0] + registers_i[1] + registers_i[2]) : (registers_i[0] + registers_i[1]);
        hartid_n = hartid_i;
        id_n = id_i;
        valid_n = 1'b1;
        rd_n = rd_i;
        we_n = 1'b1;
      end
      cvxif_instr_pkg::MSUB_RS3_R4: begin
        result_n = NrRgprPorts == 3 ? (registers_i[0] - registers_i[1] - registers_i[2]) : (registers_i[0] - registers_i[1]);
        hartid_n = hartid_i;
        id_n = id_i;
        valid_n = 1'b1;
        rd_n = rd_i;
        we_n = 1'b1;
      end
      cvxif_instr_pkg::NMADD_RS3_R4: begin
        result_n = NrRgprPorts == 3 ? ~(registers_i[0] + registers_i[1] + registers_i[2]) : ~(registers_i[0] + registers_i[1]);
        hartid_n = hartid_i;
        id_n = id_i;
        valid_n = 1'b1;
        rd_n = rd_i;
        we_n = 1'b1;
      end
      cvxif_instr_pkg::NMSUB_RS3_R4: begin
        result_n = NrRgprPorts == 3 ? ~(registers_i[0] - registers_i[1] - registers_i[2]) : ~(registers_i[0] - registers_i[1]);
        hartid_n = hartid_i;
        id_n = id_i;
        valid_n = 1'b1;
        rd_n = rd_i;
        we_n = 1'b1;
      end
      cvxif_instr_pkg::MAC: begin
        // 2-cycle: the multiply is registered in stage 1 (mac_prod_q) and the
        // accumulate add is performed in stage 2 (the override below). The fast
        // (1-cycle) path therefore does not emit a result for MAC.
        result_n = '0;
        hartid_n = hartid_i;
        id_n     = id_i;
        valid_n  = 1'b0;
        rd_n     = rd_i;
        we_n     = 1'b1;
      end
      cvxif_instr_pkg::ADD_RS3_R: begin
        result_n = NrRgprPorts == 3 ? registers_i[2] + registers_i[1] + registers_i[0] : registers_i[1] + registers_i[0];
        hartid_n = hartid_i;
        id_n = id_i;
        valid_n = 1'b1;
        rd_n = 5'b01010;
        we_n = 1'b1;
      end
      default: begin
        result_n = '0;
        hartid_n = '0;
        id_n     = '0;
        valid_n  = '0;
        rd_n     = '0;
        we_n     = '0;
      end
    endcase

    // Stage-2 MAC result takes priority over the fast path: it carries the
    // oldest pending result, which must stay in program order. The metadata
    // (id/rd/hartid/we) is the one captured at issue, so the result is tagged
    // with the original transaction id.
    if (mac_s1_valid_q) begin
      result_n = NrRgprPorts == 3 ? (mac_prod_q + mac_acc_q) : mac_prod_q;
      hartid_n = mac_hartid_q;
      id_n     = mac_id_q;
      valid_n  = 1'b1;
      rd_n     = mac_rd_q;
      we_n     = mac_we_q;
    end
  end

  always_ff @(posedge clk_i, negedge rst_ni) begin
    if (~rst_ni) begin
      result_q       <= '0;
      hartid_q       <= '0;
      id_q           <= '0;
      valid_q        <= '0;
      rd_q           <= '0;
      we_q           <= '0;
      mac_s1_valid_q <= 1'b0;
      mac_prod_q     <= '0;
      mac_acc_q      <= '0;
      mac_hartid_q   <= '0;
      mac_id_q       <= '0;
      mac_rd_q       <= '0;
      mac_we_q       <= '0;
    end else begin
      // Stage-2 (output) register
      result_q <= result_n;
      hartid_q <= hartid_n;
      id_q     <= id_n;
      valid_q  <= valid_n;
      rd_q     <= rd_n;
      we_q     <= we_n;
      // Stage-1 (MAC) register: capture product, addend and metadata on the
      // issue cycle. Values are only consumed when mac_s1_valid_q is set.
      mac_s1_valid_q <= mac_s1_valid_d;
      mac_prod_q     <= mac_prod_d;
      mac_acc_q      <= NrRgprPorts == 3 ? registers_i[2] : '0;
      mac_hartid_q   <= hartid_i;
      mac_id_q       <= id_i;
      mac_rd_q       <= rd_i;
      mac_we_q       <= 1'b1;
    end
  end

endmodule

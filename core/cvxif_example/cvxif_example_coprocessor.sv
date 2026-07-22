// Copyright 2024 Thales DIS France SAS
//
// Licensed under the Solderpad Hardware Licence, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// SPDX-License-Identifier: Apache-2.0 WITH SHL-2.0
// You may obtain a copy of the License at https://solderpad.org/licenses/
//
// Original Author: Guillaume Chauvon

module cvxif_example_coprocessor
  import cvxif_instr_pkg::*;
#(
    // CVXIF Types
    parameter  int unsigned NrRgprPorts         = 2,
    parameter  int unsigned XLEN                = 32,
    parameter  type         readregflags_t      = logic,
    parameter  type         writeregflags_t     = logic,
    parameter  type         id_t                = logic,
    parameter  type         hartid_t            = logic,
    parameter  type         x_compressed_req_t  = logic,
    parameter  type         x_compressed_resp_t = logic,
    parameter  type         x_issue_req_t       = logic,
    parameter  type         x_issue_resp_t      = logic,
    parameter  type         x_register_t        = logic,
    parameter  type         x_commit_t          = logic,
    parameter  type         x_result_t          = logic,
    parameter  type         cvxif_req_t         = logic,
    parameter  type         cvxif_resp_t        = logic,
    localparam type         registers_t         = logic [NrRgprPorts-1:0][XLEN-1:0]
) (
    input  logic        clk_i,        // Clock
    input  logic        rst_ni,       // Asynchronous reset active low
    input  cvxif_req_t  cvxif_req_i,
    output cvxif_resp_t cvxif_resp_o
);

  // Compressed interface signals
  x_compressed_req_t  compressed_req;
  x_compressed_resp_t compressed_resp;
  logic compressed_valid, compressed_ready;
  // Issue interface signals
  x_issue_req_t  issue_req;
  x_issue_resp_t issue_resp;
  logic issue_valid, issue_ready;

  // Register interface signals
  x_register_t register;
  logic register_valid;

  // Decoder and alu signals
  registers_t registers;
  opcode_t opcode;
  hartid_t issue_hartid, hartid;
  id_t issue_id, id;
  logic [4:0] issue_rd, rd;
  logic [XLEN-1:0] result;
  logic            we;
  // Raised by copro_alu while a MAC is in its second (accumulate) stage.
  // Holds the host off issuing a new instruction so the pending MAC result is
  // not overwritten at the single result register.
  logic            alu_busy;

  // CDFG engine signals (decoupled Direct-CI substrate for cus_delay /
  // cus_cdfg_demo; see cdfg_engine.sv).
  logic [2:0]      latency_sel;
  logic            is_cdfg_op;
  logic            cdfg_queue_free;
  logic            cdfg_push;
  logic            cdfg_result_valid;
  logic            cdfg_grant;
  hartid_t         cdfg_hartid;
  id_t             cdfg_id;
  logic [XLEN-1:0] cdfg_result;
  logic [4:0]      cdfg_rd;
  logic            cdfg_we;

  // Issue and Register interface
  // Mandatory when X_ISSUE_REGISTER_SPLIT = 0
  assign cvxif_resp_o.compressed_ready = compressed_ready;
  assign cvxif_resp_o.compressed_resp  = compressed_resp;
  // Issue acceptance is decoupled by opcode:
  //  - CDFG ops (cus_delay / cus_cdfg_demo) are accepted only when the request
  //    queue has a free entry (issue_ready = queue_has_free, NOT !engine_busy).
  //  - the 1-cycle combinational ops keep the existing path, gated by the ALU
  //    busy flag (MAC accumulate stage).
  assign is_cdfg_op                    = (opcode == cvxif_instr_pkg::DELAY) ||
                                         (opcode == cvxif_instr_pkg::CDFG_DEMO);
  assign cvxif_resp_o.issue_ready      = is_cdfg_op ? (issue_ready && cdfg_queue_free)
                                                    : (issue_ready && ~alu_busy);
  assign cvxif_resp_o.issue_resp       = issue_resp;
  assign cvxif_resp_o.register_ready   = cvxif_resp_o.issue_ready;

  assign compressed_req                = cvxif_req_i.compressed_req;
  assign compressed_valid              = cvxif_req_i.compressed_valid;
  assign issue_req                     = cvxif_req_i.issue_req;
  assign issue_valid                   = cvxif_req_i.issue_valid;
  assign register                      = cvxif_req_i.register;
  assign register_valid                = cvxif_req_i.register_valid;

  compressed_instr_decoder #(
      .copro_compressed_resp_t(cvxif_instr_pkg::copro_compressed_resp_t),
      .NbInstr(cvxif_instr_pkg::NbCompInstr),
      .CoproInstr(cvxif_instr_pkg::CoproCompInstr),
      .x_compressed_req_t(x_compressed_req_t),
      .x_compressed_resp_t(x_compressed_resp_t)
  ) compressed_instr_decoder_i (
      .clk_i             (clk_i),
      .rst_ni            (rst_ni),
      .compressed_valid_i(compressed_valid),
      .compressed_req_i  (compressed_req),
      .compressed_ready_o(compressed_ready),
      .compressed_resp_o (compressed_resp)
  );

  instr_decoder #(
      .copro_issue_resp_t (cvxif_instr_pkg::copro_issue_resp_t),
      .opcode_t (cvxif_instr_pkg::opcode_t),
      .NbInstr   (cvxif_instr_pkg::NbInstr),
      .CoproInstr(cvxif_instr_pkg::CoproInstr),
      .NrRgprPorts(NrRgprPorts),
      .hartid_t (hartid_t),
      .id_t (id_t),
      .x_issue_req_t (x_issue_req_t),
      .x_issue_resp_t (x_issue_resp_t),
      .x_register_t (x_register_t),
      .registers_t (registers_t)
  ) instr_decoder_i (
      .clk_i           (clk_i),
      .rst_ni          (rst_ni),
      .issue_valid_i   (issue_valid),
      .issue_req_i     (issue_req),
      .issue_ready_o   (issue_ready),
      .issue_resp_o    (issue_resp),
      .register_valid_i(register_valid),
      .register_i      (register),
      .registers_o     (registers),
      .opcode_o        (opcode),
      .latency_sel_o   (latency_sel),
      .hartid_o        (issue_hartid),
      .id_o            (issue_id),
      .rd_o            (issue_rd)
  );

  logic alu_valid;
  // Result interface
  copro_alu #(
      .NrRgprPorts(NrRgprPorts),
      .XLEN(XLEN),
      .hartid_t(hartid_t),
      .id_t(id_t),
      .registers_t(registers_t)
  ) i_copro_alu (
      .clk_i      (clk_i),
      .rst_ni     (rst_ni),
      .registers_i(registers),
      .opcode_i   (opcode),
      .hartid_i   (issue_hartid),
      .id_i       (issue_id),
      .rd_i       (issue_rd),
      .hartid_o   (hartid),
      .id_o       (id),
      .result_o   (result),
      .valid_o    (alu_valid),
      .rd_o       (rd),
      .we_o       (we),
      .busy_o     (alu_busy)
  );

  // A CDFG job is captured into the request queue on the cycle the host's
  // issue/register handshake succeeds for a delay/cdfg opcode.
  assign cdfg_push = issue_valid && is_cdfg_op && issue_ready && cdfg_queue_free;

  cdfg_engine #(
      .NrRgprPorts(NrRgprPorts),
      .XLEN(XLEN),
      .hartid_t(hartid_t),
      .id_t(id_t),
      .registers_t(registers_t),
      .x_commit_t(x_commit_t)
  ) i_cdfg_engine (
      .clk_i          (clk_i),
      .rst_ni         (rst_ni),
      .issue_valid_i  (cdfg_push),
      .opcode_i       (opcode),
      .latency_sel_i  (latency_sel),
      .hartid_i       (issue_hartid),
      .id_i           (issue_id),
      .rd_i           (issue_rd),
      .registers_i    (registers),
      .commit_valid_i (cvxif_req_i.commit_valid),
      .commit_i       (cvxif_req_i.commit),
      // The CDFG result is consumed only when it is granted the (shared) result
      // interface AND the host is ready. The ALU result is a single-cycle pulse
      // with no buffer, so it takes priority; the CDFG result waits in its
      // buffer on any cycle the ALU is emitting.
      .result_ready_i (cvxif_req_i.result_ready && cdfg_grant),
      .queue_free_o   (cdfg_queue_free),
      .result_valid_o (cdfg_result_valid),
      .result_hartid_o(cdfg_hartid),
      .result_id_o    (cdfg_id),
      .result_data_o  (cdfg_result),
      .result_rd_o    (cdfg_rd),
      .result_we_o    (cdfg_we)
  );

  // Result arbitration: ALU has priority (no buffer, must emit immediately);
  // the CDFG engine's buffered result is granted on any ALU-idle cycle.
  assign cdfg_grant = cdfg_result_valid && !alu_valid;

  always_comb begin
    if (alu_valid) begin
      cvxif_resp_o.result_valid  = 1'b1;
      cvxif_resp_o.result.hartid = hartid;
      cvxif_resp_o.result.id     = id;
      cvxif_resp_o.result.data   = result;
      cvxif_resp_o.result.rd     = rd;
      cvxif_resp_o.result.we     = we;
    end else if (cdfg_result_valid) begin
      cvxif_resp_o.result_valid  = 1'b1;
      cvxif_resp_o.result.hartid = cdfg_hartid;
      cvxif_resp_o.result.id     = cdfg_id;
      cvxif_resp_o.result.data   = cdfg_result;
      cvxif_resp_o.result.rd     = cdfg_rd;
      cvxif_resp_o.result.we     = cdfg_we;
    end else begin
      cvxif_resp_o.result_valid  = 1'b0;
      cvxif_resp_o.result.hartid = hartid;
      cvxif_resp_o.result.id     = id;
      cvxif_resp_o.result.data   = result;
      cvxif_resp_o.result.rd     = rd;
      cvxif_resp_o.result.we     = 1'b0;
    end
  end



endmodule

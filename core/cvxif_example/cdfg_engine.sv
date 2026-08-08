// Copyright 2024 Thales DIS France SAS
//
// Licensed under the Solderpad Hardware Licence, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// SPDX-License-Identifier: Apache-2.0 WITH SHL-2.0
// You may obtain a copy of the License at https://solderpad.org/licenses/
//
// Original Author: Guillaume Chauvon
//
// CDFG execution engine for the CV-X-IF example coprocessor.
//
// This is the Phase 1 "Direct-CI substrate" described in
// AUTOISA_DIRECT_CI_TUTORIAL.md: a decoupled accept/execute/commit machine for
// two custom ops, deliberately separated from the 1-cycle combinational
// copro_alu (which keeps handling cus_add / cus_mac / ...).
//
//   cus_delay      : rd = rs1 after (1 << lat_sel) engine cycles
//                    (pure latency probe -- isolates protocol/scheduling from
//                     datapath complexity; tutorial §10 Task 1)
//   cus_cdfg_demo  : rd = ((rs1 * rs2) + rs3) ^ (rs1 + rs3)
//                    a small multi-node CDFG with two parallel paths and a
//                    non-trivial critical path, executed as three stages, each
//                    taking (1 << lat_sel) cycles:
//                      stage 1 (parallel): n_mul = rs1*rs2  ||  n_addB = rs1+rs3
//                      stage 2           : n_addA = n_mul + rs3
//                      stage 3           : rd     = n_addA ^ n_addB
//
// Structure (see the tutorial):
//   request queue (depth 2) -> single execution engine -> result buffer (ready/valid)
//   commit/kill job state keyed on {hartid, id}.
//
//   issue acceptance (queue_free_o) = request queue has a free entry
//                                     (NOT !engine_busy)
//   result_valid_o = compute_done && commit_seen && !killed
//   A kill wins over engine_done in the same cycle.
//   Kill handling by job state:
//     QUEUED  -> dropped (never dispatched)
//     RUNNING -> aborted (compute discarded)
//     DONE    -> buffered result deleted (never emitted)
//
// In the real CVA6 core the CV-X-IF commit transaction is driven at issue time
// (commit_kill is always 0 there), so a job sees its commit the same cycle it is
// accepted and results simply emit once compute is done. The full commit/kill
// machinery (commit gating and all three kill states) is exercised by the
// standalone unit testbench, which drives the commit interface directly.

module cdfg_engine
  import cvxif_instr_pkg::*;
#(
  parameter int unsigned NrRgprPorts = 2,
  parameter int unsigned XLEN        = 32,
  parameter type         hartid_t    = logic,
  parameter type         id_t        = logic,
  parameter type         registers_t = logic,
  parameter type         x_commit_t  = logic
) (
  input  logic             clk_i,
  input  logic             rst_ni,

  // Accepted CDFG job: the host's issue/register handshake has succeeded for a
  // delay/cdfg opcode this cycle. Captured into the request queue.
  input  logic             issue_valid_i,
  input  opcode_t          opcode_i,
  input  logic [2:0]       latency_sel_i,
  input  hartid_t          hartid_i,
  input  id_t              id_i,
  input  logic [4:0]       rd_i,
  input  registers_t       registers_i,

  // Commit / kill interface (forwarded from cvxif_req_i.commit).
  input  logic             commit_valid_i,
  input  x_commit_t        commit_i,

  // Host result backpressure (forwarded from cvxif_req_i.result_ready).
  input  logic             result_ready_i,

  // There is room in the request queue for another job (drives issue_ready for
  // the cdfg opcodes).
  output logic             queue_free_o,

  // Result interface (single source; arbitration with copro_alu happens in the
  // coprocessor shell).
  output logic             result_valid_o,
  output hartid_t          result_hartid_o,
  output id_t              result_id_o,
  output logic [XLEN-1:0]  result_data_o,
  output logic [4:0]       result_rd_o,
  output logic             result_we_o
);

  // --------------------------------------------------------------------------
  // Local helpers
  // --------------------------------------------------------------------------

  // (1 << lat_sel) engine cycles per delay / per CDFG stage. lat_sel 0..4 ->
  // 1,2,4,8,16 (DELAY); 0..3 -> 1,2,4,8 per stage (CDFG_DEMO).
  function automatic logic [5:0] lat_cycles(input logic [2:0] sel);
    return 6'd1 << sel;
  endfunction

  // rs3 operand: only meaningful with 3 register read ports.
  logic [XLEN-1:0] rs3_operand;
  generate
    if (NrRgprPorts >= 3) begin : g_rs3
      assign rs3_operand = registers_i[2];
    end else begin : g_no_rs3
      assign rs3_operand = '0;
    end
  endgenerate

  // --------------------------------------------------------------------------
  // Job descriptor carried through queue -> engine -> result
  // --------------------------------------------------------------------------
  typedef struct packed {
    logic             valid;
    logic             killed;       // a kill has been received for this {hartid,id}
    logic             commit_seen;  // a (non-kill) commit has been received
    opcode_t          opcode;
    logic [2:0]       lat_sel;
    hartid_t          hartid;
    id_t              id;
    logic [4:0]       rd;
    logic [XLEN-1:0]  op_a;         // rs1
    logic [XLEN-1:0]  op_b;         // rs2 (CDFG_DEMO only)
    logic [XLEN-1:0]  op_c;         // rs3 (valid only with NrRgprPorts==3)
  } job_t;

  // Commit/kill match helpers against a job.
  function automatic logic kill_for(input job_t j);
    return commit_valid_i &&  commit_i.commit_kill && j.valid &&
           (j.hartid == commit_i.hartid) && (j.id == commit_i.id);
  endfunction
  function automatic logic commit_for(input job_t j);
    return commit_valid_i && !commit_i.commit_kill && j.valid &&
           (j.hartid == commit_i.hartid) && (j.id == commit_i.id);
  endfunction

  // --------------------------------------------------------------------------
  // Request queue (depth 2). q0 is the head (oldest), q1 the next.
  // --------------------------------------------------------------------------
  job_t q0_q, q0_d, q1_q, q1_d;
  // Commit-updated view of the queue entries (flags folded in this cycle).
  job_t q0_cu, q1_cu;
  always_comb begin
    q0_cu = q0_q;
    q1_cu = q1_q;
    if (kill_for(q0_q))   q0_cu.killed      = 1'b1;
    if (commit_for(q0_q)) q0_cu.commit_seen = 1'b1;
    if (kill_for(q1_q))   q1_cu.killed      = 1'b1;
    if (commit_for(q1_q)) q1_cu.commit_seen = 1'b1;
  end

  logic q0_v, q1_v;
  assign q0_v = q0_q.valid;
  assign q1_v = q1_q.valid;
  // Free while the second slot is empty (q1_v => q0_v, so !q1_v means <2 used).
  assign queue_free_o = !q1_v;

  // --------------------------------------------------------------------------
  // Execution engine slot
  //
  // DELAY     : E_RUN1 only                    -> rd = rs1
  // CDFG_DEMO : E_RUN1 -> E_RUN2 -> E_RUN3     -> rd = ((rs1*rs2)+rs3) ^ (rs1+rs3)
  //   stage 1 (E_RUN1, parallel): n_mul = rs1*rs2  ||  n_addB = rs1+rs3
  //   stage 2 (E_RUN2)          : n_addA = n_mul + rs3
  //   stage 3 (E_RUN3)          : result = n_addA ^ n_addB
  // --------------------------------------------------------------------------
  typedef enum logic [2:0] {E_IDLE, E_RUN1, E_RUN2, E_RUN3, E_HOLD} eng_state_t;
  eng_state_t    eng_state_q, eng_state_d;
  job_t          eng_q, eng_d;
  logic [5:0]    cnt_q, cnt_d;
  logic [XLEN-1:0] mul_q, mul_d;     // CDFG stage1: n_mul  = rs1 * rs2
  logic [XLEN-1:0] addb_q, addb_d;   // CDFG stage1: n_addB = rs1 + rs3
  logic [XLEN-1:0] adda_q, adda_d;   // CDFG stage2: n_addA = n_mul + rs3
  logic [XLEN-1:0] res_q, res_d;     // computed result held while waiting for slot

  // --------------------------------------------------------------------------
  // Optional event instrumentation (Task 6). Enable at build time by passing
  //   +define+CDFG_EVENT_TRACE  to the simulator
  // (e.g. cva6.py --isscomp_opts="+define+CDFG_EVENT_TRACE"). Off by default:
  // no counter, no $display, nothing in a non-instrumented/synthesis build.
  // Prints one line per event, tagged by job id, so latencies are read directly
  // off the event stream:
  //   ACCEPT  -> job captured into the request queue
  //   DISPAT  -> engine starts the job                (queue wait = DISPAT-ACCEPT)
  //   DONE    -> compute finished (engine_lat inline) (engine_lat = DONE-DISPAT)
  //   RESULT  -> result handed to the host            (end-to-end = RESULT-ACCEPT)
  // --------------------------------------------------------------------------
`ifdef CDFG_EVENT_TRACE
  logic [31:0] cyc_q;            // free-running cycle counter
  logic [31:0] eng_disp_cyc_q;   // dispatch cycle of the currently running job
`endif

  // Result buffer (depth 1).
  typedef struct packed {
    logic             valid;
    logic             killed;
    logic             commit_seen;
    hartid_t          hartid;
    id_t              id;
    logic [4:0]       rd;
    logic [XLEN-1:0]  data;
  } result_t;
  result_t rbuf_q, rbuf_d;

  // Commit match on the buffered result (result_t, not job_t).
  logic rbuf_kill, rbuf_commit;
  assign rbuf_kill   = commit_valid_i &&  commit_i.commit_kill && rbuf_q.valid &&
                       (rbuf_q.hartid == commit_i.hartid) && (rbuf_q.id == commit_i.id);
  assign rbuf_commit = commit_valid_i && !commit_i.commit_kill && rbuf_q.valid &&
                       (rbuf_q.hartid == commit_i.hartid) && (rbuf_q.id == commit_i.id);

  // --------------------------------------------------------------------------
  // Engine <-> result-buffer handshake
  // --------------------------------------------------------------------------
  logic bbuf_free;       // result buffer can accept a fresh compute
  assign bbuf_free = !rbuf_q.valid;

  // The engine takes (pops) the queue head when idle, the buffer is free, and
  // the head is not a killed job.
  logic eng_take_run;    // pop a live head into the engine
  logic eng_take_drop;   // drop a killed head without running it
  always_comb begin
    eng_take_run  = (eng_state_q == E_IDLE) && q0_v && bbuf_free && !q0_cu.killed;
    eng_take_drop = (eng_state_q == E_IDLE) && q0_v && bbuf_free &&  q0_cu.killed;
  end

  // Final result of the current engine job (combinational).
  //   DELAY     : rs1
  //   CDFG_DEMO : n_addA ^ n_addB  (valid once stage 3 finishes)
  logic [XLEN-1:0] eng_result;
  always_comb begin
    if (eng_q.opcode == cvxif_instr_pkg::DELAY) begin
      eng_result = eng_q.op_a;
    end else begin  // CDFG_DEMO
      eng_result = adda_q ^ addb_q;
    end
  end

  // Whether the engine is finishing a stage this cycle.
  logic eng_run1_done, eng_run2_done, eng_run3_done;
  assign eng_run1_done = (eng_state_q == E_RUN1) && (cnt_q <= 6'd1);
  assign eng_run2_done = (eng_state_q == E_RUN2) && (cnt_q <= 6'd1);
  assign eng_run3_done = (eng_state_q == E_RUN3) && (cnt_q <= 6'd1);

  // "kill wins over done": a kill arriving this cycle (or already registered)
  // suppresses the result.
  logic eng_killed_now;
  assign eng_killed_now = eng_q.killed || kill_for(eng_q);

  // Deposit the computed result directly into the buffer if it is free when the
  // *final* stage finishes; otherwise hold in E_HOLD. Only the final stage
  // deposits: DELAY finishes at E_RUN1, CDFG_DEMO at E_RUN3.
  logic deposit_now;
  assign deposit_now = ((eng_run1_done && (eng_q.opcode == cvxif_instr_pkg::DELAY)) ||
                        eng_run3_done) && !eng_killed_now && bbuf_free;

  // --------------------------------------------------------------------------
  // Combinational next-state
  // --------------------------------------------------------------------------
  always_comb begin
    // ---- defaults: hold ----
    q0_d        = q0_cu;
    q1_d        = q1_cu;
    eng_state_d = eng_state_q;
    eng_d       = eng_q;
    cnt_d       = cnt_q;
    mul_d       = mul_q;
    addb_d      = addb_q;
    adda_d      = adda_q;
    res_d       = res_q;
    rbuf_d      = rbuf_q;

    // ---- commit/kill flag updates on engine slot and buffered result ----
    if (kill_for(eng_q))   eng_d.killed      = 1'b1;
    if (commit_for(eng_q)) eng_d.commit_seen = 1'b1;
    if (rbuf_kill)         rbuf_d.killed      = 1'b1;
    if (rbuf_commit)       rbuf_d.commit_seen = 1'b1;

    // ---- queue pop (head consumed: run or dropped-as-killed) ----
    if (eng_take_run || eng_take_drop) begin
      q0_d = q1_cu;
      q1_d.valid = 1'b0;
    end

    // ---- engine FSM ----
    case (eng_state_q)
      E_IDLE: begin
        if (eng_take_run) begin
          eng_d       = q0_cu;                 // load head (flags already folded)
          eng_d.valid = 1'b1;
          cnt_d       = lat_cycles(q0_cu.lat_sel);
          eng_state_d = E_RUN1;
        end
      end
      E_RUN1: begin
        if (eng_killed_now) begin
          // RUNNING kill -> abort, discard compute.
          eng_state_d = E_IDLE;
          eng_d.valid = 1'b0;
        end else if (eng_run1_done) begin
          if (eng_q.opcode == cvxif_instr_pkg::DELAY) begin
            res_d = eng_q.op_a;                // rd = rs1
            eng_state_d = bbuf_free ? E_IDLE : E_HOLD;
            if (bbuf_free) eng_d.valid = 1'b0;
          end else begin  // CDFG_DEMO stage 1 (parallel): n_mul || n_addB
            mul_d  = eng_q.op_a * eng_q.op_b;  // n_mul  = rs1 * rs2
            addb_d = eng_q.op_a + eng_q.op_c;  // n_addB = rs1 + rs3
            cnt_d  = lat_cycles(eng_q.lat_sel);
            eng_state_d = E_RUN2;
          end
        end else begin
          cnt_d = cnt_q - 6'd1;
        end
      end
      E_RUN2: begin
        if (eng_killed_now) begin
          eng_state_d = E_IDLE;
          eng_d.valid = 1'b0;
        end else if (eng_run2_done) begin
          adda_d = mul_q + eng_q.op_c;          // n_addA = n_mul + rs3
          cnt_d  = lat_cycles(eng_q.lat_sel);
          eng_state_d = E_RUN3;
        end else begin
          cnt_d = cnt_q - 6'd1;
        end
      end
      E_RUN3: begin
        if (eng_killed_now) begin
          eng_state_d = E_IDLE;
          eng_d.valid = 1'b0;
        end else if (eng_run3_done) begin
          res_d = adda_q ^ addb_q;             // rd = n_addA ^ n_addB
          eng_state_d = bbuf_free ? E_IDLE : E_HOLD;
          if (bbuf_free) eng_d.valid = 1'b0;
        end else begin
          cnt_d = cnt_q - 6'd1;
        end
      end
      E_HOLD: begin
        // Result is held in res_q, waiting for the buffer to free.
        if (eng_killed_now) begin
          eng_state_d = E_IDLE;
          eng_d.valid = 1'b0;
        end else if (bbuf_free) begin
          eng_state_d = E_IDLE;
          eng_d.valid = 1'b0;
        end
      end
      default: begin
        eng_state_d = E_IDLE;
        eng_d.valid = 1'b0;
      end
    endcase

    // ---- deposit the computed result into the buffer ----
    if (deposit_now) begin
      rbuf_d.valid       = 1'b1;
      rbuf_d.killed      = 1'b0;
      rbuf_d.commit_seen = eng_d.commit_seen;   // carries this-cycle commit too
      rbuf_d.hartid      = eng_q.hartid;
      rbuf_d.id          = eng_q.id;
      rbuf_d.rd          = eng_q.rd;
      rbuf_d.data        = eng_result;
    end else if (eng_state_q == E_HOLD && bbuf_free && !eng_killed_now) begin
      // Held result finally deposits.
      rbuf_d.valid       = 1'b1;
      rbuf_d.killed      = 1'b0;
      rbuf_d.commit_seen = eng_d.commit_seen;
      rbuf_d.hartid      = eng_q.hartid;
      rbuf_d.id          = eng_q.id;
      rbuf_d.rd          = eng_q.rd;
      rbuf_d.data        = res_q;
    end

    // ---- drain the buffer ----
    if (rbuf_q.valid && rbuf_q.killed) begin
      // DONE kill -> delete buffered result, never emit.
      rbuf_d.valid = 1'b0;
    end else if (result_valid_o && result_ready_i) begin
      // Emitted to the host.
      rbuf_d.valid = 1'b0;
    end

    // ---- push a freshly accepted job into the tail of the queue ----
    if (issue_valid_i) begin
      job_t nj;
      nj.valid       = 1'b1;
      nj.killed      = 1'b0;
      // Same-cycle commit-at-issue (real core commits with the issue handshake):
      // a non-kill commit for this id this cycle marks the job committed up
      // front. A same-cycle kill would simply never have been accepted (the
      // shell gates issue on queue_free only; kill arrives via the commit
      // interface and is applied next cycle if it targets this job).
      nj.commit_seen = commit_valid_i && !commit_i.commit_kill &&
                       (commit_i.hartid == hartid_i) && (commit_i.id == id_i);
      nj.opcode      = opcode_i;
      nj.lat_sel     = latency_sel_i;
      nj.hartid      = hartid_i;
      nj.id          = id_i;
      nj.rd          = rd_i;
      nj.op_a        = registers_i[0];
      nj.op_b        = registers_i[1];
      nj.op_c        = rs3_operand;
      // Fill the lowest empty slot (q0 first, then q1). After a pop above q0_d
      // already holds the old q1, so this lands at the true tail. If both slots
      // are full, drop the offer: a protocol-compliant host never asserts
      // issue_valid_i while queue_free_o is low (the coprocessor shell gates
      // cdfg_push on queue_free), so this guard is purely defensive.
      if (!q0_d.valid)        q0_d = nj;
      else if (!q1_d.valid)   q1_d = nj;
    end
  end

  // --------------------------------------------------------------------------
  // Result interface
  // --------------------------------------------------------------------------
  assign result_valid_o  = rbuf_q.valid && rbuf_q.commit_seen && !rbuf_q.killed;
  assign result_hartid_o = rbuf_q.hartid;
  assign result_id_o     = rbuf_q.id;
  assign result_data_o   = rbuf_q.data;
  assign result_rd_o     = rbuf_q.rd;
  assign result_we_o     = result_valid_o;

  // --------------------------------------------------------------------------
  // Sequential state
  // --------------------------------------------------------------------------
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (~rst_ni) begin
      q0_q        <= '{default: '0, opcode: cvxif_instr_pkg::ILLEGAL};
      q1_q        <= '{default: '0, opcode: cvxif_instr_pkg::ILLEGAL};
      eng_state_q <= E_IDLE;
      eng_q       <= '{default: '0, opcode: cvxif_instr_pkg::ILLEGAL};
      cnt_q       <= '0;
      mul_q       <= '0;
      addb_q      <= '0;
      adda_q      <= '0;
      res_q       <= '0;
      rbuf_q      <= '{default: '0};
    end else begin
      q0_q        <= q0_d;
      q1_q        <= q1_d;
      eng_state_q <= eng_state_d;
      eng_q       <= eng_d;
      cnt_q       <= cnt_d;
      mul_q       <= mul_d;
      addb_q      <= addb_d;
      adda_q      <= adda_d;
      res_q       <= res_d;
      rbuf_q      <= rbuf_d;
    end
  end

`ifdef CDFG_EVENT_TRACE
  // Free-running cycle counter, per-job dispatch stamp, and the event trace.
  // engine_lat at DONE is the pure engine compute latency (isolated from
  // fetch/issue/scoreboard overhead), which is what verifies the configured
  // (1<<lat_sel) cycle counts.
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (~rst_ni) begin
      cyc_q         <= '0;
      eng_disp_cyc_q <= '0;
    end else begin
      cyc_q <= cyc_q + 1'b1;
      if (eng_take_run) eng_disp_cyc_q <= cyc_q;   // stamp dispatch of the job
      if (issue_valid_i)
        $display("[cdfg] ACCEPT  cyc=%0d id=%0d rd=%0d op=%s lat=%0d",
                 cyc_q, id_i, rd_i, opcode_i.name(), latency_sel_i);
      if (eng_take_run)
        $display("[cdfg] DISPAT  cyc=%0d id=%0d", cyc_q, q0_cu.id);
      if (((eng_run1_done && (eng_q.opcode == cvxif_instr_pkg::DELAY)) || eng_run3_done)
          && !eng_killed_now)
        $display("[cdfg] DONE    cyc=%0d id=%0d engine_lat=%0d",
                 cyc_q, eng_q.id, cyc_q - eng_disp_cyc_q);
      if (result_valid_o && result_ready_i)
        $display("[cdfg] RESULT  cyc=%0d id=%0d", cyc_q, rbuf_q.id);
    end
  end
`endif

endmodule

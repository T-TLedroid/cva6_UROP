`timescale 1ns/1ps
//
// cdfg_tb — module-level testbench for cdfg_engine (WS1b).
//
// Drives the engine's CV-X-IF-facing interface directly so it can exercise the
// protocol behaviors the full CVA6 core cannot reach (the real core holds
// commit_kill=0 and result_ready=1 always): the commit/kill matrix (§11.7),
// result backpressure (§11.6), queue-full (§11.5), the kill/done race (§8.4),
// and the commit gate / private-until-commit (§8.1).
//
// clk and rst_n are driven from C++ (cdfg_tb_main.cpp); stimulus runs in this
// initial block via @(posedge clk) under Verilator --timing.
//
// PASS/FAIL: every check uses the `check()` task, which increments n_fail on a
// mismatch and prints a diagnostic. The final summary is printed before
// $finish; cdfg_tb_main returns nonzero if the sim hangs instead of finishing.
//
module cdfg_tb (
  input logic clk,
  input logic rst_n
);
  import cvxif_instr_pkg::*;

  // ---- concrete type bindings for the parameterized engine ----
  // id_t is wide enough that next_id never wraps within a run (~300 jobs), so a
  // job id is never reused while its seen[]/seen_data[] entry is still live.
  typedef logic [0:0]        hartid_t;
  typedef logic [9:0]        id_t;
  typedef logic [2:0][31:0]  registers_t;            // NrRgprPorts == 3
  typedef struct packed {
    hartid_t hartid;
    id_t     id;
    logic    commit_kill;
  } x_commit_t;

  // ---- DUT I/O ----
  logic       issue_valid;
  opcode_t    opcode;
  logic [2:0] latency_sel;
  hartid_t    hartid;
  id_t        id;
  logic [4:0] rd;
  registers_t registers;
  logic       commit_valid;
  x_commit_t  commit;
  logic       result_ready;
  logic        queue_free;
  logic        result_valid;
  hartid_t     result_hartid;
  id_t         result_id;
  logic [31:0] result_data;
  logic [4:0]  result_rd;
  logic        result_we;

  cdfg_engine #(
      .NrRgprPorts (3),
      .XLEN        (32),
      .hartid_t    (hartid_t),
      .id_t        (id_t),
      .registers_t (registers_t),
      .x_commit_t  (x_commit_t)
  ) dut (
      .clk_i(clk), .rst_ni(rst_n),
      .issue_valid_i(issue_valid), .opcode_i(opcode), .latency_sel_i(latency_sel),
      .hartid_i(hartid), .id_i(id), .rd_i(rd), .registers_i(registers),
      .commit_valid_i(commit_valid), .commit_i(commit), .result_ready_i(result_ready),
      .queue_free_o(queue_free), .result_valid_o(result_valid),
      .result_hartid_o(result_hartid), .result_id_o(result_id),
      .result_data_o(result_data), .result_rd_o(result_rd), .result_we_o(result_we)
  );

  // ---- result monitor + expected-value storage ----
  // seen[jid]==1 once a result for jid has transferred (result_valid && result_ready).
  id_t         next_id;
  logic        seen [1024];
  logic [31:0] seen_data [1024];
  int          transfer_count;
  logic [31:0] exp_data [1024];

  always_ff @(posedge clk) begin
    if (rst_n && result_valid && result_ready) begin
      seen[result_id] <= 1'b1;
      seen_data[result_id] <= result_data;
      transfer_count <= transfer_count + 1;
    end
    if (!rst_n) begin
      transfer_count <= 0;
    end
  end

  // ---- accounting ----
  int n_pass, n_fail;
  string cur_test;

  task check(input cond, input string msg);
    begin
      if (cond) n_pass = n_pass + 1;
      else begin
        n_fail = n_fail + 1;
        $display("[cdfg_tb] FAIL [%s] %s", cur_test, msg);
      end
    end
  endtask

  task clear_seen(input id_t jid);
    begin seen[jid] = 1'b0; end
  endtask

  // ---- primitive driver tasks ----
  // Advance n posedges.
  task tick(input int n);
    int k;
    begin
      for (k = 0; k < n; k = k + 1) @(posedge clk);
    end
  endtask

  // Issue one job, captured on exactly one posedge. with_commit drives the
  // same-cycle non-kill commit that the real core pairs with the issue.
  task do_issue(input opcode_t op, input logic [2:0] lat,
                input logic [31:0] a, b, c, input logic [4:0] rdd,
                input logic with_commit, output id_t jid);
    begin
      @(negedge clk);
      while (!queue_free) @(negedge clk);   // never issue into a full queue
      jid            = next_id; next_id = next_id + 1;
      issue_valid    = 1'b1;
      opcode         = op;
      latency_sel    = lat;
      hartid         = '0;
      id             = jid;
      rd             = rdd;
      registers[0]   = a; registers[1] = b; registers[2] = c;
      commit_valid   = with_commit;
      commit.hartid  = '0;
      commit.id      = jid;
      commit.commit_kill = 1'b0;
      @(posedge clk);                       // engine captures the job here
      @(negedge clk);
      issue_valid  = 1'b0;
      commit_valid = 1'b0;
    end
  endtask

  // Issue one job but do NOT pair a commit (for the commit-gate test). Refuses
  // to wait on queue_free so the caller controls timing; asserts into a free slot.
  task do_issue_nocommit(input opcode_t op, input logic [2:0] lat,
                         input logic [31:0] a, b, c, input logic [4:0] rdd,
                         output id_t jid);
    begin
      @(negedge clk);
      jid            = next_id; next_id = next_id + 1;
      issue_valid    = 1'b1;
      opcode         = op;
      latency_sel    = lat;
      hartid         = '0;
      id             = jid;
      rd             = rdd;
      registers[0]   = a; registers[1] = b; registers[2] = c;
      commit_valid   = 1'b0;
      @(posedge clk);
      @(negedge clk);
      issue_valid = 1'b0;
    end
  endtask

  task do_commit(input id_t jid);
    begin
      @(negedge clk);
      commit_valid = 1'b1; commit.hartid = '0; commit.id = jid; commit.commit_kill = 1'b0;
      @(posedge clk);
      @(negedge clk);
      commit_valid = 1'b0;
    end
  endtask

  task do_kill(input id_t jid);
    begin
      @(negedge clk);
      commit_valid = 1'b1; commit.hartid = '0; commit.id = jid; commit.commit_kill = 1'b1;
      @(posedge clk);
      @(negedge clk);
      commit_valid = 1'b0;
    end
  endtask

  task set_rdy(input logic r);
    begin result_ready = r; end
  endtask

  // Wait for jid's result, then check it equals expected.
  task expect_result(input id_t jid, input logic [31:0] expected);
    begin
      wait (seen[jid] == 1'b1);
      // settle one cycle so seen_data is visible
      @(posedge clk);
      check(seen_data[jid] == expected,
            $sformatf("jid=%0d result=0x%0h expected=0x%0h", jid, seen_data[jid], expected));
    end
  endtask

  // Assert no result for jid arrives within ncyc cycles.
  task expect_no_result(input id_t jid, input int ncyc);
    begin
      tick(ncyc);
      check(seen[jid] == 1'b0, $sformatf("jid=%0d unexpectedly produced a result", jid));
    end
  endtask

  // Reference for cus_cdfg_demo: rd = ((a*b)+c) ^ (a+c), low 32 bits.
  function [31:0] cdfg_ref(input [31:0] a, b, c);
    cdfg_ref = ((a * b) + c) ^ (a + c);
  endfunction

  // ---- test sequencer ----
  initial begin
    // init
    issue_valid = 0; opcode = ILLEGAL; latency_sel = 0; hartid = 0; id = 0;
    rd = 0; registers = '0; commit_valid = 0; commit = '0; result_ready = 1;
    next_id = 0; transfer_count = 0; n_pass = 0; n_fail = 0;
    for (int i = 0; i < 1024; i = i + 1) begin seen[i] = 0; seen_data[i] = 0; exp_data[i] = 0; end

    repeat (20) @(posedge clk);   // past reset

    // =================== 1. functional: cus_delay ===================
    begin
      id_t j; logic [31:0] a;
      cur_test = "delay_functional";
      for (int lat = 0; lat <= 4; lat++) begin
        a = 32'h1000_0000 + lat*7 + 3;
        clear_seen(j);
        exp_data[j] = a;   // rd = rs1
        do_issue(DELAY, lat[2:0], a, 32'h0, 32'h0, 5'd10, 1'b1, j);
        expect_result(j, a);
      end
    end

    // =================== 2. functional: cus_cdfg_demo ===================
    begin
      id_t j; logic [31:0] a,b,c,exp;
      cur_test = "cdfg_functional";
      for (int lat = 0; lat <= 3; lat++) begin
        a = 32'h3 + lat; b = 32'h7 - lat; c = 32'h2 + lat;
        exp = cdfg_ref(a,b,c);
        clear_seen(j);
        exp_data[j] = exp;
        do_issue(CDFG_DEMO, lat[2:0], a, b, c, 5'd11, 1'b1, j);
        expect_result(j, exp);
      end
    end

    // =================== 3. queue depth: two jobs, in order ===================
    begin
      id_t j0, j1; logic [31:0] a0,a1;
      cur_test = "queue_depth";
      tick(5);
      a0 = 32'hAAAA; a1 = 32'hBBBB;
      clear_seen(j0); clear_seen(j1);
      exp_data[j0] = a0; exp_data[j1] = a1;
      do_issue(DELAY, 3'd3, a0, 0, 0, 5'd10, 1'b1, j0);  // 8-cycle job
      do_issue(DELAY, 3'd3, a1, 0, 0, 5'd12, 1'b1, j1);  // accepted while #0 runs
      expect_result(j0, a0);
      expect_result(j1, a1);
      check(j1 > j0, "id monotonicity");
    end

    // =================== 4. queue-full backpressure (§11.5) ===================
    begin
      id_t j0,j1,j2,j3;
      cur_test = "queue_full";
      tick(5);
      // Depth-2 queue + 1 engine slot = 3 jobs in flight. Issue three 16-cycle
      // jobs back-to-back: the engine runs j0 while j1,j2 occupy both queue
      // slots -> queue_free deasserts.
      do_issue(DELAY, 3'd4, 32'h1111, 0, 0, 5'd10, 1'b1, j0);  // engine runs this
      do_issue(DELAY, 3'd4, 32'h2222, 0, 0, 5'd11, 1'b1, j1);  // q0
      do_issue(DELAY, 3'd4, 32'h3333, 0, 0, 5'd12, 1'b1, j2);  // q1 -> full
      @(negedge clk);
      check(queue_free == 1'b0, "queue full (engine busy + 2 queued)");
      // A fourth offer while full must NOT be captured.
      j3 = next_id;
      issue_valid = 1'b1; opcode = DELAY; latency_sel = 3'd4; hartid = 0;
      id = j3; rd = 5'd13; registers[0] = 32'h4444; registers[1] = 0; registers[2] = 0;
      commit_valid = 1'b1; commit.hartid = 0; commit.id = j3; commit.commit_kill = 1'b0;
      @(posedge clk);
      @(negedge clk);
      issue_valid = 1'b0; commit_valid = 1'b0;
      tick(60);                                             // drain everything
      check(seen[j0] && seen[j1] && seen[j2], "three queued jobs drained");
      check(seen[j3] == 1'b0, "fourth offer not accepted while full");
      @(negedge clk);
      check(queue_free == 1'b1, "queue_free recovers after drain");
    end

    // =================== 5. result backpressure (§11.6) ===================
    begin
      id_t j; int tc0; logic [31:0] d0;
      int widths[4];
      cur_test = "result_backpressure";
      widths[0]=1; widths[1]=2; widths[2]=4; widths[3]=8;
      tick(5); set_rdy(1);
      clear_seen(j);
      do_issue(DELAY, 3'd0, 32'hCAFE, 0, 0, 5'd9, 1'b1, j);  // quick result
      wait (result_valid == 1'b1);
      @(posedge clk);
      d0 = result_data;
      foreach (widths[w]) begin
        set_rdy(0);
        for (int k = 0; k < widths[w]; k++) begin
          @(posedge clk);
          check(result_valid == 1'b1, $sformatf("result_valid held (hold %0d)", widths[w]));
          check(result_data == d0, $sformatf("result_data stable (hold %0d)", widths[w]));
        end
        tc0 = transfer_count;
        set_rdy(1);
        @(posedge clk);  // exactly one transfer on release
        @(negedge clk);
        check(transfer_count == tc0 + 1, $sformatf("exactly one transfer on release (hold %0d)", widths[w]));
        check(seen[j], "job result recorded after release");
        if (widths[w] != 8) begin
          clear_seen(j);
          do_issue(DELAY, 3'd0, 32'hBEEF + widths[w], 0, 0, 5'd9, 1'b1, j);
          wait (result_valid == 1'b1);
          @(posedge clk); d0 = result_data;
        end
      end
      set_rdy(1);
    end

    // =================== 6. kill queued (§11.7) ===================
    begin
      id_t jA, jB;
      cur_test = "kill_queued";
      tick(5);
      do_issue(DELAY, 3'd4, 32'hA1, 0, 0, 5'd10, 1'b1, jA);  // long, running
      do_issue(DELAY, 3'd4, 32'hB2, 0, 0, 5'd11, 1'b1, jB);  // queued behind A
      clear_seen(jB);
      do_kill(jB);                       // kill before B dispatches
      expect_no_result(jB, 50);          // B never produces a result
      check(seen[jA], "A still completes");  // A unaffected
      expect_result(jA, 32'hA1);
    end

    // =================== 7. kill running (§11.7) ===================
    begin
      id_t j;
      cur_test = "kill_running";
      tick(5);
      do_issue(DELAY, 3'd4, 32'hC3, 0, 0, 5'd10, 1'b1, j);  // 16-cycle, running
      tick(3);                            // mid-compute
      clear_seen(j);
      do_kill(j);
      expect_no_result(j, 50);            // aborted -> no result
    end

    // =================== 8. kill done (§11.7) ===================
    begin
      id_t j;
      cur_test = "kill_done";
      tick(5); set_rdy(0);               // block result drain so it buffers
      do_issue(DELAY, 3'd0, 32'hD4, 0, 0, 5'd10, 1'b1, j);  // quick compute
      wait (result_valid == 1'b1);        // compute done, buffered, held by !ready
      @(posedge clk);
      clear_seen(j);
      do_kill(j);                         // kill the buffered result
      set_rdy(1);
      expect_no_result(j, 20);            // buffered result deleted -> no transfer
    end

    // =================== 9. kill/done race (§8.4) ===================
    begin
      id_t j;
      cur_test = "kill_done_race";
      tick(5); set_rdy(1);
      do_issue(DELAY, 3'd4, 32'hE5, 0, 0, 5'd10, 1'b1, j);  // 16-cycle
      // The done/deposit cycle is ~17 posedges after capture (1 dispatch + 16
      // compute). do_kill samples its commit one posedge after we land, so
      // tick(16) puts the kill on the done cycle, exercising the same-cycle
      // race. The RTL rule "kill wins over engine_done" is the deposit_now =
      // ... && !eng_killed_now gate plus the killed-first FSM branch.
      tick(16);
      clear_seen(j);
      do_kill(j);
      expect_no_result(j, 30);            // kill wins -> no result
    end

    // =================== 10. commit gate / private-until-commit (§8.1) ===================
    begin
      id_t j; logic [31:0] a;
      cur_test = "commit_gate";
      tick(5); set_rdy(1);
      a = 32'hF6;
      clear_seen(j);
      do_issue_nocommit(DELAY, 3'd0, a, 0, 0, 5'd10, j);  // no commit at issue
      // compute finishes quickly but result must stay private (no commit_seen)
      tick(10);
      check(seen[j] == 1'b0, "no result before commit (private)");
      do_commit(j);                       // authorize
      expect_result(j, a);                // now it emits
    end

    // =================== 11. randomized correctness (§11.1, 100+ vectors/op) ===
    // Drives the engine directly with LCG-random operands, so this is pure
    // engine datapath correctness (the full-core C test covers this for
    // cus_delay; cus_cdfg_demo randomized lives here because the core's CV-X-IF
    // rs3 forwarding is unreliable under a tight RAW on rs3).
    begin
      id_t j; logic [31:0] a,b,c,expv,seed; logic [2:0] latv;
      cur_test = "randomized_100plus";
      tick(5); set_rdy(1);
      seed = 32'h12345678;
      // 120 cus_cdfg_demo vectors across the 4 latencies.
      for (int v = 0; v < 120; v++) begin
        seed = seed * 32'd1664525 + 32'd1013904223; a = seed;
        seed = seed * 32'd1664525 + 32'd1013904223; b = seed;
        seed = seed * 32'd1664525 + 32'd1013904223; c = seed;
        expv = cdfg_ref(a, b, c);
        latv = v[1:0];                 // cycles 0..3
        do_issue(CDFG_DEMO, latv, a, b, c, 5'd11, 1'b1, j);
        expect_result(j, expv);
      end
      // 150 cus_delay vectors across the 5 latencies.
      for (int v = 0; v < 150; v++) begin
        seed = seed * 32'd1664525 + 32'd1013904223; a = seed;
        latv = v % 5;                  // cycles 0..4
        do_issue(DELAY, latv, a, 32'h0, 32'h0, 5'd10, 1'b1, j);
        expect_result(j, a);
      end
    end

    // =================== summary ===================
    tick(20);
    $display("[cdfg_tb] ============================================================");
    $display("[cdfg_tb] SUMMARY: %0d checks passed, %0d FAILED", n_pass, n_fail);
    if (n_fail == 0) $display("[cdfg_tb] ALL CASES PASSED");
    else             $display("[cdfg_tb] SOME CASES FAILED");
    $display("[cdfg_tb] ============================================================");
    if (n_fail != 0) $fatal(1, "[cdfg_tb] failing cases present");
    $finish;
  end
endmodule

// C++ main for the cdfg_engine unit testbench. Drives clk and rst_n; the test
// sequence (stimulus + checks) lives in SystemVerilog initial blocks in
// cdfg_tb.sv, sequenced with @(posedge clk) under Verilator --timing.
//
// Exit status: 0 on $finish reached, 1 if the sim never finishes (hang guard).
#include "verilated.h"
#include "Vcdfg_tb.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vcdfg_tb* top = new Vcdfg_tb{"top"};
    top->clk = 0;
    top->rst_n = 0;

    const unsigned long cap = 10'000'000UL;   // hang guard
    unsigned long i = 0;
    for (; i < cap && !Verilated::gotFinish(); ++i) {
        top->rst_n = (i >= 5);                 // deassert reset after 5 cycles
        top->clk = 1;
        top->eval();
        top->clk = 0;
        top->eval();
    }
    if (!Verilated::gotFinish()) {
        VL_PRINTF("[cdfg_tb_main] ERROR: no $finish within %lu cycles\n", cap);
        top->final();
        delete top;
        return 1;
    }
    top->final();
    delete top;
    return 0;
}

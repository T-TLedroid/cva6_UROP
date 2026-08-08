// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcdfg_tb__Syms.h"
#include "Vcdfg_tb.h"
#include "Vcdfg_tb___024root.h"

// FUNCTIONS
Vcdfg_tb__Syms::~Vcdfg_tb__Syms()
{
}

Vcdfg_tb__Syms::Vcdfg_tb__Syms(VerilatedContext* contextp, const char* namep, Vcdfg_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_cdfg_tb.configure(this, name(), "cdfg_tb", "cdfg_tb", -9, VerilatedScope::SCOPE_OTHER);
}

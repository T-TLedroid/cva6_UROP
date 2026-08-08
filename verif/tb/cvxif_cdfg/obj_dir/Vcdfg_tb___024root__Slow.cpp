// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcdfg_tb.h for the primary calling header

#include "verilated.h"

#include "Vcdfg_tb__Syms.h"
#include "Vcdfg_tb___024root.h"

void Vcdfg_tb___024root___ctor_var_reset(Vcdfg_tb___024root* vlSelf);

Vcdfg_tb___024root::Vcdfg_tb___024root(Vcdfg_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcdfg_tb___024root___ctor_var_reset(this);
}

void Vcdfg_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcdfg_tb___024root::~Vcdfg_tb___024root() {
}

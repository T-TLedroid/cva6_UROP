// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCDFG_TB__SYMS_H_
#define VERILATED_VCDFG_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcdfg_tb.h"

// INCLUDE MODULE CLASSES
#include "Vcdfg_tb___024root.h"

// SYMS CLASS (contains all model state)
class Vcdfg_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcdfg_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcdfg_tb___024root             TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_cdfg_tb;

    // CONSTRUCTORS
    Vcdfg_tb__Syms(VerilatedContext* contextp, const char* namep, Vcdfg_tb* modelp);
    ~Vcdfg_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

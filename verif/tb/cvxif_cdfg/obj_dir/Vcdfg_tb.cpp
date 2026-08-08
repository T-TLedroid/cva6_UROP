// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcdfg_tb.h"
#include "Vcdfg_tb__Syms.h"

//============================================================
// Constructors

Vcdfg_tb::Vcdfg_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcdfg_tb__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcdfg_tb::Vcdfg_tb(const char* _vcname__)
    : Vcdfg_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcdfg_tb::~Vcdfg_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcdfg_tb___024root___eval_debug_assertions(Vcdfg_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vcdfg_tb___024root___eval_static(Vcdfg_tb___024root* vlSelf);
void Vcdfg_tb___024root___eval_initial(Vcdfg_tb___024root* vlSelf);
void Vcdfg_tb___024root___eval_settle(Vcdfg_tb___024root* vlSelf);
void Vcdfg_tb___024root___eval(Vcdfg_tb___024root* vlSelf);

void Vcdfg_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcdfg_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcdfg_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcdfg_tb___024root___eval_static(&(vlSymsp->TOP));
        Vcdfg_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vcdfg_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcdfg_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcdfg_tb::eventsPending() { return false; }

uint64_t Vcdfg_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcdfg_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcdfg_tb___024root___eval_final(Vcdfg_tb___024root* vlSelf);

VL_ATTR_COLD void Vcdfg_tb::final() {
    Vcdfg_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcdfg_tb::hierName() const { return vlSymsp->name(); }
const char* Vcdfg_tb::modelName() const { return "Vcdfg_tb"; }
unsigned Vcdfg_tb::threads() const { return 1; }

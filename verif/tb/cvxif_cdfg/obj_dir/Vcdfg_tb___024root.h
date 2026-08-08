// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcdfg_tb.h for the primary calling header

#ifndef VERILATED_VCDFG_TB___024ROOT_H_
#define VERILATED_VCDFG_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vcdfg_tb__Syms;

class Vcdfg_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        CData/*0:0*/ cdfg_tb__DOT__issue_valid;
        CData/*3:0*/ cdfg_tb__DOT__opcode;
        CData/*2:0*/ cdfg_tb__DOT__latency_sel;
        CData/*0:0*/ cdfg_tb__DOT__hartid;
        CData/*4:0*/ cdfg_tb__DOT__rd;
        CData/*0:0*/ cdfg_tb__DOT__commit_valid;
        CData/*0:0*/ cdfg_tb__DOT__result_ready;
        CData/*0:0*/ cdfg_tb__DOT__result_valid;
        CData/*2:0*/ cdfg_tb__DOT__unnamedblk15__DOT__latv;
        CData/*2:0*/ cdfg_tb__DOT__dut__DOT__eng_state_q;
        CData/*2:0*/ cdfg_tb__DOT__dut__DOT__eng_state_d;
        CData/*5:0*/ cdfg_tb__DOT__dut__DOT__cnt_q;
        CData/*5:0*/ cdfg_tb__DOT__dut__DOT__cnt_d;
        CData/*0:0*/ cdfg_tb__DOT__dut__DOT__eng_run1_done;
        CData/*0:0*/ cdfg_tb__DOT__dut__DOT__eng_run2_done;
        CData/*0:0*/ cdfg_tb__DOT__dut__DOT__eng_run3_done;
        CData/*5:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__104__Vfuncout;
        CData/*2:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__104__sel;
        CData/*5:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__105__Vfuncout;
        CData/*2:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__105__sel;
        CData/*5:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__106__Vfuncout;
        CData/*2:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__106__sel;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__rst_n;
        CData/*0:0*/ __Vtrigrprev__TOP__cdfg_tb__DOT__result_valid;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ cdfg_tb__DOT__id;
        SData/*11:0*/ cdfg_tb__DOT__commit;
        SData/*9:0*/ cdfg_tb__DOT__unnamedblk2__DOT__j;
        SData/*9:0*/ cdfg_tb__DOT__unnamedblk4__DOT__j;
        SData/*9:0*/ cdfg_tb__DOT__unnamedblk6__DOT__j0;
        SData/*9:0*/ cdfg_tb__DOT__unnamedblk6__DOT__j1;
        SData/*9:0*/ cdfg_tb__DOT__unnamedblk8__DOT__j;
        SData/*9:0*/ cdfg_tb__DOT__unnamedblk14__DOT__j;
        SData/*9:0*/ cdfg_tb__DOT__unnamedblk15__DOT__j;
        SData/*9:0*/ __Vtask_cdfg_tb__DOT__expect_result__2__jid;
        SData/*9:0*/ __Vtask_cdfg_tb__DOT__expect_result__7__jid;
        SData/*9:0*/ __Vtask_cdfg_tb__DOT__expect_result__14__jid;
        SData/*9:0*/ __Vtask_cdfg_tb__DOT__expect_result__16__jid;
        SData/*9:0*/ __Vtask_cdfg_tb__DOT__expect_result__50__jid;
        SData/*9:0*/ __Vtask_cdfg_tb__DOT__expect_result__85__jid;
        SData/*9:0*/ __Vtask_cdfg_tb__DOT__expect_result__91__jid;
        SData/*9:0*/ __Vtask_cdfg_tb__DOT__expect_result__94__jid;
        SData/*9:0*/ __Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__2__jid;
        SData/*9:0*/ __Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__7__jid;
        SData/*9:0*/ __Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__14__jid;
        SData/*9:0*/ __Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__16__jid;
        SData/*9:0*/ __Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__50__jid;
        SData/*9:0*/ __Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__85__jid;
        SData/*9:0*/ __Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__91__jid;
        SData/*9:0*/ __Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__94__jid;
        VlWide<3>/*95:0*/ cdfg_tb__DOT__registers;
        IData/*31:0*/ cdfg_tb__DOT__transfer_count;
        IData/*31:0*/ cdfg_tb__DOT__unnamedblk15__DOT__a;
        IData/*31:0*/ cdfg_tb__DOT__unnamedblk15__DOT__b;
        IData/*31:0*/ cdfg_tb__DOT__unnamedblk15__DOT__c;
        IData/*31:0*/ cdfg_tb__DOT__unnamedblk15__DOT__expv;
        IData/*31:0*/ cdfg_tb__DOT__dut__DOT__mul_q;
        IData/*31:0*/ cdfg_tb__DOT__dut__DOT__mul_d;
        IData/*31:0*/ cdfg_tb__DOT__dut__DOT__addb_q;
        IData/*31:0*/ cdfg_tb__DOT__dut__DOT__addb_d;
    };
    struct {
        IData/*31:0*/ cdfg_tb__DOT__dut__DOT__adda_q;
        IData/*31:0*/ cdfg_tb__DOT__dut__DOT__adda_d;
        IData/*31:0*/ cdfg_tb__DOT__dut__DOT__res_q;
        IData/*31:0*/ cdfg_tb__DOT__dut__DOT__res_d;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlWide<4>/*121:0*/ cdfg_tb__DOT__dut__DOT__q0_q;
        VlWide<4>/*121:0*/ cdfg_tb__DOT__dut__DOT__q0_d;
        VlWide<4>/*121:0*/ cdfg_tb__DOT__dut__DOT__q1_q;
        VlWide<4>/*121:0*/ cdfg_tb__DOT__dut__DOT__q1_d;
        VlWide<4>/*121:0*/ cdfg_tb__DOT__dut__DOT__eng_q;
        VlWide<4>/*121:0*/ cdfg_tb__DOT__dut__DOT__eng_d;
        QData/*50:0*/ cdfg_tb__DOT__dut__DOT__rbuf_q;
        QData/*50:0*/ cdfg_tb__DOT__dut__DOT__rbuf_d;
        VlWide<4>/*121:0*/ cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj;
        VlUnpacked<CData/*0:0*/, 1024> cdfg_tb__DOT__seen;
        VlUnpacked<IData/*31:0*/, 1024> cdfg_tb__DOT__seen_data;
        VlUnpacked<IData/*31:0*/, 4> cdfg_tb__DOT__unnamedblk8__DOT__widths;
        VlUnpacked<CData/*0:0*/, 1024> __Vtrigrprev__TOP__cdfg_tb__DOT__seen;
    };
    VlTriggerScheduler __VtrigSched_h3cae1fb6__0;
    VlTriggerScheduler __VtrigSched_h3cae1f77__0;
    VlTriggerScheduler __VtrigSched_h1f6fda87__0;
    VlTriggerScheduler __VtrigSched_hf78e1896__0;
    VlTriggerScheduler __VtrigSched_hd1a7fb58__0;
    VlTriggerScheduler __VtrigSched_hba702124__0;
    VlTriggerScheduler __VtrigSched_h17bdab3d__0;
    VlTriggerScheduler __VtrigSched_h45db8945__0;
    VlTriggerScheduler __VtrigSched_he8b42485__0;
    VlTriggerScheduler __VtrigSched_h878b8e03__0;
    VlTriggerScheduler __VtrigSched_h2cbfa2a0__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<12> __VactTriggered;
    VlTriggerVec<12> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcdfg_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcdfg_tb___024root(Vcdfg_tb__Syms* symsp, const char* v__name);
    ~Vcdfg_tb___024root();
    VL_UNCOPYABLE(Vcdfg_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

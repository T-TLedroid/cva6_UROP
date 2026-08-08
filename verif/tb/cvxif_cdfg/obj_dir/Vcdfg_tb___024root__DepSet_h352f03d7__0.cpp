// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcdfg_tb.h for the primary calling header

#include "verilated.h"

#include "Vcdfg_tb___024root.h"

VlCoroutine Vcdfg_tb___024root___eval_initial__TOP__0(Vcdfg_tb___024root* vlSelf);

void Vcdfg_tb___024root___eval_initial(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___eval_initial\n"); );
    // Body
    Vcdfg_tb___024root___eval_initial__TOP__0(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst_n = vlSelf->rst_n;
    vlSelf->__Vtrigrprev__TOP__cdfg_tb__DOT__seen = vlSelf->cdfg_tb__DOT__seen;
    vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__2__jid 
        = vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid;
    vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__7__jid 
        = vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid;
    vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__14__jid 
        = vlSelf->__Vtask_cdfg_tb__DOT__expect_result__14__jid;
    vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__16__jid 
        = vlSelf->__Vtask_cdfg_tb__DOT__expect_result__16__jid;
    vlSelf->__Vtrigrprev__TOP__cdfg_tb__DOT__result_valid 
        = vlSelf->cdfg_tb__DOT__result_valid;
    vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__50__jid 
        = vlSelf->__Vtask_cdfg_tb__DOT__expect_result__50__jid;
    vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__85__jid 
        = vlSelf->__Vtask_cdfg_tb__DOT__expect_result__85__jid;
    vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__91__jid 
        = vlSelf->__Vtask_cdfg_tb__DOT__expect_result__91__jid;
    vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__94__jid 
        = vlSelf->__Vtask_cdfg_tb__DOT__expect_result__94__jid;
}

VL_INLINE_OPT void Vcdfg_tb___024root___act_comb__TOP__0(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___act_comb__TOP__0\n"); );
    // Init
    VlWide<4>/*121:0*/ cdfg_tb__DOT__dut__DOT__q0_cu;
    VL_ZERO_W(122, cdfg_tb__DOT__dut__DOT__q0_cu);
    VlWide<4>/*121:0*/ cdfg_tb__DOT__dut__DOT__q1_cu;
    VL_ZERO_W(122, cdfg_tb__DOT__dut__DOT__q1_cu);
    CData/*0:0*/ cdfg_tb__DOT__dut__DOT__eng_take_run;
    cdfg_tb__DOT__dut__DOT__eng_take_run = 0;
    CData/*0:0*/ cdfg_tb__DOT__dut__DOT__eng_killed_now;
    cdfg_tb__DOT__dut__DOT__eng_killed_now = 0;
    CData/*0:0*/ cdfg_tb__DOT__dut__DOT____VdfgTmp_hbe32622d__0;
    cdfg_tb__DOT__dut__DOT____VdfgTmp_hbe32622d__0 = 0;
    CData/*0:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__Vfuncout;
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__Vfuncout = 0;
    VlWide<4>/*121:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j;
    VL_ZERO_W(122, __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j);
    CData/*0:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__Vfuncout;
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__Vfuncout = 0;
    VlWide<4>/*121:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j;
    VL_ZERO_W(122, __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j);
    CData/*0:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__Vfuncout;
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__Vfuncout = 0;
    VlWide<4>/*121:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j;
    VL_ZERO_W(122, __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j);
    CData/*0:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__Vfuncout;
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__Vfuncout = 0;
    VlWide<4>/*121:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j;
    VL_ZERO_W(122, __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j);
    CData/*0:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__Vfuncout;
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__Vfuncout = 0;
    VlWide<4>/*121:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j;
    VL_ZERO_W(122, __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j);
    CData/*0:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__Vfuncout;
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__Vfuncout = 0;
    VlWide<4>/*121:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j;
    VL_ZERO_W(122, __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j);
    CData/*0:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__Vfuncout;
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__Vfuncout = 0;
    VlWide<4>/*121:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j;
    VL_ZERO_W(122, __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j);
    // Body
    cdfg_tb__DOT__dut__DOT____VdfgTmp_hbe32622d__0 
        = ((IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                    >> 0x32U)) & (((1U & (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                                  >> 0x2fU))) 
                                   == (1U & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                             >> 0xbU))) 
                                  & ((0x3ffU & (IData)(
                                                       (vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                                        >> 0x25U))) 
                                     == (0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                                   >> 1U)))));
    cdfg_tb__DOT__dut__DOT__q1_cu[0U] = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[0U];
    cdfg_tb__DOT__dut__DOT__q1_cu[1U] = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[1U];
    cdfg_tb__DOT__dut__DOT__q1_cu[2U] = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[2U];
    cdfg_tb__DOT__dut__DOT__q1_cu[3U] = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j[0U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[0U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j[1U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[1U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j[2U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[2U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j[3U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__Vfuncout 
        = (((((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
              & (IData)(vlSelf->cdfg_tb__DOT__commit)) 
             & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j[3U] 
                >> 0x19U)) & ((1U & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j[3U] 
                                     >> 0xfU)) == (1U 
                                                   & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                                      >> 0xbU)))) 
           & ((0x3ffU & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j[3U] 
                         >> 5U)) == (0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                               >> 1U))));
    if (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__Vfuncout) {
        cdfg_tb__DOT__dut__DOT__q1_cu[3U] = (0x1000000U 
                                             | cdfg_tb__DOT__dut__DOT__q1_cu[3U]);
    }
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j[0U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[0U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j[1U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[1U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j[2U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[2U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j[3U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__Vfuncout 
        = (((((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
              & (~ (IData)(vlSelf->cdfg_tb__DOT__commit))) 
             & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j[3U] 
                >> 0x19U)) & ((1U & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j[3U] 
                                     >> 0xfU)) == (1U 
                                                   & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                                      >> 0xbU)))) 
           & ((0x3ffU & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j[3U] 
                         >> 5U)) == (0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                               >> 1U))));
    if (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__Vfuncout) {
        cdfg_tb__DOT__dut__DOT__q1_cu[3U] = (0x800000U 
                                             | cdfg_tb__DOT__dut__DOT__q1_cu[3U]);
    }
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j[0U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[0U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j[1U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[1U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j[2U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j[3U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__Vfuncout 
        = (((((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
              & (IData)(vlSelf->cdfg_tb__DOT__commit)) 
             & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j[3U] 
                >> 0x19U)) & ((1U & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j[3U] 
                                     >> 0xfU)) == (1U 
                                                   & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                                      >> 0xbU)))) 
           & ((0x3ffU & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j[3U] 
                         >> 5U)) == (0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                               >> 1U))));
    cdfg_tb__DOT__dut__DOT__eng_killed_now = (1U & 
                                              ((vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                                >> 0x18U) 
                                               | (IData)(__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__Vfuncout)));
    cdfg_tb__DOT__dut__DOT__q0_cu[0U] = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[0U];
    cdfg_tb__DOT__dut__DOT__q0_cu[1U] = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[1U];
    cdfg_tb__DOT__dut__DOT__q0_cu[2U] = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[2U];
    cdfg_tb__DOT__dut__DOT__q0_cu[3U] = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j[0U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[0U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j[1U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[1U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j[2U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[2U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j[3U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__Vfuncout 
        = (((((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
              & (IData)(vlSelf->cdfg_tb__DOT__commit)) 
             & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j[3U] 
                >> 0x19U)) & ((1U & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j[3U] 
                                     >> 0xfU)) == (1U 
                                                   & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                                      >> 0xbU)))) 
           & ((0x3ffU & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j[3U] 
                         >> 5U)) == (0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                               >> 1U))));
    if (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__Vfuncout) {
        cdfg_tb__DOT__dut__DOT__q0_cu[3U] = (0x1000000U 
                                             | cdfg_tb__DOT__dut__DOT__q0_cu[3U]);
    }
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j[0U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[0U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j[1U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[1U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j[2U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[2U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j[3U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__Vfuncout 
        = (((((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
              & (~ (IData)(vlSelf->cdfg_tb__DOT__commit))) 
             & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j[3U] 
                >> 0x19U)) & ((1U & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j[3U] 
                                     >> 0xfU)) == (1U 
                                                   & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                                      >> 0xbU)))) 
           & ((0x3ffU & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j[3U] 
                         >> 5U)) == (0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                               >> 1U))));
    if (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__Vfuncout) {
        cdfg_tb__DOT__dut__DOT__q0_cu[3U] = (0x800000U 
                                             | cdfg_tb__DOT__dut__DOT__q0_cu[3U]);
    }
    vlSelf->cdfg_tb__DOT__dut__DOT__addb_d = vlSelf->cdfg_tb__DOT__dut__DOT__addb_q;
    vlSelf->cdfg_tb__DOT__dut__DOT__mul_d = vlSelf->cdfg_tb__DOT__dut__DOT__mul_q;
    vlSelf->cdfg_tb__DOT__dut__DOT__adda_d = vlSelf->cdfg_tb__DOT__dut__DOT__adda_q;
    vlSelf->cdfg_tb__DOT__dut__DOT__res_d = vlSelf->cdfg_tb__DOT__dut__DOT__res_q;
    cdfg_tb__DOT__dut__DOT__eng_take_run = ((((0U == (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q)) 
                                              & (vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[3U] 
                                                 >> 0x19U)) 
                                             & (~ (IData)(
                                                          (vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                                           >> 0x32U)))) 
                                            & (~ (cdfg_tb__DOT__dut__DOT__q0_cu[3U] 
                                                  >> 0x18U)));
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q;
    vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[0U] = cdfg_tb__DOT__dut__DOT__q0_cu[0U];
    vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[1U] = cdfg_tb__DOT__dut__DOT__q0_cu[1U];
    vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[2U] = cdfg_tb__DOT__dut__DOT__q0_cu[2U];
    vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[3U] = cdfg_tb__DOT__dut__DOT__q0_cu[3U];
    vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[0U] = cdfg_tb__DOT__dut__DOT__q1_cu[0U];
    vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[1U] = cdfg_tb__DOT__dut__DOT__q1_cu[1U];
    vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[2U] = cdfg_tb__DOT__dut__DOT__q1_cu[2U];
    vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[3U] = cdfg_tb__DOT__dut__DOT__q1_cu[3U];
    if (((IData)(cdfg_tb__DOT__dut__DOT__eng_take_run) 
         | ((((0U == (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q)) 
              & (vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[3U] 
                 >> 0x19U)) & (~ (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                          >> 0x32U)))) 
            & (cdfg_tb__DOT__dut__DOT__q0_cu[3U] >> 0x18U)))) {
        vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[0U] = 
            cdfg_tb__DOT__dut__DOT__q1_cu[0U];
        vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[1U] = 
            cdfg_tb__DOT__dut__DOT__q1_cu[1U];
        vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[2U] = 
            cdfg_tb__DOT__dut__DOT__q1_cu[2U];
        vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[3U] = 
            cdfg_tb__DOT__dut__DOT__q1_cu[3U];
        vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[3U] = 
            (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[3U]);
    }
    if (vlSelf->cdfg_tb__DOT__issue_valid) {
        vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U] 
            = (0x2000000U | (0xffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U]));
        vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U] 
            = ((0x37fffffU & vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U]) 
               | (0x3ffffffU & (((((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
                                   & (~ (IData)(vlSelf->cdfg_tb__DOT__commit))) 
                                  & ((1U & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                            >> 0xbU)) 
                                     == (IData)(vlSelf->cdfg_tb__DOT__hartid))) 
                                 & ((0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                               >> 1U)) 
                                    == (IData)(vlSelf->cdfg_tb__DOT__id))) 
                                << 0x17U)));
        vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U] 
            = ((0x380001fU & vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U]) 
               | (0x3ffffe0U & (((IData)(vlSelf->cdfg_tb__DOT__opcode) 
                                 << 0x13U) | (((IData)(vlSelf->cdfg_tb__DOT__latency_sel) 
                                               << 0x10U) 
                                              | (((IData)(vlSelf->cdfg_tb__DOT__hartid) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSelf->cdfg_tb__DOT__id) 
                                                    << 5U))))));
        vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[1U] 
            = (IData)((((QData)((IData)(vlSelf->cdfg_tb__DOT__registers[0U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->cdfg_tb__DOT__registers[1U]))));
        vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[2U] 
            = (IData)(((((QData)((IData)(vlSelf->cdfg_tb__DOT__registers[0U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->cdfg_tb__DOT__registers[1U]))) 
                       >> 0x20U));
        vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U] 
            = ((0x3ffffe0U & vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U]) 
               | (0x3ffffffU & (IData)(vlSelf->cdfg_tb__DOT__rd)));
        vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[0U] 
            = vlSelf->cdfg_tb__DOT__registers[2U];
        if ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[3U])) {
            if ((1U & (~ (vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[3U] 
                          >> 0x19U)))) {
                vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[0U] 
                    = vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[0U];
                vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[1U] 
                    = vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[1U];
                vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[2U] 
                    = vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[2U];
                vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[3U] 
                    = vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U];
            }
        } else {
            vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[0U] 
                = vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[0U];
            vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[1U] 
                = vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[1U];
            vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[2U] 
                = vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[2U];
            vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[3U] 
                = vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U];
        }
    }
    vlSelf->cdfg_tb__DOT__dut__DOT__cnt_d = vlSelf->cdfg_tb__DOT__dut__DOT__cnt_q;
    if ((1U & (~ ((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
                if ((1U & (~ (IData)(cdfg_tb__DOT__dut__DOT__eng_killed_now)))) {
                    if (vlSelf->cdfg_tb__DOT__dut__DOT__eng_run1_done) {
                        if ((0xbU != (0xfU & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                              >> 0x13U)))) {
                            vlSelf->cdfg_tb__DOT__dut__DOT__addb_d 
                                = (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U] 
                                   + vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[0U]);
                            vlSelf->cdfg_tb__DOT__dut__DOT__mul_d 
                                = (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U] 
                                   * vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[1U]);
                        }
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
            if ((1U & (~ (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q)))) {
                if ((1U & (~ (IData)(cdfg_tb__DOT__dut__DOT__eng_killed_now)))) {
                    if (vlSelf->cdfg_tb__DOT__dut__DOT__eng_run2_done) {
                        vlSelf->cdfg_tb__DOT__dut__DOT__adda_d 
                            = (vlSelf->cdfg_tb__DOT__dut__DOT__mul_q 
                               + vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[0U]);
                    }
                }
            }
            if ((1U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
                if ((1U & (~ (IData)(cdfg_tb__DOT__dut__DOT__eng_killed_now)))) {
                    if (vlSelf->cdfg_tb__DOT__dut__DOT__eng_run3_done) {
                        vlSelf->cdfg_tb__DOT__dut__DOT__res_d 
                            = (vlSelf->cdfg_tb__DOT__dut__DOT__adda_q 
                               ^ vlSelf->cdfg_tb__DOT__dut__DOT__addb_q);
                    }
                    if ((1U & (~ (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_run3_done)))) {
                        vlSelf->cdfg_tb__DOT__dut__DOT__cnt_d 
                            = (0x3fU & ((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__cnt_q) 
                                        - (IData)(1U)));
                    }
                }
            } else if ((1U & (~ (IData)(cdfg_tb__DOT__dut__DOT__eng_killed_now)))) {
                if (vlSelf->cdfg_tb__DOT__dut__DOT__eng_run2_done) {
                    vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__104__sel 
                        = (7U & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                 >> 0x10U));
                    vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__104__Vfuncout 
                        = (0x3fU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__104__sel)));
                    vlSelf->cdfg_tb__DOT__dut__DOT__cnt_d 
                        = vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__104__Vfuncout;
                } else {
                    vlSelf->cdfg_tb__DOT__dut__DOT__cnt_d 
                        = (0x3fU & ((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__cnt_q) 
                                    - (IData)(1U)));
                }
            }
        } else if ((1U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
            if ((1U & (~ (IData)(cdfg_tb__DOT__dut__DOT__eng_killed_now)))) {
                if (vlSelf->cdfg_tb__DOT__dut__DOT__eng_run1_done) {
                    if ((0xbU == (0xfU & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                          >> 0x13U)))) {
                        vlSelf->cdfg_tb__DOT__dut__DOT__res_d 
                            = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U];
                    }
                    if ((0xbU != (0xfU & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                          >> 0x13U)))) {
                        vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__105__sel 
                            = (7U & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                     >> 0x10U));
                        vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__105__Vfuncout 
                            = (0x3fU & ((IData)(1U) 
                                        << (IData)(vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__105__sel)));
                        vlSelf->cdfg_tb__DOT__dut__DOT__cnt_d 
                            = vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__105__Vfuncout;
                    }
                } else {
                    vlSelf->cdfg_tb__DOT__dut__DOT__cnt_d 
                        = (0x3fU & ((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__cnt_q) 
                                    - (IData)(1U)));
                }
            }
        } else if (cdfg_tb__DOT__dut__DOT__eng_take_run) {
            vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__106__sel 
                = (7U & (cdfg_tb__DOT__dut__DOT__q0_cu[3U] 
                         >> 0x10U));
            vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__106__Vfuncout 
                = (0x3fU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__106__sel)));
            vlSelf->cdfg_tb__DOT__dut__DOT__cnt_d = vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__106__Vfuncout;
        }
    }
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[0U] = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[0U];
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[1U] = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[1U];
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[2U] = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U];
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U];
    vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q;
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j[0U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[0U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j[1U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[1U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j[2U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j[3U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__Vfuncout 
        = (((((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
              & (IData)(vlSelf->cdfg_tb__DOT__commit)) 
             & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j[3U] 
                >> 0x19U)) & ((1U & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j[3U] 
                                     >> 0xfU)) == (1U 
                                                   & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                                      >> 0xbU)))) 
           & ((0x3ffU & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j[3U] 
                         >> 5U)) == (0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                               >> 1U))));
    if (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__Vfuncout) {
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] = 
            (0x1000000U | vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
    }
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j[0U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[0U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j[1U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[1U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j[2U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j[3U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__Vfuncout 
        = (((((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
              & (~ (IData)(vlSelf->cdfg_tb__DOT__commit))) 
             & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j[3U] 
                >> 0x19U)) & ((1U & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j[3U] 
                                     >> 0xfU)) == (1U 
                                                   & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                                      >> 0xbU)))) 
           & ((0x3ffU & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j[3U] 
                         >> 5U)) == (0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                               >> 1U))));
    if (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__Vfuncout) {
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] = 
            (0x800000U | vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
    }
    if ((4U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
        if ((2U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 0U;
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
        } else if ((1U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 0U;
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
        } else if (cdfg_tb__DOT__dut__DOT__eng_killed_now) {
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 0U;
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
        } else if ((1U & (~ (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                     >> 0x32U))))) {
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 0U;
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
        }
    } else if ((2U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
        if ((1U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
            if (cdfg_tb__DOT__dut__DOT__eng_killed_now) {
                vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 0U;
                vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                    = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
            } else if (vlSelf->cdfg_tb__DOT__dut__DOT__eng_run3_done) {
                vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d 
                    = ((1U & (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                      >> 0x32U))) ? 4U
                        : 0U);
                if ((1U & (~ (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                      >> 0x32U))))) {
                    vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                        = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
                }
            }
        } else if (cdfg_tb__DOT__dut__DOT__eng_killed_now) {
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 0U;
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
        } else if (vlSelf->cdfg_tb__DOT__dut__DOT__eng_run2_done) {
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
        if (cdfg_tb__DOT__dut__DOT__eng_killed_now) {
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 0U;
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
        } else if (vlSelf->cdfg_tb__DOT__dut__DOT__eng_run1_done) {
            if ((0xbU == (0xfU & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                  >> 0x13U)))) {
                vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d 
                    = ((1U & (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                      >> 0x32U))) ? 4U
                        : 0U);
                if ((1U & (~ (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                      >> 0x32U))))) {
                    vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                        = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
                }
            } else {
                vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 2U;
            }
        }
    } else if (cdfg_tb__DOT__dut__DOT__eng_take_run) {
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 1U;
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[0U] = 
            cdfg_tb__DOT__dut__DOT__q0_cu[0U];
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[1U] = 
            cdfg_tb__DOT__dut__DOT__q0_cu[1U];
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[2U] = 
            cdfg_tb__DOT__dut__DOT__q0_cu[2U];
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] = 
            cdfg_tb__DOT__dut__DOT__q0_cu[3U];
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] = 
            (0x2000000U | vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
    }
    if (((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
         & ((IData)(vlSelf->cdfg_tb__DOT__commit) & (IData)(cdfg_tb__DOT__dut__DOT____VdfgTmp_hbe32622d__0)))) {
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = (0x2000000000000ULL 
                                                  | vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d);
    }
    if (((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
         & ((~ (IData)(vlSelf->cdfg_tb__DOT__commit)) 
            & (IData)(cdfg_tb__DOT__dut__DOT____VdfgTmp_hbe32622d__0)))) {
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = (0x1000000000000ULL 
                                                  | vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d);
    }
    if (((((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_run1_done) 
           & (0x580000U == (0x780000U & vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U]))) 
          | (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_run3_done)) 
         & ((~ (IData)(cdfg_tb__DOT__dut__DOT__eng_killed_now)) 
            & (~ (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                          >> 0x32U)))))) {
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = ((0x7fffffffffffULL 
                                                   & vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d) 
                                                  | ((QData)((IData)(
                                                                     (8U 
                                                                      | ((2U 
                                                                          & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                                                                             >> 0x16U)) 
                                                                         | (1U 
                                                                            & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                                                               >> 0xfU)))))) 
                                                     << 0x2fU));
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = ((0x7800000000000ULL 
                                                   & vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d) 
                                                  | (((QData)((IData)(
                                                                      (0x7fffU 
                                                                       & vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U]))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((0xbU 
                                                                         == 
                                                                         (0xfU 
                                                                          & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                                                             >> 0x13U)))
                                                                         ? 
                                                                        vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U]
                                                                         : 
                                                                        (vlSelf->cdfg_tb__DOT__dut__DOT__adda_q 
                                                                         ^ vlSelf->cdfg_tb__DOT__dut__DOT__addb_q))))));
    } else if ((((4U == (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q)) 
                 & (~ (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                               >> 0x32U)))) & (~ (IData)(cdfg_tb__DOT__dut__DOT__eng_killed_now)))) {
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = ((0x7fffffffffffULL 
                                                   & vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d) 
                                                  | ((QData)((IData)(
                                                                     (8U 
                                                                      | ((2U 
                                                                          & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                                                                             >> 0x16U)) 
                                                                         | (1U 
                                                                            & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                                                               >> 0xfU)))))) 
                                                     << 0x2fU));
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = ((0x7800000000000ULL 
                                                   & vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d) 
                                                  | (((QData)((IData)(
                                                                      (0x7fffU 
                                                                       & vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U]))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__res_q))));
    }
    if ((IData)((0x6000000000000ULL == (0x6000000000000ULL 
                                        & vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q)))) {
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = (0x3ffffffffffffULL 
                                                  & vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d);
    } else if (((IData)(vlSelf->cdfg_tb__DOT__result_valid) 
                & (IData)(vlSelf->cdfg_tb__DOT__result_ready))) {
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = (0x3ffffffffffffULL 
                                                  & vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d);
    }
}

void Vcdfg_tb___024root___eval_act(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___eval_act\n"); );
    // Body
    if (((((((((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(2U)) 
                 | vlSelf->__VactTriggered.at(3U)) 
                | vlSelf->__VactTriggered.at(4U)) | vlSelf->__VactTriggered.at(5U)) 
              | vlSelf->__VactTriggered.at(6U)) | vlSelf->__VactTriggered.at(7U)) 
            | vlSelf->__VactTriggered.at(8U)) | vlSelf->__VactTriggered.at(9U)) 
          | vlSelf->__VactTriggered.at(0xaU)) | vlSelf->__VactTriggered.at(0xbU))) {
        Vcdfg_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcdfg_tb___024root___nba_sequent__TOP__0(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__cdfg_tb__DOT__seen__v0;
    __Vdlyvdim0__cdfg_tb__DOT__seen__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cdfg_tb__DOT__seen__v0;
    __Vdlyvset__cdfg_tb__DOT__seen__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__cdfg_tb__DOT__seen_data__v0;
    __Vdlyvdim0__cdfg_tb__DOT__seen_data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__cdfg_tb__DOT__seen_data__v0;
    __Vdlyvval__cdfg_tb__DOT__seen_data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cdfg_tb__DOT__seen_data__v0;
    __Vdlyvset__cdfg_tb__DOT__seen_data__v0 = 0;
    // Body
    __Vdlyvset__cdfg_tb__DOT__seen__v0 = 0U;
    __Vdlyvset__cdfg_tb__DOT__seen_data__v0 = 0U;
    if ((((IData)(vlSelf->rst_n) & (IData)(vlSelf->cdfg_tb__DOT__result_valid)) 
         & (IData)(vlSelf->cdfg_tb__DOT__result_ready))) {
        vlSelf->cdfg_tb__DOT__transfer_count = ((IData)(1U) 
                                                + vlSelf->cdfg_tb__DOT__transfer_count);
        __Vdlyvset__cdfg_tb__DOT__seen__v0 = 1U;
        __Vdlyvdim0__cdfg_tb__DOT__seen__v0 = (0x3ffU 
                                               & (IData)(
                                                         (vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                                          >> 0x25U)));
        __Vdlyvval__cdfg_tb__DOT__seen_data__v0 = (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q);
        __Vdlyvset__cdfg_tb__DOT__seen_data__v0 = 1U;
        __Vdlyvdim0__cdfg_tb__DOT__seen_data__v0 = 
            (0x3ffU & (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                               >> 0x25U)));
    }
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->cdfg_tb__DOT__transfer_count = 0U;
    }
    if (__Vdlyvset__cdfg_tb__DOT__seen__v0) {
        vlSelf->cdfg_tb__DOT__seen[__Vdlyvdim0__cdfg_tb__DOT__seen__v0] = 1U;
    }
    if (__Vdlyvset__cdfg_tb__DOT__seen_data__v0) {
        vlSelf->cdfg_tb__DOT__seen_data[__Vdlyvdim0__cdfg_tb__DOT__seen_data__v0] 
            = __Vdlyvval__cdfg_tb__DOT__seen_data__v0;
    }
}

VL_INLINE_OPT void Vcdfg_tb___024root___nba_sequent__TOP__1(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst_n) {
        vlSelf->cdfg_tb__DOT__dut__DOT__mul_q = vlSelf->cdfg_tb__DOT__dut__DOT__mul_d;
        vlSelf->cdfg_tb__DOT__dut__DOT__res_q = vlSelf->cdfg_tb__DOT__dut__DOT__res_d;
        vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[0U] = 
            vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[0U];
        vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[1U] = 
            vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[1U];
        vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[2U] = 
            vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[2U];
        vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U] = 
            vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[3U];
        vlSelf->cdfg_tb__DOT__dut__DOT__addb_q = vlSelf->cdfg_tb__DOT__dut__DOT__addb_d;
        vlSelf->cdfg_tb__DOT__dut__DOT__adda_q = vlSelf->cdfg_tb__DOT__dut__DOT__adda_d;
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[0U] = 
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[0U];
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[1U] = 
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[1U];
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U] = 
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[2U];
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] = 
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U];
        vlSelf->cdfg_tb__DOT__dut__DOT__cnt_q = vlSelf->cdfg_tb__DOT__dut__DOT__cnt_d;
        vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[0U] = 
            vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[0U];
        vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[1U] = 
            vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[1U];
        vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[2U] = 
            vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[2U];
        vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[3U] = 
            vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[3U];
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q 
            = vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d;
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q = vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d;
    } else {
        vlSelf->cdfg_tb__DOT__dut__DOT__mul_q = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__res_q = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[0U] = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[1U] = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[2U] = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U] = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__addb_q = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__adda_q = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[0U] = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[1U] = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U] = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__cnt_q = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[0U] = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[1U] = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[2U] = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[3U] = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q = 0U;
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q = 0ULL;
    }
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_run2_done = 
        ((2U == (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q)) 
         & (1U >= (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__cnt_q)));
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_run3_done = 
        ((3U == (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q)) 
         & (1U >= (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__cnt_q)));
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_run1_done = 
        ((1U == (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q)) 
         & (1U >= (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__cnt_q)));
    vlSelf->cdfg_tb__DOT__result_valid = (IData)((0x5000000000000ULL 
                                                  == 
                                                  (0x7000000000000ULL 
                                                   & vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q)));
}

VL_INLINE_OPT void Vcdfg_tb___024root___nba_comb__TOP__0(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___nba_comb__TOP__0\n"); );
    // Init
    VlWide<4>/*121:0*/ cdfg_tb__DOT__dut__DOT__q0_cu;
    VL_ZERO_W(122, cdfg_tb__DOT__dut__DOT__q0_cu);
    VlWide<4>/*121:0*/ cdfg_tb__DOT__dut__DOT__q1_cu;
    VL_ZERO_W(122, cdfg_tb__DOT__dut__DOT__q1_cu);
    CData/*0:0*/ cdfg_tb__DOT__dut__DOT__eng_take_run;
    cdfg_tb__DOT__dut__DOT__eng_take_run = 0;
    CData/*0:0*/ cdfg_tb__DOT__dut__DOT__eng_killed_now;
    cdfg_tb__DOT__dut__DOT__eng_killed_now = 0;
    CData/*0:0*/ cdfg_tb__DOT__dut__DOT____VdfgTmp_hbe32622d__0;
    cdfg_tb__DOT__dut__DOT____VdfgTmp_hbe32622d__0 = 0;
    CData/*0:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__Vfuncout;
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__Vfuncout = 0;
    VlWide<4>/*121:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j;
    VL_ZERO_W(122, __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j);
    CData/*0:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__Vfuncout;
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__Vfuncout = 0;
    VlWide<4>/*121:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j;
    VL_ZERO_W(122, __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j);
    CData/*0:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__Vfuncout;
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__Vfuncout = 0;
    VlWide<4>/*121:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j;
    VL_ZERO_W(122, __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j);
    CData/*0:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__Vfuncout;
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__Vfuncout = 0;
    VlWide<4>/*121:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j;
    VL_ZERO_W(122, __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j);
    CData/*0:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__Vfuncout;
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__Vfuncout = 0;
    VlWide<4>/*121:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j;
    VL_ZERO_W(122, __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j);
    CData/*0:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__Vfuncout;
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__Vfuncout = 0;
    VlWide<4>/*121:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j;
    VL_ZERO_W(122, __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j);
    CData/*0:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__Vfuncout;
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__Vfuncout = 0;
    VlWide<4>/*121:0*/ __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j;
    VL_ZERO_W(122, __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j);
    // Body
    cdfg_tb__DOT__dut__DOT__q1_cu[0U] = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[0U];
    cdfg_tb__DOT__dut__DOT__q1_cu[1U] = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[1U];
    cdfg_tb__DOT__dut__DOT__q1_cu[2U] = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[2U];
    cdfg_tb__DOT__dut__DOT__q1_cu[3U] = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j[0U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[0U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j[1U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[1U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j[2U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[2U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j[3U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__Vfuncout 
        = (((((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
              & (IData)(vlSelf->cdfg_tb__DOT__commit)) 
             & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j[3U] 
                >> 0x19U)) & ((1U & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j[3U] 
                                     >> 0xfU)) == (1U 
                                                   & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                                      >> 0xbU)))) 
           & ((0x3ffU & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__j[3U] 
                         >> 5U)) == (0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                               >> 1U))));
    if (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__99__Vfuncout) {
        cdfg_tb__DOT__dut__DOT__q1_cu[3U] = (0x1000000U 
                                             | cdfg_tb__DOT__dut__DOT__q1_cu[3U]);
    }
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j[0U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[0U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j[1U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[1U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j[2U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[2U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j[3U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__Vfuncout 
        = (((((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
              & (~ (IData)(vlSelf->cdfg_tb__DOT__commit))) 
             & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j[3U] 
                >> 0x19U)) & ((1U & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j[3U] 
                                     >> 0xfU)) == (1U 
                                                   & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                                      >> 0xbU)))) 
           & ((0x3ffU & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__j[3U] 
                         >> 5U)) == (0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                               >> 1U))));
    if (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__100__Vfuncout) {
        cdfg_tb__DOT__dut__DOT__q1_cu[3U] = (0x800000U 
                                             | cdfg_tb__DOT__dut__DOT__q1_cu[3U]);
    }
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j[0U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[0U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j[1U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[1U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j[2U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j[3U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__Vfuncout 
        = (((((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
              & (IData)(vlSelf->cdfg_tb__DOT__commit)) 
             & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j[3U] 
                >> 0x19U)) & ((1U & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j[3U] 
                                     >> 0xfU)) == (1U 
                                                   & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                                      >> 0xbU)))) 
           & ((0x3ffU & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__j[3U] 
                         >> 5U)) == (0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                               >> 1U))));
    cdfg_tb__DOT__dut__DOT__eng_killed_now = (1U & 
                                              ((vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                                >> 0x18U) 
                                               | (IData)(__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__101__Vfuncout)));
    cdfg_tb__DOT__dut__DOT__q0_cu[0U] = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[0U];
    cdfg_tb__DOT__dut__DOT__q0_cu[1U] = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[1U];
    cdfg_tb__DOT__dut__DOT__q0_cu[2U] = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[2U];
    cdfg_tb__DOT__dut__DOT__q0_cu[3U] = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j[0U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[0U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j[1U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[1U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j[2U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[2U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j[3U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__Vfuncout 
        = (((((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
              & (IData)(vlSelf->cdfg_tb__DOT__commit)) 
             & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j[3U] 
                >> 0x19U)) & ((1U & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j[3U] 
                                     >> 0xfU)) == (1U 
                                                   & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                                      >> 0xbU)))) 
           & ((0x3ffU & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__j[3U] 
                         >> 5U)) == (0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                               >> 1U))));
    if (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__97__Vfuncout) {
        cdfg_tb__DOT__dut__DOT__q0_cu[3U] = (0x1000000U 
                                             | cdfg_tb__DOT__dut__DOT__q0_cu[3U]);
    }
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j[0U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[0U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j[1U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[1U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j[2U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[2U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j[3U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__Vfuncout 
        = (((((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
              & (~ (IData)(vlSelf->cdfg_tb__DOT__commit))) 
             & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j[3U] 
                >> 0x19U)) & ((1U & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j[3U] 
                                     >> 0xfU)) == (1U 
                                                   & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                                      >> 0xbU)))) 
           & ((0x3ffU & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__j[3U] 
                         >> 5U)) == (0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                               >> 1U))));
    if (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__98__Vfuncout) {
        cdfg_tb__DOT__dut__DOT__q0_cu[3U] = (0x800000U 
                                             | cdfg_tb__DOT__dut__DOT__q0_cu[3U]);
    }
    cdfg_tb__DOT__dut__DOT____VdfgTmp_hbe32622d__0 
        = ((IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                    >> 0x32U)) & (((1U & (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                                  >> 0x2fU))) 
                                   == (1U & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                             >> 0xbU))) 
                                  & ((0x3ffU & (IData)(
                                                       (vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                                        >> 0x25U))) 
                                     == (0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                                   >> 1U)))));
    vlSelf->cdfg_tb__DOT__dut__DOT__addb_d = vlSelf->cdfg_tb__DOT__dut__DOT__addb_q;
    vlSelf->cdfg_tb__DOT__dut__DOT__mul_d = vlSelf->cdfg_tb__DOT__dut__DOT__mul_q;
    vlSelf->cdfg_tb__DOT__dut__DOT__adda_d = vlSelf->cdfg_tb__DOT__dut__DOT__adda_q;
    vlSelf->cdfg_tb__DOT__dut__DOT__res_d = vlSelf->cdfg_tb__DOT__dut__DOT__res_q;
    cdfg_tb__DOT__dut__DOT__eng_take_run = ((((0U == (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q)) 
                                              & (vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[3U] 
                                                 >> 0x19U)) 
                                             & (~ (IData)(
                                                          (vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                                           >> 0x32U)))) 
                                            & (~ (cdfg_tb__DOT__dut__DOT__q0_cu[3U] 
                                                  >> 0x18U)));
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q;
    vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[0U] = cdfg_tb__DOT__dut__DOT__q0_cu[0U];
    vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[1U] = cdfg_tb__DOT__dut__DOT__q0_cu[1U];
    vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[2U] = cdfg_tb__DOT__dut__DOT__q0_cu[2U];
    vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[3U] = cdfg_tb__DOT__dut__DOT__q0_cu[3U];
    vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[0U] = cdfg_tb__DOT__dut__DOT__q1_cu[0U];
    vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[1U] = cdfg_tb__DOT__dut__DOT__q1_cu[1U];
    vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[2U] = cdfg_tb__DOT__dut__DOT__q1_cu[2U];
    vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[3U] = cdfg_tb__DOT__dut__DOT__q1_cu[3U];
    if (((IData)(cdfg_tb__DOT__dut__DOT__eng_take_run) 
         | ((((0U == (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q)) 
              & (vlSelf->cdfg_tb__DOT__dut__DOT__q0_q[3U] 
                 >> 0x19U)) & (~ (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                          >> 0x32U)))) 
            & (cdfg_tb__DOT__dut__DOT__q0_cu[3U] >> 0x18U)))) {
        vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[0U] = 
            cdfg_tb__DOT__dut__DOT__q1_cu[0U];
        vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[1U] = 
            cdfg_tb__DOT__dut__DOT__q1_cu[1U];
        vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[2U] = 
            cdfg_tb__DOT__dut__DOT__q1_cu[2U];
        vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[3U] = 
            cdfg_tb__DOT__dut__DOT__q1_cu[3U];
        vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[3U] = 
            (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[3U]);
    }
    if (vlSelf->cdfg_tb__DOT__issue_valid) {
        vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U] 
            = (0x2000000U | (0xffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U]));
        vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U] 
            = ((0x37fffffU & vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U]) 
               | (0x3ffffffU & (((((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
                                   & (~ (IData)(vlSelf->cdfg_tb__DOT__commit))) 
                                  & ((1U & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                            >> 0xbU)) 
                                     == (IData)(vlSelf->cdfg_tb__DOT__hartid))) 
                                 & ((0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                               >> 1U)) 
                                    == (IData)(vlSelf->cdfg_tb__DOT__id))) 
                                << 0x17U)));
        vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U] 
            = ((0x380001fU & vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U]) 
               | (0x3ffffe0U & (((IData)(vlSelf->cdfg_tb__DOT__opcode) 
                                 << 0x13U) | (((IData)(vlSelf->cdfg_tb__DOT__latency_sel) 
                                               << 0x10U) 
                                              | (((IData)(vlSelf->cdfg_tb__DOT__hartid) 
                                                  << 0xfU) 
                                                 | ((IData)(vlSelf->cdfg_tb__DOT__id) 
                                                    << 5U))))));
        vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[1U] 
            = (IData)((((QData)((IData)(vlSelf->cdfg_tb__DOT__registers[0U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->cdfg_tb__DOT__registers[1U]))));
        vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[2U] 
            = (IData)(((((QData)((IData)(vlSelf->cdfg_tb__DOT__registers[0U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->cdfg_tb__DOT__registers[1U]))) 
                       >> 0x20U));
        vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U] 
            = ((0x3ffffe0U & vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U]) 
               | (0x3ffffffU & (IData)(vlSelf->cdfg_tb__DOT__rd)));
        vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[0U] 
            = vlSelf->cdfg_tb__DOT__registers[2U];
        if ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[3U])) {
            if ((1U & (~ (vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[3U] 
                          >> 0x19U)))) {
                vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[0U] 
                    = vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[0U];
                vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[1U] 
                    = vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[1U];
                vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[2U] 
                    = vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[2U];
                vlSelf->cdfg_tb__DOT__dut__DOT__q1_d[3U] 
                    = vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U];
            }
        } else {
            vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[0U] 
                = vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[0U];
            vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[1U] 
                = vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[1U];
            vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[2U] 
                = vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[2U];
            vlSelf->cdfg_tb__DOT__dut__DOT__q0_d[3U] 
                = vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj[3U];
        }
    }
    vlSelf->cdfg_tb__DOT__dut__DOT__cnt_d = vlSelf->cdfg_tb__DOT__dut__DOT__cnt_q;
    if ((1U & (~ ((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
                if ((1U & (~ (IData)(cdfg_tb__DOT__dut__DOT__eng_killed_now)))) {
                    if (vlSelf->cdfg_tb__DOT__dut__DOT__eng_run1_done) {
                        if ((0xbU != (0xfU & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                              >> 0x13U)))) {
                            vlSelf->cdfg_tb__DOT__dut__DOT__addb_d 
                                = (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U] 
                                   + vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[0U]);
                            vlSelf->cdfg_tb__DOT__dut__DOT__mul_d 
                                = (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U] 
                                   * vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[1U]);
                        }
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
            if ((1U & (~ (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q)))) {
                if ((1U & (~ (IData)(cdfg_tb__DOT__dut__DOT__eng_killed_now)))) {
                    if (vlSelf->cdfg_tb__DOT__dut__DOT__eng_run2_done) {
                        vlSelf->cdfg_tb__DOT__dut__DOT__adda_d 
                            = (vlSelf->cdfg_tb__DOT__dut__DOT__mul_q 
                               + vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[0U]);
                    }
                }
            }
            if ((1U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
                if ((1U & (~ (IData)(cdfg_tb__DOT__dut__DOT__eng_killed_now)))) {
                    if (vlSelf->cdfg_tb__DOT__dut__DOT__eng_run3_done) {
                        vlSelf->cdfg_tb__DOT__dut__DOT__res_d 
                            = (vlSelf->cdfg_tb__DOT__dut__DOT__adda_q 
                               ^ vlSelf->cdfg_tb__DOT__dut__DOT__addb_q);
                    }
                    if ((1U & (~ (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_run3_done)))) {
                        vlSelf->cdfg_tb__DOT__dut__DOT__cnt_d 
                            = (0x3fU & ((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__cnt_q) 
                                        - (IData)(1U)));
                    }
                }
            } else if ((1U & (~ (IData)(cdfg_tb__DOT__dut__DOT__eng_killed_now)))) {
                if (vlSelf->cdfg_tb__DOT__dut__DOT__eng_run2_done) {
                    vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__104__sel 
                        = (7U & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                 >> 0x10U));
                    vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__104__Vfuncout 
                        = (0x3fU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__104__sel)));
                    vlSelf->cdfg_tb__DOT__dut__DOT__cnt_d 
                        = vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__104__Vfuncout;
                } else {
                    vlSelf->cdfg_tb__DOT__dut__DOT__cnt_d 
                        = (0x3fU & ((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__cnt_q) 
                                    - (IData)(1U)));
                }
            }
        } else if ((1U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
            if ((1U & (~ (IData)(cdfg_tb__DOT__dut__DOT__eng_killed_now)))) {
                if (vlSelf->cdfg_tb__DOT__dut__DOT__eng_run1_done) {
                    if ((0xbU == (0xfU & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                          >> 0x13U)))) {
                        vlSelf->cdfg_tb__DOT__dut__DOT__res_d 
                            = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U];
                    }
                    if ((0xbU != (0xfU & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                          >> 0x13U)))) {
                        vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__105__sel 
                            = (7U & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                     >> 0x10U));
                        vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__105__Vfuncout 
                            = (0x3fU & ((IData)(1U) 
                                        << (IData)(vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__105__sel)));
                        vlSelf->cdfg_tb__DOT__dut__DOT__cnt_d 
                            = vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__105__Vfuncout;
                    }
                } else {
                    vlSelf->cdfg_tb__DOT__dut__DOT__cnt_d 
                        = (0x3fU & ((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__cnt_q) 
                                    - (IData)(1U)));
                }
            }
        } else if (cdfg_tb__DOT__dut__DOT__eng_take_run) {
            vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__106__sel 
                = (7U & (cdfg_tb__DOT__dut__DOT__q0_cu[3U] 
                         >> 0x10U));
            vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__106__Vfuncout 
                = (0x3fU & ((IData)(1U) << (IData)(vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__106__sel)));
            vlSelf->cdfg_tb__DOT__dut__DOT__cnt_d = vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__106__Vfuncout;
        }
    }
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[0U] = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[0U];
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[1U] = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[1U];
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[2U] = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U];
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U];
    vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q;
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j[0U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[0U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j[1U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[1U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j[2U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j[3U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__Vfuncout 
        = (((((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
              & (IData)(vlSelf->cdfg_tb__DOT__commit)) 
             & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j[3U] 
                >> 0x19U)) & ((1U & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j[3U] 
                                     >> 0xfU)) == (1U 
                                                   & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                                      >> 0xbU)))) 
           & ((0x3ffU & (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__j[3U] 
                         >> 5U)) == (0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                               >> 1U))));
    if (__Vfunc_cdfg_tb__DOT__dut__DOT__kill_for__102__Vfuncout) {
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] = 
            (0x1000000U | vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
    }
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j[0U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[0U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j[1U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[1U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j[2U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j[3U] 
        = vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U];
    __Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__Vfuncout 
        = (((((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
              & (~ (IData)(vlSelf->cdfg_tb__DOT__commit))) 
             & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j[3U] 
                >> 0x19U)) & ((1U & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j[3U] 
                                     >> 0xfU)) == (1U 
                                                   & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                                      >> 0xbU)))) 
           & ((0x3ffU & (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__j[3U] 
                         >> 5U)) == (0x3ffU & ((IData)(vlSelf->cdfg_tb__DOT__commit) 
                                               >> 1U))));
    if (__Vfunc_cdfg_tb__DOT__dut__DOT__commit_for__103__Vfuncout) {
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] = 
            (0x800000U | vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
    }
    if ((4U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
        if ((2U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 0U;
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
        } else if ((1U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 0U;
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
        } else if (cdfg_tb__DOT__dut__DOT__eng_killed_now) {
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 0U;
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
        } else if ((1U & (~ (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                     >> 0x32U))))) {
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 0U;
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
        }
    } else if ((2U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
        if ((1U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
            if (cdfg_tb__DOT__dut__DOT__eng_killed_now) {
                vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 0U;
                vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                    = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
            } else if (vlSelf->cdfg_tb__DOT__dut__DOT__eng_run3_done) {
                vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d 
                    = ((1U & (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                      >> 0x32U))) ? 4U
                        : 0U);
                if ((1U & (~ (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                      >> 0x32U))))) {
                    vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                        = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
                }
            }
        } else if (cdfg_tb__DOT__dut__DOT__eng_killed_now) {
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 0U;
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
        } else if (vlSelf->cdfg_tb__DOT__dut__DOT__eng_run2_done) {
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q))) {
        if (cdfg_tb__DOT__dut__DOT__eng_killed_now) {
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 0U;
            vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
        } else if (vlSelf->cdfg_tb__DOT__dut__DOT__eng_run1_done) {
            if ((0xbU == (0xfU & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                  >> 0x13U)))) {
                vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d 
                    = ((1U & (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                      >> 0x32U))) ? 4U
                        : 0U);
                if ((1U & (~ (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                                      >> 0x32U))))) {
                    vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                        = (0x1ffffffU & vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
                }
            } else {
                vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 2U;
            }
        }
    } else if (cdfg_tb__DOT__dut__DOT__eng_take_run) {
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = 1U;
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[0U] = 
            cdfg_tb__DOT__dut__DOT__q0_cu[0U];
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[1U] = 
            cdfg_tb__DOT__dut__DOT__q0_cu[1U];
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[2U] = 
            cdfg_tb__DOT__dut__DOT__q0_cu[2U];
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] = 
            cdfg_tb__DOT__dut__DOT__q0_cu[3U];
        vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] = 
            (0x2000000U | vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U]);
    }
    if (((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
         & ((IData)(vlSelf->cdfg_tb__DOT__commit) & (IData)(cdfg_tb__DOT__dut__DOT____VdfgTmp_hbe32622d__0)))) {
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = (0x2000000000000ULL 
                                                  | vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d);
    }
    if (((IData)(vlSelf->cdfg_tb__DOT__commit_valid) 
         & ((~ (IData)(vlSelf->cdfg_tb__DOT__commit)) 
            & (IData)(cdfg_tb__DOT__dut__DOT____VdfgTmp_hbe32622d__0)))) {
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = (0x1000000000000ULL 
                                                  | vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d);
    }
    if (((((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_run1_done) 
           & (0x580000U == (0x780000U & vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U]))) 
          | (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_run3_done)) 
         & ((~ (IData)(cdfg_tb__DOT__dut__DOT__eng_killed_now)) 
            & (~ (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                          >> 0x32U)))))) {
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = ((0x7fffffffffffULL 
                                                   & vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d) 
                                                  | ((QData)((IData)(
                                                                     (8U 
                                                                      | ((2U 
                                                                          & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                                                                             >> 0x16U)) 
                                                                         | (1U 
                                                                            & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                                                               >> 0xfU)))))) 
                                                     << 0x2fU));
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = ((0x7800000000000ULL 
                                                   & vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d) 
                                                  | (((QData)((IData)(
                                                                      (0x7fffU 
                                                                       & vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U]))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((0xbU 
                                                                         == 
                                                                         (0xfU 
                                                                          & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                                                             >> 0x13U)))
                                                                         ? 
                                                                        vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[2U]
                                                                         : 
                                                                        (vlSelf->cdfg_tb__DOT__dut__DOT__adda_q 
                                                                         ^ vlSelf->cdfg_tb__DOT__dut__DOT__addb_q))))));
    } else if ((((4U == (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q)) 
                 & (~ (IData)((vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q 
                               >> 0x32U)))) & (~ (IData)(cdfg_tb__DOT__dut__DOT__eng_killed_now)))) {
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = ((0x7fffffffffffULL 
                                                   & vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d) 
                                                  | ((QData)((IData)(
                                                                     (8U 
                                                                      | ((2U 
                                                                          & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_d[3U] 
                                                                             >> 0x16U)) 
                                                                         | (1U 
                                                                            & (vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U] 
                                                                               >> 0xfU)))))) 
                                                     << 0x2fU));
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = ((0x7800000000000ULL 
                                                   & vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d) 
                                                  | (((QData)((IData)(
                                                                      (0x7fffU 
                                                                       & vlSelf->cdfg_tb__DOT__dut__DOT__eng_q[3U]))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__res_q))));
    }
    if ((IData)((0x6000000000000ULL == (0x6000000000000ULL 
                                        & vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q)))) {
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = (0x3ffffffffffffULL 
                                                  & vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d);
    } else if (((IData)(vlSelf->cdfg_tb__DOT__result_valid) 
                & (IData)(vlSelf->cdfg_tb__DOT__result_ready))) {
        vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = (0x3ffffffffffffULL 
                                                  & vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d);
    }
}

void Vcdfg_tb___024root___eval_nba(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vcdfg_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vcdfg_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((((((((((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
                  | vlSelf->__VnbaTriggered.at(2U)) 
                 | vlSelf->__VnbaTriggered.at(3U)) 
                | vlSelf->__VnbaTriggered.at(4U)) | vlSelf->__VnbaTriggered.at(5U)) 
              | vlSelf->__VnbaTriggered.at(6U)) | vlSelf->__VnbaTriggered.at(7U)) 
            | vlSelf->__VnbaTriggered.at(8U)) | vlSelf->__VnbaTriggered.at(9U)) 
          | vlSelf->__VnbaTriggered.at(0xaU)) | vlSelf->__VnbaTriggered.at(0xbU))) {
        Vcdfg_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vcdfg_tb___024root___eval_triggers__act(Vcdfg_tb___024root* vlSelf);
void Vcdfg_tb___024root___timing_commit(Vcdfg_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcdfg_tb___024root___dump_triggers__act(Vcdfg_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vcdfg_tb___024root___timing_resume(Vcdfg_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcdfg_tb___024root___dump_triggers__nba(Vcdfg_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcdfg_tb___024root___eval(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<12> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vcdfg_tb___024root___eval_triggers__act(vlSelf);
            Vcdfg_tb___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcdfg_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 18, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vcdfg_tb___024root___timing_resume(vlSelf);
                Vcdfg_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcdfg_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 18, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcdfg_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vcdfg_tb___024root___timing_commit(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0U))))) {
        vlSelf->__VtrigSched_h3cae1fb6__0.commit("@(posedge clk)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(2U))))) {
        vlSelf->__VtrigSched_h3cae1f77__0.commit("@(negedge clk)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(3U))))) {
        vlSelf->__VtrigSched_h1f6fda87__0.commit("@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__2__jid)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(4U))))) {
        vlSelf->__VtrigSched_hf78e1896__0.commit("@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__7__jid)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(5U))))) {
        vlSelf->__VtrigSched_hd1a7fb58__0.commit("@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__14__jid)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(6U))))) {
        vlSelf->__VtrigSched_hba702124__0.commit("@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__16__jid)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(7U))))) {
        vlSelf->__VtrigSched_h17bdab3d__0.commit("@([changed] cdfg_tb.result_valid)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(8U))))) {
        vlSelf->__VtrigSched_h45db8945__0.commit("@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__50__jid)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(9U))))) {
        vlSelf->__VtrigSched_he8b42485__0.commit("@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__85__jid)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0xaU))))) {
        vlSelf->__VtrigSched_h878b8e03__0.commit("@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__91__jid)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0xbU))))) {
        vlSelf->__VtrigSched_h2cbfa2a0__0.commit("@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__94__jid)");
    }
}

void Vcdfg_tb___024root___timing_resume(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VtrigSched_h3cae1fb6__0.resume("@(posedge clk)");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        vlSelf->__VtrigSched_h3cae1f77__0.resume("@(negedge clk)");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        vlSelf->__VtrigSched_h1f6fda87__0.resume("@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__2__jid)");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        vlSelf->__VtrigSched_hf78e1896__0.resume("@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__7__jid)");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        vlSelf->__VtrigSched_hd1a7fb58__0.resume("@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__14__jid)");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        vlSelf->__VtrigSched_hba702124__0.resume("@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__16__jid)");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        vlSelf->__VtrigSched_h17bdab3d__0.resume("@([changed] cdfg_tb.result_valid)");
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        vlSelf->__VtrigSched_h45db8945__0.resume("@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__50__jid)");
    }
    if (vlSelf->__VactTriggered.at(9U)) {
        vlSelf->__VtrigSched_he8b42485__0.resume("@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__85__jid)");
    }
    if (vlSelf->__VactTriggered.at(0xaU)) {
        vlSelf->__VtrigSched_h878b8e03__0.resume("@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__91__jid)");
    }
    if (vlSelf->__VactTriggered.at(0xbU)) {
        vlSelf->__VtrigSched_h2cbfa2a0__0.resume("@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__94__jid)");
    }
}

#ifdef VL_DEBUG
void Vcdfg_tb___024root___eval_debug_assertions(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG

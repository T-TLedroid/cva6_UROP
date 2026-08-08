// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcdfg_tb.h for the primary calling header

#include "verilated.h"

#include "Vcdfg_tb___024root.h"

VL_ATTR_COLD void Vcdfg_tb___024root___eval_static(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcdfg_tb___024root___eval_final(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vcdfg_tb___024root___eval_triggers__stl(Vcdfg_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcdfg_tb___024root___dump_triggers__stl(Vcdfg_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vcdfg_tb___024root___eval_stl(Vcdfg_tb___024root* vlSelf);

VL_ATTR_COLD void Vcdfg_tb___024root___eval_settle(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vcdfg_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vcdfg_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 18, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vcdfg_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcdfg_tb___024root___dump_triggers__stl(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcdfg_tb___024root___stl_sequent__TOP__0(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___stl_sequent__TOP__0\n"); );
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
    vlSelf->cdfg_tb__DOT__result_valid = (IData)((0x5000000000000ULL 
                                                  == 
                                                  (0x7000000000000ULL 
                                                   & vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q)));
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
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_run2_done = 
        ((2U == (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q)) 
         & (1U >= (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__cnt_q)));
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_run3_done = 
        ((3U == (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q)) 
         & (1U >= (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__cnt_q)));
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_run1_done = 
        ((1U == (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q)) 
         & (1U >= (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__cnt_q)));
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

VL_ATTR_COLD void Vcdfg_tb___024root___eval_stl(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vcdfg_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcdfg_tb___024root___dump_triggers__act(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or negedge rst_n)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__2__jid)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__7__jid)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__14__jid)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__16__jid)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([changed] cdfg_tb.result_valid)\n");
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__50__jid)\n");
    }
    if (vlSelf->__VactTriggered.at(9U)) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__85__jid)\n");
    }
    if (vlSelf->__VactTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__91__jid)\n");
    }
    if (vlSelf->__VactTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__94__jid)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcdfg_tb___024root___dump_triggers__nba(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or negedge rst_n)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__2__jid)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__7__jid)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__14__jid)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__16__jid)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([changed] cdfg_tb.result_valid)\n");
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__50__jid)\n");
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__85__jid)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__91__jid)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__94__jid)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcdfg_tb___024root___ctor_var_reset(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->cdfg_tb__DOT__issue_valid = VL_RAND_RESET_I(1);
    vlSelf->cdfg_tb__DOT__opcode = VL_RAND_RESET_I(4);
    vlSelf->cdfg_tb__DOT__latency_sel = VL_RAND_RESET_I(3);
    vlSelf->cdfg_tb__DOT__hartid = VL_RAND_RESET_I(1);
    vlSelf->cdfg_tb__DOT__id = VL_RAND_RESET_I(10);
    vlSelf->cdfg_tb__DOT__rd = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(96, vlSelf->cdfg_tb__DOT__registers);
    vlSelf->cdfg_tb__DOT__commit_valid = VL_RAND_RESET_I(1);
    vlSelf->cdfg_tb__DOT__commit = VL_RAND_RESET_I(12);
    vlSelf->cdfg_tb__DOT__result_ready = VL_RAND_RESET_I(1);
    vlSelf->cdfg_tb__DOT__result_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->cdfg_tb__DOT__seen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->cdfg_tb__DOT__seen_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cdfg_tb__DOT__transfer_count = 0;
    vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j = VL_RAND_RESET_I(10);
    vlSelf->cdfg_tb__DOT__unnamedblk4__DOT__j = VL_RAND_RESET_I(10);
    vlSelf->cdfg_tb__DOT__unnamedblk6__DOT__j0 = VL_RAND_RESET_I(10);
    vlSelf->cdfg_tb__DOT__unnamedblk6__DOT__j1 = VL_RAND_RESET_I(10);
    vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__j = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths[__Vi0] = 0;
    }
    vlSelf->cdfg_tb__DOT__unnamedblk14__DOT__j = VL_RAND_RESET_I(10);
    vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__j = VL_RAND_RESET_I(10);
    vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__expv = VL_RAND_RESET_I(32);
    vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__latv = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(122, vlSelf->cdfg_tb__DOT__dut__DOT__q0_q);
    VL_RAND_RESET_W(122, vlSelf->cdfg_tb__DOT__dut__DOT__q0_d);
    VL_RAND_RESET_W(122, vlSelf->cdfg_tb__DOT__dut__DOT__q1_q);
    VL_RAND_RESET_W(122, vlSelf->cdfg_tb__DOT__dut__DOT__q1_d);
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_q = VL_RAND_RESET_I(3);
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_state_d = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(122, vlSelf->cdfg_tb__DOT__dut__DOT__eng_q);
    VL_RAND_RESET_W(122, vlSelf->cdfg_tb__DOT__dut__DOT__eng_d);
    vlSelf->cdfg_tb__DOT__dut__DOT__cnt_q = VL_RAND_RESET_I(6);
    vlSelf->cdfg_tb__DOT__dut__DOT__cnt_d = VL_RAND_RESET_I(6);
    vlSelf->cdfg_tb__DOT__dut__DOT__mul_q = VL_RAND_RESET_I(32);
    vlSelf->cdfg_tb__DOT__dut__DOT__mul_d = VL_RAND_RESET_I(32);
    vlSelf->cdfg_tb__DOT__dut__DOT__addb_q = VL_RAND_RESET_I(32);
    vlSelf->cdfg_tb__DOT__dut__DOT__addb_d = VL_RAND_RESET_I(32);
    vlSelf->cdfg_tb__DOT__dut__DOT__adda_q = VL_RAND_RESET_I(32);
    vlSelf->cdfg_tb__DOT__dut__DOT__adda_d = VL_RAND_RESET_I(32);
    vlSelf->cdfg_tb__DOT__dut__DOT__res_q = VL_RAND_RESET_I(32);
    vlSelf->cdfg_tb__DOT__dut__DOT__res_d = VL_RAND_RESET_I(32);
    vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q = VL_RAND_RESET_Q(51);
    vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_d = VL_RAND_RESET_Q(51);
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_run1_done = VL_RAND_RESET_I(1);
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_run2_done = VL_RAND_RESET_I(1);
    vlSelf->cdfg_tb__DOT__dut__DOT__eng_run3_done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(122, vlSelf->cdfg_tb__DOT__dut__DOT__unnamedblk1__DOT__nj);
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid = VL_RAND_RESET_I(10);
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid = VL_RAND_RESET_I(10);
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__14__jid = VL_RAND_RESET_I(10);
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__16__jid = VL_RAND_RESET_I(10);
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__50__jid = VL_RAND_RESET_I(10);
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__85__jid = VL_RAND_RESET_I(10);
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__91__jid = VL_RAND_RESET_I(10);
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__94__jid = VL_RAND_RESET_I(10);
    vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__104__Vfuncout = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__104__sel = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__105__Vfuncout = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__105__sel = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__106__Vfuncout = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cdfg_tb__DOT__dut__DOT__lat_cycles__106__sel = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst_n = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__Vtrigrprev__TOP__cdfg_tb__DOT__seen[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__2__jid = VL_RAND_RESET_I(10);
    vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__7__jid = VL_RAND_RESET_I(10);
    vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__14__jid = VL_RAND_RESET_I(10);
    vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__16__jid = VL_RAND_RESET_I(10);
    vlSelf->__Vtrigrprev__TOP__cdfg_tb__DOT__result_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__50__jid = VL_RAND_RESET_I(10);
    vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__85__jid = VL_RAND_RESET_I(10);
    vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__91__jid = VL_RAND_RESET_I(10);
    vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__94__jid = VL_RAND_RESET_I(10);
    vlSelf->__VactDidInit = 0;
}

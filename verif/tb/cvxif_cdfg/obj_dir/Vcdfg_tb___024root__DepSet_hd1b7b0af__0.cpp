// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcdfg_tb.h for the primary calling header

#include "verilated.h"

#include "Vcdfg_tb__Syms.h"
#include "Vcdfg_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vcdfg_tb___024root___eval_initial__TOP__0(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    SData/*9:0*/ cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = 0;
    VlUnpacked<IData/*31:0*/, 1024> cdfg_tb__DOT__exp_data;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        cdfg_tb__DOT__exp_data[__Vi0] = 0;
    }
    IData/*31:0*/ cdfg_tb__DOT__n_pass;
    cdfg_tb__DOT__n_pass = 0;
    IData/*31:0*/ cdfg_tb__DOT__n_fail;
    cdfg_tb__DOT__n_fail = 0;
    std::string cdfg_tb__DOT__cur_test;
    IData/*31:0*/ cdfg_tb__DOT__tick__Vstatic__k;
    cdfg_tb__DOT__tick__Vstatic__k = 0;
    IData/*31:0*/ cdfg_tb__DOT__unnamedblk1__DOT__i;
    cdfg_tb__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ cdfg_tb__DOT__unnamedblk2__DOT__a;
    cdfg_tb__DOT__unnamedblk2__DOT__a = 0;
    IData/*31:0*/ cdfg_tb__DOT__unnamedblk4__DOT__a;
    cdfg_tb__DOT__unnamedblk4__DOT__a = 0;
    IData/*31:0*/ cdfg_tb__DOT__unnamedblk4__DOT__b;
    cdfg_tb__DOT__unnamedblk4__DOT__b = 0;
    IData/*31:0*/ cdfg_tb__DOT__unnamedblk4__DOT__c;
    cdfg_tb__DOT__unnamedblk4__DOT__c = 0;
    IData/*31:0*/ cdfg_tb__DOT__unnamedblk4__DOT__exp;
    cdfg_tb__DOT__unnamedblk4__DOT__exp = 0;
    IData/*31:0*/ cdfg_tb__DOT__unnamedblk6__DOT__a0;
    cdfg_tb__DOT__unnamedblk6__DOT__a0 = 0;
    IData/*31:0*/ cdfg_tb__DOT__unnamedblk6__DOT__a1;
    cdfg_tb__DOT__unnamedblk6__DOT__a1 = 0;
    SData/*9:0*/ cdfg_tb__DOT__unnamedblk7__DOT__j0;
    cdfg_tb__DOT__unnamedblk7__DOT__j0 = 0;
    SData/*9:0*/ cdfg_tb__DOT__unnamedblk7__DOT__j1;
    cdfg_tb__DOT__unnamedblk7__DOT__j1 = 0;
    SData/*9:0*/ cdfg_tb__DOT__unnamedblk7__DOT__j2;
    cdfg_tb__DOT__unnamedblk7__DOT__j2 = 0;
    SData/*9:0*/ cdfg_tb__DOT__unnamedblk7__DOT__j3;
    cdfg_tb__DOT__unnamedblk7__DOT__j3 = 0;
    IData/*31:0*/ cdfg_tb__DOT__unnamedblk8__DOT__tc0;
    cdfg_tb__DOT__unnamedblk8__DOT__tc0 = 0;
    IData/*31:0*/ cdfg_tb__DOT__unnamedblk8__DOT__d0;
    cdfg_tb__DOT__unnamedblk8__DOT__d0 = 0;
    IData/*31:0*/ cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k;
    cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k = 0;
    SData/*9:0*/ cdfg_tb__DOT__unnamedblk10__DOT__jA;
    cdfg_tb__DOT__unnamedblk10__DOT__jA = 0;
    SData/*9:0*/ cdfg_tb__DOT__unnamedblk10__DOT__jB;
    cdfg_tb__DOT__unnamedblk10__DOT__jB = 0;
    SData/*9:0*/ cdfg_tb__DOT__unnamedblk11__DOT__j;
    cdfg_tb__DOT__unnamedblk11__DOT__j = 0;
    SData/*9:0*/ cdfg_tb__DOT__unnamedblk12__DOT__j;
    cdfg_tb__DOT__unnamedblk12__DOT__j = 0;
    SData/*9:0*/ cdfg_tb__DOT__unnamedblk13__DOT__j;
    cdfg_tb__DOT__unnamedblk13__DOT__j = 0;
    IData/*31:0*/ cdfg_tb__DOT__unnamedblk14__DOT__a;
    cdfg_tb__DOT__unnamedblk14__DOT__a = 0;
    IData/*31:0*/ cdfg_tb__DOT__unnamedblk15__DOT__seed;
    cdfg_tb__DOT__unnamedblk15__DOT__seed = 0;
    IData/*31:0*/ cdfg_tb__DOT__unnamedblk15__DOT__unnamedblk16__DOT__v;
    cdfg_tb__DOT__unnamedblk15__DOT__unnamedblk16__DOT__v = 0;
    IData/*31:0*/ cdfg_tb__DOT__unnamedblk15__DOT__unnamedblk17__DOT__v;
    cdfg_tb__DOT__unnamedblk15__DOT__unnamedblk17__DOT__v = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__clear_seen__0__jid;
    __Vtask_cdfg_tb__DOT__clear_seen__0__jid = 0;
    CData/*3:0*/ __Vtask_cdfg_tb__DOT__do_issue__1__op;
    __Vtask_cdfg_tb__DOT__do_issue__1__op = 0;
    CData/*2:0*/ __Vtask_cdfg_tb__DOT__do_issue__1__lat;
    __Vtask_cdfg_tb__DOT__do_issue__1__lat = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__1__a;
    __Vtask_cdfg_tb__DOT__do_issue__1__a = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__1__b;
    __Vtask_cdfg_tb__DOT__do_issue__1__b = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__1__c;
    __Vtask_cdfg_tb__DOT__do_issue__1__c = 0;
    CData/*4:0*/ __Vtask_cdfg_tb__DOT__do_issue__1__rdd;
    __Vtask_cdfg_tb__DOT__do_issue__1__rdd = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__do_issue__1__with_commit;
    __Vtask_cdfg_tb__DOT__do_issue__1__with_commit = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_issue__1__jid;
    __Vtask_cdfg_tb__DOT__do_issue__1__jid = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__expect_result__2__expected;
    __Vtask_cdfg_tb__DOT__expect_result__2__expected = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__3__cond;
    __Vtask_cdfg_tb__DOT__check__3__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__3__msg;
    IData/*31:0*/ __Vfunc_cdfg_tb__DOT__cdfg_ref__4__Vfuncout;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cdfg_tb__DOT__cdfg_ref__4__a;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__a = 0;
    IData/*31:0*/ __Vfunc_cdfg_tb__DOT__cdfg_ref__4__b;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__b = 0;
    IData/*31:0*/ __Vfunc_cdfg_tb__DOT__cdfg_ref__4__c;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__c = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__clear_seen__5__jid;
    __Vtask_cdfg_tb__DOT__clear_seen__5__jid = 0;
    CData/*3:0*/ __Vtask_cdfg_tb__DOT__do_issue__6__op;
    __Vtask_cdfg_tb__DOT__do_issue__6__op = 0;
    CData/*2:0*/ __Vtask_cdfg_tb__DOT__do_issue__6__lat;
    __Vtask_cdfg_tb__DOT__do_issue__6__lat = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__6__a;
    __Vtask_cdfg_tb__DOT__do_issue__6__a = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__6__b;
    __Vtask_cdfg_tb__DOT__do_issue__6__b = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__6__c;
    __Vtask_cdfg_tb__DOT__do_issue__6__c = 0;
    CData/*4:0*/ __Vtask_cdfg_tb__DOT__do_issue__6__rdd;
    __Vtask_cdfg_tb__DOT__do_issue__6__rdd = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__do_issue__6__with_commit;
    __Vtask_cdfg_tb__DOT__do_issue__6__with_commit = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_issue__6__jid;
    __Vtask_cdfg_tb__DOT__do_issue__6__jid = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__expect_result__7__expected;
    __Vtask_cdfg_tb__DOT__expect_result__7__expected = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__8__cond;
    __Vtask_cdfg_tb__DOT__check__8__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__8__msg;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__9__n;
    __Vtask_cdfg_tb__DOT__tick__9__n = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__clear_seen__10__jid;
    __Vtask_cdfg_tb__DOT__clear_seen__10__jid = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__clear_seen__11__jid;
    __Vtask_cdfg_tb__DOT__clear_seen__11__jid = 0;
    CData/*3:0*/ __Vtask_cdfg_tb__DOT__do_issue__12__op;
    __Vtask_cdfg_tb__DOT__do_issue__12__op = 0;
    CData/*2:0*/ __Vtask_cdfg_tb__DOT__do_issue__12__lat;
    __Vtask_cdfg_tb__DOT__do_issue__12__lat = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__12__a;
    __Vtask_cdfg_tb__DOT__do_issue__12__a = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__12__b;
    __Vtask_cdfg_tb__DOT__do_issue__12__b = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__12__c;
    __Vtask_cdfg_tb__DOT__do_issue__12__c = 0;
    CData/*4:0*/ __Vtask_cdfg_tb__DOT__do_issue__12__rdd;
    __Vtask_cdfg_tb__DOT__do_issue__12__rdd = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__do_issue__12__with_commit;
    __Vtask_cdfg_tb__DOT__do_issue__12__with_commit = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_issue__12__jid;
    __Vtask_cdfg_tb__DOT__do_issue__12__jid = 0;
    CData/*3:0*/ __Vtask_cdfg_tb__DOT__do_issue__13__op;
    __Vtask_cdfg_tb__DOT__do_issue__13__op = 0;
    CData/*2:0*/ __Vtask_cdfg_tb__DOT__do_issue__13__lat;
    __Vtask_cdfg_tb__DOT__do_issue__13__lat = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__13__a;
    __Vtask_cdfg_tb__DOT__do_issue__13__a = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__13__b;
    __Vtask_cdfg_tb__DOT__do_issue__13__b = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__13__c;
    __Vtask_cdfg_tb__DOT__do_issue__13__c = 0;
    CData/*4:0*/ __Vtask_cdfg_tb__DOT__do_issue__13__rdd;
    __Vtask_cdfg_tb__DOT__do_issue__13__rdd = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__do_issue__13__with_commit;
    __Vtask_cdfg_tb__DOT__do_issue__13__with_commit = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_issue__13__jid;
    __Vtask_cdfg_tb__DOT__do_issue__13__jid = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__expect_result__14__expected;
    __Vtask_cdfg_tb__DOT__expect_result__14__expected = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__15__cond;
    __Vtask_cdfg_tb__DOT__check__15__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__15__msg;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__expect_result__16__expected;
    __Vtask_cdfg_tb__DOT__expect_result__16__expected = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__17__cond;
    __Vtask_cdfg_tb__DOT__check__17__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__17__msg;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__18__cond;
    __Vtask_cdfg_tb__DOT__check__18__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__18__msg;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__19__n;
    __Vtask_cdfg_tb__DOT__tick__19__n = 0;
    CData/*3:0*/ __Vtask_cdfg_tb__DOT__do_issue__20__op;
    __Vtask_cdfg_tb__DOT__do_issue__20__op = 0;
    CData/*2:0*/ __Vtask_cdfg_tb__DOT__do_issue__20__lat;
    __Vtask_cdfg_tb__DOT__do_issue__20__lat = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__20__a;
    __Vtask_cdfg_tb__DOT__do_issue__20__a = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__20__b;
    __Vtask_cdfg_tb__DOT__do_issue__20__b = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__20__c;
    __Vtask_cdfg_tb__DOT__do_issue__20__c = 0;
    CData/*4:0*/ __Vtask_cdfg_tb__DOT__do_issue__20__rdd;
    __Vtask_cdfg_tb__DOT__do_issue__20__rdd = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__do_issue__20__with_commit;
    __Vtask_cdfg_tb__DOT__do_issue__20__with_commit = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_issue__20__jid;
    __Vtask_cdfg_tb__DOT__do_issue__20__jid = 0;
    CData/*3:0*/ __Vtask_cdfg_tb__DOT__do_issue__21__op;
    __Vtask_cdfg_tb__DOT__do_issue__21__op = 0;
    CData/*2:0*/ __Vtask_cdfg_tb__DOT__do_issue__21__lat;
    __Vtask_cdfg_tb__DOT__do_issue__21__lat = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__21__a;
    __Vtask_cdfg_tb__DOT__do_issue__21__a = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__21__b;
    __Vtask_cdfg_tb__DOT__do_issue__21__b = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__21__c;
    __Vtask_cdfg_tb__DOT__do_issue__21__c = 0;
    CData/*4:0*/ __Vtask_cdfg_tb__DOT__do_issue__21__rdd;
    __Vtask_cdfg_tb__DOT__do_issue__21__rdd = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__do_issue__21__with_commit;
    __Vtask_cdfg_tb__DOT__do_issue__21__with_commit = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_issue__21__jid;
    __Vtask_cdfg_tb__DOT__do_issue__21__jid = 0;
    CData/*3:0*/ __Vtask_cdfg_tb__DOT__do_issue__22__op;
    __Vtask_cdfg_tb__DOT__do_issue__22__op = 0;
    CData/*2:0*/ __Vtask_cdfg_tb__DOT__do_issue__22__lat;
    __Vtask_cdfg_tb__DOT__do_issue__22__lat = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__22__a;
    __Vtask_cdfg_tb__DOT__do_issue__22__a = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__22__b;
    __Vtask_cdfg_tb__DOT__do_issue__22__b = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__22__c;
    __Vtask_cdfg_tb__DOT__do_issue__22__c = 0;
    CData/*4:0*/ __Vtask_cdfg_tb__DOT__do_issue__22__rdd;
    __Vtask_cdfg_tb__DOT__do_issue__22__rdd = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__do_issue__22__with_commit;
    __Vtask_cdfg_tb__DOT__do_issue__22__with_commit = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_issue__22__jid;
    __Vtask_cdfg_tb__DOT__do_issue__22__jid = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__23__cond;
    __Vtask_cdfg_tb__DOT__check__23__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__23__msg;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__24__n;
    __Vtask_cdfg_tb__DOT__tick__24__n = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__25__cond;
    __Vtask_cdfg_tb__DOT__check__25__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__25__msg;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__26__cond;
    __Vtask_cdfg_tb__DOT__check__26__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__26__msg;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__27__cond;
    __Vtask_cdfg_tb__DOT__check__27__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__27__msg;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__28__n;
    __Vtask_cdfg_tb__DOT__tick__28__n = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__set_rdy__29__r;
    __Vtask_cdfg_tb__DOT__set_rdy__29__r = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__clear_seen__30__jid;
    __Vtask_cdfg_tb__DOT__clear_seen__30__jid = 0;
    CData/*3:0*/ __Vtask_cdfg_tb__DOT__do_issue__31__op;
    __Vtask_cdfg_tb__DOT__do_issue__31__op = 0;
    CData/*2:0*/ __Vtask_cdfg_tb__DOT__do_issue__31__lat;
    __Vtask_cdfg_tb__DOT__do_issue__31__lat = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__31__a;
    __Vtask_cdfg_tb__DOT__do_issue__31__a = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__31__b;
    __Vtask_cdfg_tb__DOT__do_issue__31__b = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__31__c;
    __Vtask_cdfg_tb__DOT__do_issue__31__c = 0;
    CData/*4:0*/ __Vtask_cdfg_tb__DOT__do_issue__31__rdd;
    __Vtask_cdfg_tb__DOT__do_issue__31__rdd = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__do_issue__31__with_commit;
    __Vtask_cdfg_tb__DOT__do_issue__31__with_commit = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_issue__31__jid;
    __Vtask_cdfg_tb__DOT__do_issue__31__jid = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__set_rdy__32__r;
    __Vtask_cdfg_tb__DOT__set_rdy__32__r = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__33__cond;
    __Vtask_cdfg_tb__DOT__check__33__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__33__msg;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__34__cond;
    __Vtask_cdfg_tb__DOT__check__34__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__34__msg;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__set_rdy__35__r;
    __Vtask_cdfg_tb__DOT__set_rdy__35__r = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__36__cond;
    __Vtask_cdfg_tb__DOT__check__36__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__36__msg;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__37__cond;
    __Vtask_cdfg_tb__DOT__check__37__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__37__msg;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__clear_seen__38__jid;
    __Vtask_cdfg_tb__DOT__clear_seen__38__jid = 0;
    CData/*3:0*/ __Vtask_cdfg_tb__DOT__do_issue__39__op;
    __Vtask_cdfg_tb__DOT__do_issue__39__op = 0;
    CData/*2:0*/ __Vtask_cdfg_tb__DOT__do_issue__39__lat;
    __Vtask_cdfg_tb__DOT__do_issue__39__lat = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__39__a;
    __Vtask_cdfg_tb__DOT__do_issue__39__a = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__39__b;
    __Vtask_cdfg_tb__DOT__do_issue__39__b = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__39__c;
    __Vtask_cdfg_tb__DOT__do_issue__39__c = 0;
    CData/*4:0*/ __Vtask_cdfg_tb__DOT__do_issue__39__rdd;
    __Vtask_cdfg_tb__DOT__do_issue__39__rdd = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__do_issue__39__with_commit;
    __Vtask_cdfg_tb__DOT__do_issue__39__with_commit = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_issue__39__jid;
    __Vtask_cdfg_tb__DOT__do_issue__39__jid = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__set_rdy__40__r;
    __Vtask_cdfg_tb__DOT__set_rdy__40__r = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__41__n;
    __Vtask_cdfg_tb__DOT__tick__41__n = 0;
    CData/*3:0*/ __Vtask_cdfg_tb__DOT__do_issue__42__op;
    __Vtask_cdfg_tb__DOT__do_issue__42__op = 0;
    CData/*2:0*/ __Vtask_cdfg_tb__DOT__do_issue__42__lat;
    __Vtask_cdfg_tb__DOT__do_issue__42__lat = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__42__a;
    __Vtask_cdfg_tb__DOT__do_issue__42__a = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__42__b;
    __Vtask_cdfg_tb__DOT__do_issue__42__b = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__42__c;
    __Vtask_cdfg_tb__DOT__do_issue__42__c = 0;
    CData/*4:0*/ __Vtask_cdfg_tb__DOT__do_issue__42__rdd;
    __Vtask_cdfg_tb__DOT__do_issue__42__rdd = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__do_issue__42__with_commit;
    __Vtask_cdfg_tb__DOT__do_issue__42__with_commit = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_issue__42__jid;
    __Vtask_cdfg_tb__DOT__do_issue__42__jid = 0;
    CData/*3:0*/ __Vtask_cdfg_tb__DOT__do_issue__43__op;
    __Vtask_cdfg_tb__DOT__do_issue__43__op = 0;
    CData/*2:0*/ __Vtask_cdfg_tb__DOT__do_issue__43__lat;
    __Vtask_cdfg_tb__DOT__do_issue__43__lat = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__43__a;
    __Vtask_cdfg_tb__DOT__do_issue__43__a = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__43__b;
    __Vtask_cdfg_tb__DOT__do_issue__43__b = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__43__c;
    __Vtask_cdfg_tb__DOT__do_issue__43__c = 0;
    CData/*4:0*/ __Vtask_cdfg_tb__DOT__do_issue__43__rdd;
    __Vtask_cdfg_tb__DOT__do_issue__43__rdd = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__do_issue__43__with_commit;
    __Vtask_cdfg_tb__DOT__do_issue__43__with_commit = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_issue__43__jid;
    __Vtask_cdfg_tb__DOT__do_issue__43__jid = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__clear_seen__44__jid;
    __Vtask_cdfg_tb__DOT__clear_seen__44__jid = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_kill__45__jid;
    __Vtask_cdfg_tb__DOT__do_kill__45__jid = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__expect_no_result__46__jid;
    __Vtask_cdfg_tb__DOT__expect_no_result__46__jid = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__expect_no_result__46__ncyc;
    __Vtask_cdfg_tb__DOT__expect_no_result__46__ncyc = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__47__n;
    __Vtask_cdfg_tb__DOT__tick__47__n = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__48__cond;
    __Vtask_cdfg_tb__DOT__check__48__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__48__msg;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__49__cond;
    __Vtask_cdfg_tb__DOT__check__49__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__49__msg;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__expect_result__50__expected;
    __Vtask_cdfg_tb__DOT__expect_result__50__expected = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__51__cond;
    __Vtask_cdfg_tb__DOT__check__51__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__51__msg;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__52__n;
    __Vtask_cdfg_tb__DOT__tick__52__n = 0;
    CData/*3:0*/ __Vtask_cdfg_tb__DOT__do_issue__53__op;
    __Vtask_cdfg_tb__DOT__do_issue__53__op = 0;
    CData/*2:0*/ __Vtask_cdfg_tb__DOT__do_issue__53__lat;
    __Vtask_cdfg_tb__DOT__do_issue__53__lat = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__53__a;
    __Vtask_cdfg_tb__DOT__do_issue__53__a = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__53__b;
    __Vtask_cdfg_tb__DOT__do_issue__53__b = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__53__c;
    __Vtask_cdfg_tb__DOT__do_issue__53__c = 0;
    CData/*4:0*/ __Vtask_cdfg_tb__DOT__do_issue__53__rdd;
    __Vtask_cdfg_tb__DOT__do_issue__53__rdd = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__do_issue__53__with_commit;
    __Vtask_cdfg_tb__DOT__do_issue__53__with_commit = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_issue__53__jid;
    __Vtask_cdfg_tb__DOT__do_issue__53__jid = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__54__n;
    __Vtask_cdfg_tb__DOT__tick__54__n = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__clear_seen__55__jid;
    __Vtask_cdfg_tb__DOT__clear_seen__55__jid = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_kill__56__jid;
    __Vtask_cdfg_tb__DOT__do_kill__56__jid = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__expect_no_result__57__jid;
    __Vtask_cdfg_tb__DOT__expect_no_result__57__jid = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__expect_no_result__57__ncyc;
    __Vtask_cdfg_tb__DOT__expect_no_result__57__ncyc = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__58__n;
    __Vtask_cdfg_tb__DOT__tick__58__n = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__59__cond;
    __Vtask_cdfg_tb__DOT__check__59__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__59__msg;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__60__n;
    __Vtask_cdfg_tb__DOT__tick__60__n = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__set_rdy__61__r;
    __Vtask_cdfg_tb__DOT__set_rdy__61__r = 0;
    CData/*3:0*/ __Vtask_cdfg_tb__DOT__do_issue__62__op;
    __Vtask_cdfg_tb__DOT__do_issue__62__op = 0;
    CData/*2:0*/ __Vtask_cdfg_tb__DOT__do_issue__62__lat;
    __Vtask_cdfg_tb__DOT__do_issue__62__lat = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__62__a;
    __Vtask_cdfg_tb__DOT__do_issue__62__a = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__62__b;
    __Vtask_cdfg_tb__DOT__do_issue__62__b = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__62__c;
    __Vtask_cdfg_tb__DOT__do_issue__62__c = 0;
    CData/*4:0*/ __Vtask_cdfg_tb__DOT__do_issue__62__rdd;
    __Vtask_cdfg_tb__DOT__do_issue__62__rdd = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__do_issue__62__with_commit;
    __Vtask_cdfg_tb__DOT__do_issue__62__with_commit = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_issue__62__jid;
    __Vtask_cdfg_tb__DOT__do_issue__62__jid = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__clear_seen__63__jid;
    __Vtask_cdfg_tb__DOT__clear_seen__63__jid = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_kill__64__jid;
    __Vtask_cdfg_tb__DOT__do_kill__64__jid = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__set_rdy__65__r;
    __Vtask_cdfg_tb__DOT__set_rdy__65__r = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__expect_no_result__66__jid;
    __Vtask_cdfg_tb__DOT__expect_no_result__66__jid = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__expect_no_result__66__ncyc;
    __Vtask_cdfg_tb__DOT__expect_no_result__66__ncyc = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__67__n;
    __Vtask_cdfg_tb__DOT__tick__67__n = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__68__cond;
    __Vtask_cdfg_tb__DOT__check__68__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__68__msg;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__69__n;
    __Vtask_cdfg_tb__DOT__tick__69__n = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__set_rdy__70__r;
    __Vtask_cdfg_tb__DOT__set_rdy__70__r = 0;
    CData/*3:0*/ __Vtask_cdfg_tb__DOT__do_issue__71__op;
    __Vtask_cdfg_tb__DOT__do_issue__71__op = 0;
    CData/*2:0*/ __Vtask_cdfg_tb__DOT__do_issue__71__lat;
    __Vtask_cdfg_tb__DOT__do_issue__71__lat = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__71__a;
    __Vtask_cdfg_tb__DOT__do_issue__71__a = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__71__b;
    __Vtask_cdfg_tb__DOT__do_issue__71__b = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__71__c;
    __Vtask_cdfg_tb__DOT__do_issue__71__c = 0;
    CData/*4:0*/ __Vtask_cdfg_tb__DOT__do_issue__71__rdd;
    __Vtask_cdfg_tb__DOT__do_issue__71__rdd = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__do_issue__71__with_commit;
    __Vtask_cdfg_tb__DOT__do_issue__71__with_commit = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_issue__71__jid;
    __Vtask_cdfg_tb__DOT__do_issue__71__jid = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__72__n;
    __Vtask_cdfg_tb__DOT__tick__72__n = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__clear_seen__73__jid;
    __Vtask_cdfg_tb__DOT__clear_seen__73__jid = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_kill__74__jid;
    __Vtask_cdfg_tb__DOT__do_kill__74__jid = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__expect_no_result__75__jid;
    __Vtask_cdfg_tb__DOT__expect_no_result__75__jid = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__expect_no_result__75__ncyc;
    __Vtask_cdfg_tb__DOT__expect_no_result__75__ncyc = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__76__n;
    __Vtask_cdfg_tb__DOT__tick__76__n = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__77__cond;
    __Vtask_cdfg_tb__DOT__check__77__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__77__msg;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__78__n;
    __Vtask_cdfg_tb__DOT__tick__78__n = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__set_rdy__79__r;
    __Vtask_cdfg_tb__DOT__set_rdy__79__r = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__clear_seen__80__jid;
    __Vtask_cdfg_tb__DOT__clear_seen__80__jid = 0;
    CData/*3:0*/ __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__op;
    __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__op = 0;
    CData/*2:0*/ __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__lat;
    __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__lat = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__a;
    __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__a = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__b;
    __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__b = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__c;
    __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__c = 0;
    CData/*4:0*/ __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__rdd;
    __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__rdd = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__jid;
    __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__jid = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__82__n;
    __Vtask_cdfg_tb__DOT__tick__82__n = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__83__cond;
    __Vtask_cdfg_tb__DOT__check__83__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__83__msg;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_commit__84__jid;
    __Vtask_cdfg_tb__DOT__do_commit__84__jid = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__expect_result__85__expected;
    __Vtask_cdfg_tb__DOT__expect_result__85__expected = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__86__cond;
    __Vtask_cdfg_tb__DOT__check__86__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__86__msg;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__87__n;
    __Vtask_cdfg_tb__DOT__tick__87__n = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__set_rdy__88__r;
    __Vtask_cdfg_tb__DOT__set_rdy__88__r = 0;
    IData/*31:0*/ __Vfunc_cdfg_tb__DOT__cdfg_ref__89__Vfuncout;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__89__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_cdfg_tb__DOT__cdfg_ref__89__a;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__89__a = 0;
    IData/*31:0*/ __Vfunc_cdfg_tb__DOT__cdfg_ref__89__b;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__89__b = 0;
    IData/*31:0*/ __Vfunc_cdfg_tb__DOT__cdfg_ref__89__c;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__89__c = 0;
    CData/*3:0*/ __Vtask_cdfg_tb__DOT__do_issue__90__op;
    __Vtask_cdfg_tb__DOT__do_issue__90__op = 0;
    CData/*2:0*/ __Vtask_cdfg_tb__DOT__do_issue__90__lat;
    __Vtask_cdfg_tb__DOT__do_issue__90__lat = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__90__a;
    __Vtask_cdfg_tb__DOT__do_issue__90__a = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__90__b;
    __Vtask_cdfg_tb__DOT__do_issue__90__b = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__90__c;
    __Vtask_cdfg_tb__DOT__do_issue__90__c = 0;
    CData/*4:0*/ __Vtask_cdfg_tb__DOT__do_issue__90__rdd;
    __Vtask_cdfg_tb__DOT__do_issue__90__rdd = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__do_issue__90__with_commit;
    __Vtask_cdfg_tb__DOT__do_issue__90__with_commit = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_issue__90__jid;
    __Vtask_cdfg_tb__DOT__do_issue__90__jid = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__expect_result__91__expected;
    __Vtask_cdfg_tb__DOT__expect_result__91__expected = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__92__cond;
    __Vtask_cdfg_tb__DOT__check__92__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__92__msg;
    CData/*3:0*/ __Vtask_cdfg_tb__DOT__do_issue__93__op;
    __Vtask_cdfg_tb__DOT__do_issue__93__op = 0;
    CData/*2:0*/ __Vtask_cdfg_tb__DOT__do_issue__93__lat;
    __Vtask_cdfg_tb__DOT__do_issue__93__lat = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__93__a;
    __Vtask_cdfg_tb__DOT__do_issue__93__a = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__93__b;
    __Vtask_cdfg_tb__DOT__do_issue__93__b = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__do_issue__93__c;
    __Vtask_cdfg_tb__DOT__do_issue__93__c = 0;
    CData/*4:0*/ __Vtask_cdfg_tb__DOT__do_issue__93__rdd;
    __Vtask_cdfg_tb__DOT__do_issue__93__rdd = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__do_issue__93__with_commit;
    __Vtask_cdfg_tb__DOT__do_issue__93__with_commit = 0;
    SData/*9:0*/ __Vtask_cdfg_tb__DOT__do_issue__93__jid;
    __Vtask_cdfg_tb__DOT__do_issue__93__jid = 0;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__expect_result__94__expected;
    __Vtask_cdfg_tb__DOT__expect_result__94__expected = 0;
    CData/*0:0*/ __Vtask_cdfg_tb__DOT__check__95__cond;
    __Vtask_cdfg_tb__DOT__check__95__cond = 0;
    std::string __Vtask_cdfg_tb__DOT__check__95__msg;
    IData/*31:0*/ __Vtask_cdfg_tb__DOT__tick__96__n;
    __Vtask_cdfg_tb__DOT__tick__96__n = 0;
    // Body
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__opcode = 0U;
    vlSelf->cdfg_tb__DOT__latency_sel = 0U;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = 0U;
    vlSelf->cdfg_tb__DOT__rd = 0U;
    vlSelf->cdfg_tb__DOT__registers[0U] = 0U;
    vlSelf->cdfg_tb__DOT__registers[1U] = 0U;
    vlSelf->cdfg_tb__DOT__registers[2U] = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit = 0U;
    vlSelf->cdfg_tb__DOT__result_ready = 1U;
    cdfg_tb__DOT__next_id = 0U;
    vlSelf->cdfg_tb__DOT__transfer_count = 0U;
    cdfg_tb__DOT__n_pass = 0U;
    cdfg_tb__DOT__n_fail = 0U;
    cdfg_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, cdfg_tb__DOT__unnamedblk1__DOT__i)) {
        vlSelf->cdfg_tb__DOT__seen[(0x3ffU & cdfg_tb__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelf->cdfg_tb__DOT__seen_data[(0x3ffU & cdfg_tb__DOT__unnamedblk1__DOT__i)] = 0U;
        cdfg_tb__DOT__exp_data[(0x3ffU & cdfg_tb__DOT__unnamedblk1__DOT__i)] = 0U;
        cdfg_tb__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                             + cdfg_tb__DOT__unnamedblk1__DOT__i);
    }
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       223);
    cdfg_tb__DOT__cur_test = std::string{"delay_functional"};
    cdfg_tb__DOT__unnamedblk2__DOT__a = 0x10000003U;
    __Vtask_cdfg_tb__DOT__clear_seen__0__jid = vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j;
    vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__0__jid] = 0U;
    cdfg_tb__DOT__exp_data[vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j] 
        = cdfg_tb__DOT__unnamedblk2__DOT__a;
    __Vtask_cdfg_tb__DOT__do_issue__1__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__1__rdd = 0xaU;
    __Vtask_cdfg_tb__DOT__do_issue__1__c = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__1__b = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__1__a = cdfg_tb__DOT__unnamedblk2__DOT__a;
    __Vtask_cdfg_tb__DOT__do_issue__1__lat = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__1__op = 0xbU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__1__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__1__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__1__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__1__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__1__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__1__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__1__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j = __Vtask_cdfg_tb__DOT__do_issue__1__jid;
    __Vtask_cdfg_tb__DOT__expect_result__2__expected 
        = cdfg_tb__DOT__unnamedblk2__DOT__a;
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid 
        = vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j;
    while ((1U & (~ vlSelf->cdfg_tb__DOT__seen[vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid]))) {
        co_await vlSelf->__VtrigSched_h1f6fda87__0.trigger(
                                                           "@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__2__jid)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           194);
    }
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       196);
    __Vtask_cdfg_tb__DOT__check__3__msg = VL_SFORMATF_NX("jid=%0# result=0x%0x expected=0x%0x",
                                                         10,
                                                         vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid,
                                                         32,
                                                         vlSelf->cdfg_tb__DOT__seen_data
                                                         [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid],
                                                         32,
                                                         __Vtask_cdfg_tb__DOT__expect_result__2__expected) ;
    __Vtask_cdfg_tb__DOT__check__3__cond = (vlSelf->cdfg_tb__DOT__seen_data
                                            [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid] 
                                            == __Vtask_cdfg_tb__DOT__expect_result__2__expected);
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__3__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__3__msg));
    }
    cdfg_tb__DOT__unnamedblk2__DOT__a = 0x1000000aU;
    __Vtask_cdfg_tb__DOT__clear_seen__0__jid = vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j;
    vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__0__jid] = 0U;
    cdfg_tb__DOT__exp_data[vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j] 
        = cdfg_tb__DOT__unnamedblk2__DOT__a;
    __Vtask_cdfg_tb__DOT__do_issue__1__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__1__rdd = 0xaU;
    __Vtask_cdfg_tb__DOT__do_issue__1__c = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__1__b = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__1__a = cdfg_tb__DOT__unnamedblk2__DOT__a;
    __Vtask_cdfg_tb__DOT__do_issue__1__lat = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__1__op = 0xbU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__1__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__1__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__1__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__1__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__1__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__1__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__1__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j = __Vtask_cdfg_tb__DOT__do_issue__1__jid;
    __Vtask_cdfg_tb__DOT__expect_result__2__expected 
        = cdfg_tb__DOT__unnamedblk2__DOT__a;
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid 
        = vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j;
    while ((1U & (~ vlSelf->cdfg_tb__DOT__seen[vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid]))) {
        co_await vlSelf->__VtrigSched_h1f6fda87__0.trigger(
                                                           "@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__2__jid)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           194);
    }
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       196);
    __Vtask_cdfg_tb__DOT__check__3__msg = VL_SFORMATF_NX("jid=%0# result=0x%0x expected=0x%0x",
                                                         10,
                                                         vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid,
                                                         32,
                                                         vlSelf->cdfg_tb__DOT__seen_data
                                                         [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid],
                                                         32,
                                                         __Vtask_cdfg_tb__DOT__expect_result__2__expected) ;
    __Vtask_cdfg_tb__DOT__check__3__cond = (vlSelf->cdfg_tb__DOT__seen_data
                                            [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid] 
                                            == __Vtask_cdfg_tb__DOT__expect_result__2__expected);
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__3__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__3__msg));
    }
    cdfg_tb__DOT__unnamedblk2__DOT__a = 0x10000011U;
    __Vtask_cdfg_tb__DOT__clear_seen__0__jid = vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j;
    vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__0__jid] = 0U;
    cdfg_tb__DOT__exp_data[vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j] 
        = cdfg_tb__DOT__unnamedblk2__DOT__a;
    __Vtask_cdfg_tb__DOT__do_issue__1__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__1__rdd = 0xaU;
    __Vtask_cdfg_tb__DOT__do_issue__1__c = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__1__b = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__1__a = cdfg_tb__DOT__unnamedblk2__DOT__a;
    __Vtask_cdfg_tb__DOT__do_issue__1__lat = 2U;
    __Vtask_cdfg_tb__DOT__do_issue__1__op = 0xbU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__1__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__1__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__1__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__1__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__1__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__1__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__1__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j = __Vtask_cdfg_tb__DOT__do_issue__1__jid;
    __Vtask_cdfg_tb__DOT__expect_result__2__expected 
        = cdfg_tb__DOT__unnamedblk2__DOT__a;
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid 
        = vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j;
    while ((1U & (~ vlSelf->cdfg_tb__DOT__seen[vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid]))) {
        co_await vlSelf->__VtrigSched_h1f6fda87__0.trigger(
                                                           "@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__2__jid)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           194);
    }
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       196);
    __Vtask_cdfg_tb__DOT__check__3__msg = VL_SFORMATF_NX("jid=%0# result=0x%0x expected=0x%0x",
                                                         10,
                                                         vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid,
                                                         32,
                                                         vlSelf->cdfg_tb__DOT__seen_data
                                                         [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid],
                                                         32,
                                                         __Vtask_cdfg_tb__DOT__expect_result__2__expected) ;
    __Vtask_cdfg_tb__DOT__check__3__cond = (vlSelf->cdfg_tb__DOT__seen_data
                                            [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid] 
                                            == __Vtask_cdfg_tb__DOT__expect_result__2__expected);
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__3__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__3__msg));
    }
    cdfg_tb__DOT__unnamedblk2__DOT__a = 0x10000018U;
    __Vtask_cdfg_tb__DOT__clear_seen__0__jid = vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j;
    vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__0__jid] = 0U;
    cdfg_tb__DOT__exp_data[vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j] 
        = cdfg_tb__DOT__unnamedblk2__DOT__a;
    __Vtask_cdfg_tb__DOT__do_issue__1__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__1__rdd = 0xaU;
    __Vtask_cdfg_tb__DOT__do_issue__1__c = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__1__b = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__1__a = cdfg_tb__DOT__unnamedblk2__DOT__a;
    __Vtask_cdfg_tb__DOT__do_issue__1__lat = 3U;
    __Vtask_cdfg_tb__DOT__do_issue__1__op = 0xbU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__1__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__1__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__1__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__1__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__1__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__1__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__1__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j = __Vtask_cdfg_tb__DOT__do_issue__1__jid;
    __Vtask_cdfg_tb__DOT__expect_result__2__expected 
        = cdfg_tb__DOT__unnamedblk2__DOT__a;
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid 
        = vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j;
    while ((1U & (~ vlSelf->cdfg_tb__DOT__seen[vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid]))) {
        co_await vlSelf->__VtrigSched_h1f6fda87__0.trigger(
                                                           "@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__2__jid)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           194);
    }
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       196);
    __Vtask_cdfg_tb__DOT__check__3__msg = VL_SFORMATF_NX("jid=%0# result=0x%0x expected=0x%0x",
                                                         10,
                                                         vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid,
                                                         32,
                                                         vlSelf->cdfg_tb__DOT__seen_data
                                                         [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid],
                                                         32,
                                                         __Vtask_cdfg_tb__DOT__expect_result__2__expected) ;
    __Vtask_cdfg_tb__DOT__check__3__cond = (vlSelf->cdfg_tb__DOT__seen_data
                                            [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid] 
                                            == __Vtask_cdfg_tb__DOT__expect_result__2__expected);
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__3__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__3__msg));
    }
    cdfg_tb__DOT__unnamedblk2__DOT__a = 0x1000001fU;
    __Vtask_cdfg_tb__DOT__clear_seen__0__jid = vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j;
    vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__0__jid] = 0U;
    cdfg_tb__DOT__exp_data[vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j] 
        = cdfg_tb__DOT__unnamedblk2__DOT__a;
    __Vtask_cdfg_tb__DOT__do_issue__1__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__1__rdd = 0xaU;
    __Vtask_cdfg_tb__DOT__do_issue__1__c = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__1__b = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__1__a = cdfg_tb__DOT__unnamedblk2__DOT__a;
    __Vtask_cdfg_tb__DOT__do_issue__1__lat = 4U;
    __Vtask_cdfg_tb__DOT__do_issue__1__op = 0xbU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__1__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__1__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__1__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__1__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__1__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__1__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__1__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__1__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j = __Vtask_cdfg_tb__DOT__do_issue__1__jid;
    __Vtask_cdfg_tb__DOT__expect_result__2__expected 
        = cdfg_tb__DOT__unnamedblk2__DOT__a;
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid 
        = vlSelf->cdfg_tb__DOT__unnamedblk2__DOT__j;
    while ((1U & (~ vlSelf->cdfg_tb__DOT__seen[vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid]))) {
        co_await vlSelf->__VtrigSched_h1f6fda87__0.trigger(
                                                           "@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__2__jid)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           194);
    }
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       196);
    __Vtask_cdfg_tb__DOT__check__3__msg = VL_SFORMATF_NX("jid=%0# result=0x%0x expected=0x%0x",
                                                         10,
                                                         vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid,
                                                         32,
                                                         vlSelf->cdfg_tb__DOT__seen_data
                                                         [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid],
                                                         32,
                                                         __Vtask_cdfg_tb__DOT__expect_result__2__expected) ;
    __Vtask_cdfg_tb__DOT__check__3__cond = (vlSelf->cdfg_tb__DOT__seen_data
                                            [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid] 
                                            == __Vtask_cdfg_tb__DOT__expect_result__2__expected);
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__3__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__3__msg));
    }
    cdfg_tb__DOT__cur_test = std::string{"cdfg_functional"};
    cdfg_tb__DOT__unnamedblk4__DOT__a = 3U;
    cdfg_tb__DOT__unnamedblk4__DOT__b = 7U;
    cdfg_tb__DOT__unnamedblk4__DOT__c = 2U;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__c = cdfg_tb__DOT__unnamedblk4__DOT__c;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__b = cdfg_tb__DOT__unnamedblk4__DOT__b;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__a = cdfg_tb__DOT__unnamedblk4__DOT__a;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__Vfuncout = (
                                                   ((__Vfunc_cdfg_tb__DOT__cdfg_ref__4__a 
                                                     * __Vfunc_cdfg_tb__DOT__cdfg_ref__4__b) 
                                                    + __Vfunc_cdfg_tb__DOT__cdfg_ref__4__c) 
                                                   ^ 
                                                   (__Vfunc_cdfg_tb__DOT__cdfg_ref__4__a 
                                                    + __Vfunc_cdfg_tb__DOT__cdfg_ref__4__c));
    cdfg_tb__DOT__unnamedblk4__DOT__exp = __Vfunc_cdfg_tb__DOT__cdfg_ref__4__Vfuncout;
    __Vtask_cdfg_tb__DOT__clear_seen__5__jid = vlSelf->cdfg_tb__DOT__unnamedblk4__DOT__j;
    vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__5__jid] = 0U;
    cdfg_tb__DOT__exp_data[vlSelf->cdfg_tb__DOT__unnamedblk4__DOT__j] 
        = cdfg_tb__DOT__unnamedblk4__DOT__exp;
    __Vtask_cdfg_tb__DOT__do_issue__6__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__6__rdd = 0xbU;
    __Vtask_cdfg_tb__DOT__do_issue__6__c = cdfg_tb__DOT__unnamedblk4__DOT__c;
    __Vtask_cdfg_tb__DOT__do_issue__6__b = cdfg_tb__DOT__unnamedblk4__DOT__b;
    __Vtask_cdfg_tb__DOT__do_issue__6__a = cdfg_tb__DOT__unnamedblk4__DOT__a;
    __Vtask_cdfg_tb__DOT__do_issue__6__lat = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__6__op = 0xcU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__6__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__6__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__6__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__6__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__6__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__6__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__6__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    vlSelf->cdfg_tb__DOT__unnamedblk4__DOT__j = __Vtask_cdfg_tb__DOT__do_issue__6__jid;
    __Vtask_cdfg_tb__DOT__expect_result__7__expected 
        = cdfg_tb__DOT__unnamedblk4__DOT__exp;
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid 
        = vlSelf->cdfg_tb__DOT__unnamedblk4__DOT__j;
    while ((1U & (~ vlSelf->cdfg_tb__DOT__seen[vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid]))) {
        co_await vlSelf->__VtrigSched_hf78e1896__0.trigger(
                                                           "@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__7__jid)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           194);
    }
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       196);
    __Vtask_cdfg_tb__DOT__check__8__msg = VL_SFORMATF_NX("jid=%0# result=0x%0x expected=0x%0x",
                                                         10,
                                                         vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid,
                                                         32,
                                                         vlSelf->cdfg_tb__DOT__seen_data
                                                         [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid],
                                                         32,
                                                         __Vtask_cdfg_tb__DOT__expect_result__7__expected) ;
    __Vtask_cdfg_tb__DOT__check__8__cond = (vlSelf->cdfg_tb__DOT__seen_data
                                            [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid] 
                                            == __Vtask_cdfg_tb__DOT__expect_result__7__expected);
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__8__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__8__msg));
    }
    cdfg_tb__DOT__unnamedblk4__DOT__a = 4U;
    cdfg_tb__DOT__unnamedblk4__DOT__b = 6U;
    cdfg_tb__DOT__unnamedblk4__DOT__c = 3U;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__c = cdfg_tb__DOT__unnamedblk4__DOT__c;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__b = cdfg_tb__DOT__unnamedblk4__DOT__b;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__a = cdfg_tb__DOT__unnamedblk4__DOT__a;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__Vfuncout = (
                                                   ((__Vfunc_cdfg_tb__DOT__cdfg_ref__4__a 
                                                     * __Vfunc_cdfg_tb__DOT__cdfg_ref__4__b) 
                                                    + __Vfunc_cdfg_tb__DOT__cdfg_ref__4__c) 
                                                   ^ 
                                                   (__Vfunc_cdfg_tb__DOT__cdfg_ref__4__a 
                                                    + __Vfunc_cdfg_tb__DOT__cdfg_ref__4__c));
    cdfg_tb__DOT__unnamedblk4__DOT__exp = __Vfunc_cdfg_tb__DOT__cdfg_ref__4__Vfuncout;
    __Vtask_cdfg_tb__DOT__clear_seen__5__jid = vlSelf->cdfg_tb__DOT__unnamedblk4__DOT__j;
    vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__5__jid] = 0U;
    cdfg_tb__DOT__exp_data[vlSelf->cdfg_tb__DOT__unnamedblk4__DOT__j] 
        = cdfg_tb__DOT__unnamedblk4__DOT__exp;
    __Vtask_cdfg_tb__DOT__do_issue__6__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__6__rdd = 0xbU;
    __Vtask_cdfg_tb__DOT__do_issue__6__c = cdfg_tb__DOT__unnamedblk4__DOT__c;
    __Vtask_cdfg_tb__DOT__do_issue__6__b = cdfg_tb__DOT__unnamedblk4__DOT__b;
    __Vtask_cdfg_tb__DOT__do_issue__6__a = cdfg_tb__DOT__unnamedblk4__DOT__a;
    __Vtask_cdfg_tb__DOT__do_issue__6__lat = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__6__op = 0xcU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__6__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__6__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__6__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__6__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__6__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__6__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__6__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    vlSelf->cdfg_tb__DOT__unnamedblk4__DOT__j = __Vtask_cdfg_tb__DOT__do_issue__6__jid;
    __Vtask_cdfg_tb__DOT__expect_result__7__expected 
        = cdfg_tb__DOT__unnamedblk4__DOT__exp;
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid 
        = vlSelf->cdfg_tb__DOT__unnamedblk4__DOT__j;
    while ((1U & (~ vlSelf->cdfg_tb__DOT__seen[vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid]))) {
        co_await vlSelf->__VtrigSched_hf78e1896__0.trigger(
                                                           "@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__7__jid)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           194);
    }
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       196);
    __Vtask_cdfg_tb__DOT__check__8__msg = VL_SFORMATF_NX("jid=%0# result=0x%0x expected=0x%0x",
                                                         10,
                                                         vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid,
                                                         32,
                                                         vlSelf->cdfg_tb__DOT__seen_data
                                                         [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid],
                                                         32,
                                                         __Vtask_cdfg_tb__DOT__expect_result__7__expected) ;
    __Vtask_cdfg_tb__DOT__check__8__cond = (vlSelf->cdfg_tb__DOT__seen_data
                                            [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid] 
                                            == __Vtask_cdfg_tb__DOT__expect_result__7__expected);
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__8__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__8__msg));
    }
    cdfg_tb__DOT__unnamedblk4__DOT__a = 5U;
    cdfg_tb__DOT__unnamedblk4__DOT__b = 5U;
    cdfg_tb__DOT__unnamedblk4__DOT__c = 4U;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__c = cdfg_tb__DOT__unnamedblk4__DOT__c;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__b = cdfg_tb__DOT__unnamedblk4__DOT__b;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__a = cdfg_tb__DOT__unnamedblk4__DOT__a;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__Vfuncout = (
                                                   ((__Vfunc_cdfg_tb__DOT__cdfg_ref__4__a 
                                                     * __Vfunc_cdfg_tb__DOT__cdfg_ref__4__b) 
                                                    + __Vfunc_cdfg_tb__DOT__cdfg_ref__4__c) 
                                                   ^ 
                                                   (__Vfunc_cdfg_tb__DOT__cdfg_ref__4__a 
                                                    + __Vfunc_cdfg_tb__DOT__cdfg_ref__4__c));
    cdfg_tb__DOT__unnamedblk4__DOT__exp = __Vfunc_cdfg_tb__DOT__cdfg_ref__4__Vfuncout;
    __Vtask_cdfg_tb__DOT__clear_seen__5__jid = vlSelf->cdfg_tb__DOT__unnamedblk4__DOT__j;
    vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__5__jid] = 0U;
    cdfg_tb__DOT__exp_data[vlSelf->cdfg_tb__DOT__unnamedblk4__DOT__j] 
        = cdfg_tb__DOT__unnamedblk4__DOT__exp;
    __Vtask_cdfg_tb__DOT__do_issue__6__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__6__rdd = 0xbU;
    __Vtask_cdfg_tb__DOT__do_issue__6__c = cdfg_tb__DOT__unnamedblk4__DOT__c;
    __Vtask_cdfg_tb__DOT__do_issue__6__b = cdfg_tb__DOT__unnamedblk4__DOT__b;
    __Vtask_cdfg_tb__DOT__do_issue__6__a = cdfg_tb__DOT__unnamedblk4__DOT__a;
    __Vtask_cdfg_tb__DOT__do_issue__6__lat = 2U;
    __Vtask_cdfg_tb__DOT__do_issue__6__op = 0xcU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__6__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__6__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__6__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__6__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__6__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__6__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__6__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    vlSelf->cdfg_tb__DOT__unnamedblk4__DOT__j = __Vtask_cdfg_tb__DOT__do_issue__6__jid;
    __Vtask_cdfg_tb__DOT__expect_result__7__expected 
        = cdfg_tb__DOT__unnamedblk4__DOT__exp;
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid 
        = vlSelf->cdfg_tb__DOT__unnamedblk4__DOT__j;
    while ((1U & (~ vlSelf->cdfg_tb__DOT__seen[vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid]))) {
        co_await vlSelf->__VtrigSched_hf78e1896__0.trigger(
                                                           "@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__7__jid)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           194);
    }
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       196);
    __Vtask_cdfg_tb__DOT__check__8__msg = VL_SFORMATF_NX("jid=%0# result=0x%0x expected=0x%0x",
                                                         10,
                                                         vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid,
                                                         32,
                                                         vlSelf->cdfg_tb__DOT__seen_data
                                                         [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid],
                                                         32,
                                                         __Vtask_cdfg_tb__DOT__expect_result__7__expected) ;
    __Vtask_cdfg_tb__DOT__check__8__cond = (vlSelf->cdfg_tb__DOT__seen_data
                                            [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid] 
                                            == __Vtask_cdfg_tb__DOT__expect_result__7__expected);
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__8__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__8__msg));
    }
    cdfg_tb__DOT__unnamedblk4__DOT__a = 6U;
    cdfg_tb__DOT__unnamedblk4__DOT__b = 4U;
    cdfg_tb__DOT__unnamedblk4__DOT__c = 5U;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__c = cdfg_tb__DOT__unnamedblk4__DOT__c;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__b = cdfg_tb__DOT__unnamedblk4__DOT__b;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__a = cdfg_tb__DOT__unnamedblk4__DOT__a;
    __Vfunc_cdfg_tb__DOT__cdfg_ref__4__Vfuncout = (
                                                   ((__Vfunc_cdfg_tb__DOT__cdfg_ref__4__a 
                                                     * __Vfunc_cdfg_tb__DOT__cdfg_ref__4__b) 
                                                    + __Vfunc_cdfg_tb__DOT__cdfg_ref__4__c) 
                                                   ^ 
                                                   (__Vfunc_cdfg_tb__DOT__cdfg_ref__4__a 
                                                    + __Vfunc_cdfg_tb__DOT__cdfg_ref__4__c));
    cdfg_tb__DOT__unnamedblk4__DOT__exp = __Vfunc_cdfg_tb__DOT__cdfg_ref__4__Vfuncout;
    __Vtask_cdfg_tb__DOT__clear_seen__5__jid = vlSelf->cdfg_tb__DOT__unnamedblk4__DOT__j;
    vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__5__jid] = 0U;
    cdfg_tb__DOT__exp_data[vlSelf->cdfg_tb__DOT__unnamedblk4__DOT__j] 
        = cdfg_tb__DOT__unnamedblk4__DOT__exp;
    __Vtask_cdfg_tb__DOT__do_issue__6__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__6__rdd = 0xbU;
    __Vtask_cdfg_tb__DOT__do_issue__6__c = cdfg_tb__DOT__unnamedblk4__DOT__c;
    __Vtask_cdfg_tb__DOT__do_issue__6__b = cdfg_tb__DOT__unnamedblk4__DOT__b;
    __Vtask_cdfg_tb__DOT__do_issue__6__a = cdfg_tb__DOT__unnamedblk4__DOT__a;
    __Vtask_cdfg_tb__DOT__do_issue__6__lat = 3U;
    __Vtask_cdfg_tb__DOT__do_issue__6__op = 0xcU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__6__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__6__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__6__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__6__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__6__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__6__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__6__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__6__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    vlSelf->cdfg_tb__DOT__unnamedblk4__DOT__j = __Vtask_cdfg_tb__DOT__do_issue__6__jid;
    __Vtask_cdfg_tb__DOT__expect_result__7__expected 
        = cdfg_tb__DOT__unnamedblk4__DOT__exp;
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid 
        = vlSelf->cdfg_tb__DOT__unnamedblk4__DOT__j;
    while ((1U & (~ vlSelf->cdfg_tb__DOT__seen[vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid]))) {
        co_await vlSelf->__VtrigSched_hf78e1896__0.trigger(
                                                           "@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__7__jid)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           194);
    }
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       196);
    __Vtask_cdfg_tb__DOT__check__8__msg = VL_SFORMATF_NX("jid=%0# result=0x%0x expected=0x%0x",
                                                         10,
                                                         vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid,
                                                         32,
                                                         vlSelf->cdfg_tb__DOT__seen_data
                                                         [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid],
                                                         32,
                                                         __Vtask_cdfg_tb__DOT__expect_result__7__expected) ;
    __Vtask_cdfg_tb__DOT__check__8__cond = (vlSelf->cdfg_tb__DOT__seen_data
                                            [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid] 
                                            == __Vtask_cdfg_tb__DOT__expect_result__7__expected);
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__8__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__8__msg));
    }
    cdfg_tb__DOT__cur_test = std::string{"queue_depth"};
    __Vtask_cdfg_tb__DOT__tick__9__n = 5U;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__9__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    cdfg_tb__DOT__unnamedblk6__DOT__a0 = 0xaaaaU;
    cdfg_tb__DOT__unnamedblk6__DOT__a1 = 0xbbbbU;
    __Vtask_cdfg_tb__DOT__clear_seen__10__jid = vlSelf->cdfg_tb__DOT__unnamedblk6__DOT__j0;
    vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__10__jid] = 0U;
    __Vtask_cdfg_tb__DOT__clear_seen__11__jid = vlSelf->cdfg_tb__DOT__unnamedblk6__DOT__j1;
    vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__11__jid] = 0U;
    cdfg_tb__DOT__exp_data[vlSelf->cdfg_tb__DOT__unnamedblk6__DOT__j0] 
        = cdfg_tb__DOT__unnamedblk6__DOT__a0;
    cdfg_tb__DOT__exp_data[vlSelf->cdfg_tb__DOT__unnamedblk6__DOT__j1] 
        = cdfg_tb__DOT__unnamedblk6__DOT__a1;
    __Vtask_cdfg_tb__DOT__do_issue__12__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__12__rdd = 0xaU;
    __Vtask_cdfg_tb__DOT__do_issue__12__c = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__12__b = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__12__a = cdfg_tb__DOT__unnamedblk6__DOT__a0;
    __Vtask_cdfg_tb__DOT__do_issue__12__lat = 3U;
    __Vtask_cdfg_tb__DOT__do_issue__12__op = 0xbU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__12__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__12__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__12__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__12__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__12__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__12__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__12__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__12__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__12__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__12__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__12__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__12__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    vlSelf->cdfg_tb__DOT__unnamedblk6__DOT__j0 = __Vtask_cdfg_tb__DOT__do_issue__12__jid;
    __Vtask_cdfg_tb__DOT__do_issue__13__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__13__rdd = 0xcU;
    __Vtask_cdfg_tb__DOT__do_issue__13__c = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__13__b = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__13__a = cdfg_tb__DOT__unnamedblk6__DOT__a1;
    __Vtask_cdfg_tb__DOT__do_issue__13__lat = 3U;
    __Vtask_cdfg_tb__DOT__do_issue__13__op = 0xbU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__13__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__13__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__13__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__13__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__13__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__13__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__13__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__13__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__13__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__13__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__13__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__13__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    vlSelf->cdfg_tb__DOT__unnamedblk6__DOT__j1 = __Vtask_cdfg_tb__DOT__do_issue__13__jid;
    __Vtask_cdfg_tb__DOT__expect_result__14__expected 
        = cdfg_tb__DOT__unnamedblk6__DOT__a0;
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__14__jid 
        = vlSelf->cdfg_tb__DOT__unnamedblk6__DOT__j0;
    while ((1U & (~ vlSelf->cdfg_tb__DOT__seen[vlSelf->__Vtask_cdfg_tb__DOT__expect_result__14__jid]))) {
        co_await vlSelf->__VtrigSched_hd1a7fb58__0.trigger(
                                                           "@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__14__jid)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           194);
    }
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       196);
    __Vtask_cdfg_tb__DOT__check__15__msg = VL_SFORMATF_NX("jid=%0# result=0x%0x expected=0x%0x",
                                                          10,
                                                          vlSelf->__Vtask_cdfg_tb__DOT__expect_result__14__jid,
                                                          32,
                                                          vlSelf->cdfg_tb__DOT__seen_data
                                                          [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__14__jid],
                                                          32,
                                                          __Vtask_cdfg_tb__DOT__expect_result__14__expected) ;
    __Vtask_cdfg_tb__DOT__check__15__cond = (vlSelf->cdfg_tb__DOT__seen_data
                                             [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__14__jid] 
                                             == __Vtask_cdfg_tb__DOT__expect_result__14__expected);
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__15__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__15__msg));
    }
    __Vtask_cdfg_tb__DOT__expect_result__16__expected 
        = cdfg_tb__DOT__unnamedblk6__DOT__a1;
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__16__jid 
        = vlSelf->cdfg_tb__DOT__unnamedblk6__DOT__j1;
    while ((1U & (~ vlSelf->cdfg_tb__DOT__seen[vlSelf->__Vtask_cdfg_tb__DOT__expect_result__16__jid]))) {
        co_await vlSelf->__VtrigSched_hba702124__0.trigger(
                                                           "@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__16__jid)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           194);
    }
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       196);
    __Vtask_cdfg_tb__DOT__check__17__msg = VL_SFORMATF_NX("jid=%0# result=0x%0x expected=0x%0x",
                                                          10,
                                                          vlSelf->__Vtask_cdfg_tb__DOT__expect_result__16__jid,
                                                          32,
                                                          vlSelf->cdfg_tb__DOT__seen_data
                                                          [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__16__jid],
                                                          32,
                                                          __Vtask_cdfg_tb__DOT__expect_result__16__expected) ;
    __Vtask_cdfg_tb__DOT__check__17__cond = (vlSelf->cdfg_tb__DOT__seen_data
                                             [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__16__jid] 
                                             == __Vtask_cdfg_tb__DOT__expect_result__16__expected);
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__17__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__17__msg));
    }
    __Vtask_cdfg_tb__DOT__check__18__msg = std::string{"id monotonicity"};
    __Vtask_cdfg_tb__DOT__check__18__cond = ((IData)(vlSelf->cdfg_tb__DOT__unnamedblk6__DOT__j1) 
                                             > (IData)(vlSelf->cdfg_tb__DOT__unnamedblk6__DOT__j0));
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__18__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__18__msg));
    }
    cdfg_tb__DOT__cur_test = std::string{"queue_full"};
    __Vtask_cdfg_tb__DOT__tick__19__n = 5U;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__19__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    __Vtask_cdfg_tb__DOT__do_issue__20__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__20__rdd = 0xaU;
    __Vtask_cdfg_tb__DOT__do_issue__20__c = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__20__b = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__20__a = 0x1111U;
    __Vtask_cdfg_tb__DOT__do_issue__20__lat = 4U;
    __Vtask_cdfg_tb__DOT__do_issue__20__op = 0xbU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__20__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__20__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__20__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__20__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__20__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__20__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__20__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__20__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__20__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__20__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__20__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__20__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    cdfg_tb__DOT__unnamedblk7__DOT__j0 = __Vtask_cdfg_tb__DOT__do_issue__20__jid;
    __Vtask_cdfg_tb__DOT__do_issue__21__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__21__rdd = 0xbU;
    __Vtask_cdfg_tb__DOT__do_issue__21__c = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__21__b = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__21__a = 0x2222U;
    __Vtask_cdfg_tb__DOT__do_issue__21__lat = 4U;
    __Vtask_cdfg_tb__DOT__do_issue__21__op = 0xbU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__21__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__21__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__21__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__21__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__21__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__21__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__21__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__21__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__21__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__21__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__21__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__21__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    cdfg_tb__DOT__unnamedblk7__DOT__j1 = __Vtask_cdfg_tb__DOT__do_issue__21__jid;
    __Vtask_cdfg_tb__DOT__do_issue__22__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__22__rdd = 0xcU;
    __Vtask_cdfg_tb__DOT__do_issue__22__c = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__22__b = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__22__a = 0x3333U;
    __Vtask_cdfg_tb__DOT__do_issue__22__lat = 4U;
    __Vtask_cdfg_tb__DOT__do_issue__22__op = 0xbU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__22__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__22__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__22__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__22__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__22__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__22__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__22__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__22__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__22__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__22__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__22__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__22__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    cdfg_tb__DOT__unnamedblk7__DOT__j2 = __Vtask_cdfg_tb__DOT__do_issue__22__jid;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       278);
    __Vtask_cdfg_tb__DOT__check__23__msg = std::string{"queue full (engine busy + 2 queued)"};
    __Vtask_cdfg_tb__DOT__check__23__cond = (1U & (
                                                   vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U] 
                                                   >> 0x19U));
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__23__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__23__msg));
    }
    cdfg_tb__DOT__unnamedblk7__DOT__j3 = cdfg_tb__DOT__next_id;
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = 0xbU;
    vlSelf->cdfg_tb__DOT__latency_sel = 4U;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = cdfg_tb__DOT__unnamedblk7__DOT__j3;
    vlSelf->cdfg_tb__DOT__rd = 0xdU;
    vlSelf->cdfg_tb__DOT__registers[0U] = 0x4444U;
    vlSelf->cdfg_tb__DOT__registers[1U] = 0U;
    vlSelf->cdfg_tb__DOT__registers[2U] = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 1U;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(cdfg_tb__DOT__unnamedblk7__DOT__j3) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       285);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       286);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    __Vtask_cdfg_tb__DOT__tick__24__n = 0x3cU;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__24__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    __Vtask_cdfg_tb__DOT__check__25__msg = std::string{"three queued jobs drained"};
    __Vtask_cdfg_tb__DOT__check__25__cond = ((vlSelf->cdfg_tb__DOT__seen
                                              [cdfg_tb__DOT__unnamedblk7__DOT__j0] 
                                              & vlSelf->cdfg_tb__DOT__seen
                                              [cdfg_tb__DOT__unnamedblk7__DOT__j1]) 
                                             & vlSelf->cdfg_tb__DOT__seen
                                             [cdfg_tb__DOT__unnamedblk7__DOT__j2]);
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__25__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__25__msg));
    }
    __Vtask_cdfg_tb__DOT__check__26__msg = std::string{"fourth offer not accepted while full"};
    __Vtask_cdfg_tb__DOT__check__26__cond = (1U & (~ 
                                                   vlSelf->cdfg_tb__DOT__seen
                                                   [cdfg_tb__DOT__unnamedblk7__DOT__j3]));
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__26__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__26__msg));
    }
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       291);
    __Vtask_cdfg_tb__DOT__check__27__msg = std::string{"queue_free recovers after drain"};
    __Vtask_cdfg_tb__DOT__check__27__cond = (1U & (~ 
                                                   (vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U] 
                                                    >> 0x19U)));
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__27__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__27__msg));
    }
    cdfg_tb__DOT__cur_test = std::string{"result_backpressure"};
    vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths[0U] = 1U;
    vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths[1U] = 2U;
    vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths[2U] = 4U;
    vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths[3U] = 8U;
    __Vtask_cdfg_tb__DOT__tick__28__n = 5U;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__28__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    __Vtask_cdfg_tb__DOT__set_rdy__29__r = 1U;
    vlSelf->cdfg_tb__DOT__result_ready = __Vtask_cdfg_tb__DOT__set_rdy__29__r;
    __Vtask_cdfg_tb__DOT__clear_seen__30__jid = vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__j;
    vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__30__jid] = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__31__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__31__rdd = 9U;
    __Vtask_cdfg_tb__DOT__do_issue__31__c = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__31__b = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__31__a = 0xcafeU;
    __Vtask_cdfg_tb__DOT__do_issue__31__lat = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__31__op = 0xbU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__31__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__31__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__31__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__31__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__31__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__31__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__31__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__31__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__31__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__31__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__31__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__31__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__j = __Vtask_cdfg_tb__DOT__do_issue__31__jid;
    while ((1U & (~ (IData)(vlSelf->cdfg_tb__DOT__result_valid)))) {
        co_await vlSelf->__VtrigSched_h17bdab3d__0.trigger(
                                                           "@([changed] cdfg_tb.result_valid)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           304);
    }
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       305);
    cdfg_tb__DOT__unnamedblk8__DOT__d0 = (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q);
    __Vtask_cdfg_tb__DOT__set_rdy__32__r = 0U;
    vlSelf->cdfg_tb__DOT__result_ready = __Vtask_cdfg_tb__DOT__set_rdy__32__r;
    cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k, 
                      vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                      [0U])) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           310);
        __Vtask_cdfg_tb__DOT__check__33__msg = VL_SFORMATF_NX("result_valid held (hold %0d)",
                                                              32,
                                                              vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                                                              [0U]) ;
        __Vtask_cdfg_tb__DOT__check__33__cond = vlSelf->cdfg_tb__DOT__result_valid;
        if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__33__cond)) {
            cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
        } else {
            cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
            VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,
                      &(cdfg_tb__DOT__cur_test),-1,
                      &(__Vtask_cdfg_tb__DOT__check__33__msg));
        }
        __Vtask_cdfg_tb__DOT__check__34__msg = VL_SFORMATF_NX("result_data stable (hold %0d)",
                                                              32,
                                                              vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                                                              [0U]) ;
        __Vtask_cdfg_tb__DOT__check__34__cond = ((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q) 
                                                 == cdfg_tb__DOT__unnamedblk8__DOT__d0);
        if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__34__cond)) {
            cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
        } else {
            cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
            VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,
                      &(cdfg_tb__DOT__cur_test),-1,
                      &(__Vtask_cdfg_tb__DOT__check__34__msg));
        }
        cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k 
            = ((IData)(1U) + cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k);
    }
    cdfg_tb__DOT__unnamedblk8__DOT__tc0 = vlSelf->cdfg_tb__DOT__transfer_count;
    __Vtask_cdfg_tb__DOT__set_rdy__35__r = 1U;
    vlSelf->cdfg_tb__DOT__result_ready = __Vtask_cdfg_tb__DOT__set_rdy__35__r;
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       316);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       317);
    __Vtask_cdfg_tb__DOT__check__36__msg = VL_SFORMATF_NX("exactly one transfer on release (hold %0d)",
                                                          32,
                                                          vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                                                          [0U]) ;
    __Vtask_cdfg_tb__DOT__check__36__cond = (vlSelf->cdfg_tb__DOT__transfer_count 
                                             == ((IData)(1U) 
                                                 + cdfg_tb__DOT__unnamedblk8__DOT__tc0));
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__36__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__36__msg));
    }
    __Vtask_cdfg_tb__DOT__check__37__msg = std::string{"job result recorded after release"};
    __Vtask_cdfg_tb__DOT__check__37__cond = vlSelf->cdfg_tb__DOT__seen
        [vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__j];
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__37__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__37__msg));
    }
    if ((8U != vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
         [0U])) {
        __Vtask_cdfg_tb__DOT__clear_seen__38__jid = vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__j;
        vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__38__jid] = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__39__with_commit = 1U;
        __Vtask_cdfg_tb__DOT__do_issue__39__rdd = 9U;
        __Vtask_cdfg_tb__DOT__do_issue__39__c = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__39__b = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__39__a = ((IData)(0xbeefU) 
                                                 + 
                                                 vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                                                 [0U]);
        __Vtask_cdfg_tb__DOT__do_issue__39__lat = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__39__op = 0xbU;
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           124);
        while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
            co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                               "@(negedge clk)", 
                                                               "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                               125);
        }
        __Vtask_cdfg_tb__DOT__do_issue__39__jid = cdfg_tb__DOT__next_id;
        cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                           + (IData)(cdfg_tb__DOT__next_id)));
        vlSelf->cdfg_tb__DOT__issue_valid = 1U;
        vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__39__op;
        vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__39__lat;
        vlSelf->cdfg_tb__DOT__hartid = 0U;
        vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__39__jid;
        vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__39__rdd;
        vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__39__a;
        vlSelf->cdfg_tb__DOT__registers[1U] = (IData)(
                                                      (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__c)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__b))));
        vlSelf->cdfg_tb__DOT__registers[2U] = (IData)(
                                                      ((((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__c)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__b))) 
                                                       >> 0x20U));
        vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__39__with_commit;
        vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__jid) 
                                        << 1U);
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           138);
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           139);
        vlSelf->cdfg_tb__DOT__issue_valid = 0U;
        vlSelf->cdfg_tb__DOT__commit_valid = 0U;
        vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__j = __Vtask_cdfg_tb__DOT__do_issue__39__jid;
        while ((1U & (~ (IData)(vlSelf->cdfg_tb__DOT__result_valid)))) {
            co_await vlSelf->__VtrigSched_h17bdab3d__0.trigger(
                                                               "@([changed] cdfg_tb.result_valid)", 
                                                               "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                               323);
        }
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           324);
        cdfg_tb__DOT__unnamedblk8__DOT__d0 = (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q);
    }
    __Vtask_cdfg_tb__DOT__set_rdy__32__r = 0U;
    vlSelf->cdfg_tb__DOT__result_ready = __Vtask_cdfg_tb__DOT__set_rdy__32__r;
    cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k, 
                      vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                      [1U])) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           310);
        __Vtask_cdfg_tb__DOT__check__33__msg = VL_SFORMATF_NX("result_valid held (hold %0d)",
                                                              32,
                                                              vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                                                              [1U]) ;
        __Vtask_cdfg_tb__DOT__check__33__cond = vlSelf->cdfg_tb__DOT__result_valid;
        if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__33__cond)) {
            cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
        } else {
            cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
            VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,
                      &(cdfg_tb__DOT__cur_test),-1,
                      &(__Vtask_cdfg_tb__DOT__check__33__msg));
        }
        __Vtask_cdfg_tb__DOT__check__34__msg = VL_SFORMATF_NX("result_data stable (hold %0d)",
                                                              32,
                                                              vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                                                              [1U]) ;
        __Vtask_cdfg_tb__DOT__check__34__cond = ((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q) 
                                                 == cdfg_tb__DOT__unnamedblk8__DOT__d0);
        if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__34__cond)) {
            cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
        } else {
            cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
            VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,
                      &(cdfg_tb__DOT__cur_test),-1,
                      &(__Vtask_cdfg_tb__DOT__check__34__msg));
        }
        cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k 
            = ((IData)(1U) + cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k);
    }
    cdfg_tb__DOT__unnamedblk8__DOT__tc0 = vlSelf->cdfg_tb__DOT__transfer_count;
    __Vtask_cdfg_tb__DOT__set_rdy__35__r = 1U;
    vlSelf->cdfg_tb__DOT__result_ready = __Vtask_cdfg_tb__DOT__set_rdy__35__r;
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       316);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       317);
    __Vtask_cdfg_tb__DOT__check__36__msg = VL_SFORMATF_NX("exactly one transfer on release (hold %0d)",
                                                          32,
                                                          vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                                                          [1U]) ;
    __Vtask_cdfg_tb__DOT__check__36__cond = (vlSelf->cdfg_tb__DOT__transfer_count 
                                             == ((IData)(1U) 
                                                 + cdfg_tb__DOT__unnamedblk8__DOT__tc0));
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__36__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__36__msg));
    }
    __Vtask_cdfg_tb__DOT__check__37__msg = std::string{"job result recorded after release"};
    __Vtask_cdfg_tb__DOT__check__37__cond = vlSelf->cdfg_tb__DOT__seen
        [vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__j];
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__37__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__37__msg));
    }
    if ((8U != vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
         [1U])) {
        __Vtask_cdfg_tb__DOT__clear_seen__38__jid = vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__j;
        vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__38__jid] = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__39__with_commit = 1U;
        __Vtask_cdfg_tb__DOT__do_issue__39__rdd = 9U;
        __Vtask_cdfg_tb__DOT__do_issue__39__c = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__39__b = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__39__a = ((IData)(0xbeefU) 
                                                 + 
                                                 vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                                                 [1U]);
        __Vtask_cdfg_tb__DOT__do_issue__39__lat = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__39__op = 0xbU;
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           124);
        while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
            co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                               "@(negedge clk)", 
                                                               "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                               125);
        }
        __Vtask_cdfg_tb__DOT__do_issue__39__jid = cdfg_tb__DOT__next_id;
        cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                           + (IData)(cdfg_tb__DOT__next_id)));
        vlSelf->cdfg_tb__DOT__issue_valid = 1U;
        vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__39__op;
        vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__39__lat;
        vlSelf->cdfg_tb__DOT__hartid = 0U;
        vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__39__jid;
        vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__39__rdd;
        vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__39__a;
        vlSelf->cdfg_tb__DOT__registers[1U] = (IData)(
                                                      (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__c)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__b))));
        vlSelf->cdfg_tb__DOT__registers[2U] = (IData)(
                                                      ((((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__c)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__b))) 
                                                       >> 0x20U));
        vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__39__with_commit;
        vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__jid) 
                                        << 1U);
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           138);
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           139);
        vlSelf->cdfg_tb__DOT__issue_valid = 0U;
        vlSelf->cdfg_tb__DOT__commit_valid = 0U;
        vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__j = __Vtask_cdfg_tb__DOT__do_issue__39__jid;
        while ((1U & (~ (IData)(vlSelf->cdfg_tb__DOT__result_valid)))) {
            co_await vlSelf->__VtrigSched_h17bdab3d__0.trigger(
                                                               "@([changed] cdfg_tb.result_valid)", 
                                                               "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                               323);
        }
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           324);
        cdfg_tb__DOT__unnamedblk8__DOT__d0 = (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q);
    }
    __Vtask_cdfg_tb__DOT__set_rdy__32__r = 0U;
    vlSelf->cdfg_tb__DOT__result_ready = __Vtask_cdfg_tb__DOT__set_rdy__32__r;
    cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k, 
                      vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                      [2U])) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           310);
        __Vtask_cdfg_tb__DOT__check__33__msg = VL_SFORMATF_NX("result_valid held (hold %0d)",
                                                              32,
                                                              vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                                                              [2U]) ;
        __Vtask_cdfg_tb__DOT__check__33__cond = vlSelf->cdfg_tb__DOT__result_valid;
        if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__33__cond)) {
            cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
        } else {
            cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
            VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,
                      &(cdfg_tb__DOT__cur_test),-1,
                      &(__Vtask_cdfg_tb__DOT__check__33__msg));
        }
        __Vtask_cdfg_tb__DOT__check__34__msg = VL_SFORMATF_NX("result_data stable (hold %0d)",
                                                              32,
                                                              vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                                                              [2U]) ;
        __Vtask_cdfg_tb__DOT__check__34__cond = ((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q) 
                                                 == cdfg_tb__DOT__unnamedblk8__DOT__d0);
        if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__34__cond)) {
            cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
        } else {
            cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
            VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,
                      &(cdfg_tb__DOT__cur_test),-1,
                      &(__Vtask_cdfg_tb__DOT__check__34__msg));
        }
        cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k 
            = ((IData)(1U) + cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k);
    }
    cdfg_tb__DOT__unnamedblk8__DOT__tc0 = vlSelf->cdfg_tb__DOT__transfer_count;
    __Vtask_cdfg_tb__DOT__set_rdy__35__r = 1U;
    vlSelf->cdfg_tb__DOT__result_ready = __Vtask_cdfg_tb__DOT__set_rdy__35__r;
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       316);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       317);
    __Vtask_cdfg_tb__DOT__check__36__msg = VL_SFORMATF_NX("exactly one transfer on release (hold %0d)",
                                                          32,
                                                          vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                                                          [2U]) ;
    __Vtask_cdfg_tb__DOT__check__36__cond = (vlSelf->cdfg_tb__DOT__transfer_count 
                                             == ((IData)(1U) 
                                                 + cdfg_tb__DOT__unnamedblk8__DOT__tc0));
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__36__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__36__msg));
    }
    __Vtask_cdfg_tb__DOT__check__37__msg = std::string{"job result recorded after release"};
    __Vtask_cdfg_tb__DOT__check__37__cond = vlSelf->cdfg_tb__DOT__seen
        [vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__j];
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__37__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__37__msg));
    }
    if ((8U != vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
         [2U])) {
        __Vtask_cdfg_tb__DOT__clear_seen__38__jid = vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__j;
        vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__38__jid] = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__39__with_commit = 1U;
        __Vtask_cdfg_tb__DOT__do_issue__39__rdd = 9U;
        __Vtask_cdfg_tb__DOT__do_issue__39__c = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__39__b = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__39__a = ((IData)(0xbeefU) 
                                                 + 
                                                 vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                                                 [2U]);
        __Vtask_cdfg_tb__DOT__do_issue__39__lat = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__39__op = 0xbU;
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           124);
        while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
            co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                               "@(negedge clk)", 
                                                               "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                               125);
        }
        __Vtask_cdfg_tb__DOT__do_issue__39__jid = cdfg_tb__DOT__next_id;
        cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                           + (IData)(cdfg_tb__DOT__next_id)));
        vlSelf->cdfg_tb__DOT__issue_valid = 1U;
        vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__39__op;
        vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__39__lat;
        vlSelf->cdfg_tb__DOT__hartid = 0U;
        vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__39__jid;
        vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__39__rdd;
        vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__39__a;
        vlSelf->cdfg_tb__DOT__registers[1U] = (IData)(
                                                      (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__c)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__b))));
        vlSelf->cdfg_tb__DOT__registers[2U] = (IData)(
                                                      ((((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__c)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__b))) 
                                                       >> 0x20U));
        vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__39__with_commit;
        vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__jid) 
                                        << 1U);
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           138);
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           139);
        vlSelf->cdfg_tb__DOT__issue_valid = 0U;
        vlSelf->cdfg_tb__DOT__commit_valid = 0U;
        vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__j = __Vtask_cdfg_tb__DOT__do_issue__39__jid;
        while ((1U & (~ (IData)(vlSelf->cdfg_tb__DOT__result_valid)))) {
            co_await vlSelf->__VtrigSched_h17bdab3d__0.trigger(
                                                               "@([changed] cdfg_tb.result_valid)", 
                                                               "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                               323);
        }
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           324);
        cdfg_tb__DOT__unnamedblk8__DOT__d0 = (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q);
    }
    __Vtask_cdfg_tb__DOT__set_rdy__32__r = 0U;
    vlSelf->cdfg_tb__DOT__result_ready = __Vtask_cdfg_tb__DOT__set_rdy__32__r;
    cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k, 
                      vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                      [3U])) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           310);
        __Vtask_cdfg_tb__DOT__check__33__msg = VL_SFORMATF_NX("result_valid held (hold %0d)",
                                                              32,
                                                              vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                                                              [3U]) ;
        __Vtask_cdfg_tb__DOT__check__33__cond = vlSelf->cdfg_tb__DOT__result_valid;
        if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__33__cond)) {
            cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
        } else {
            cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
            VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,
                      &(cdfg_tb__DOT__cur_test),-1,
                      &(__Vtask_cdfg_tb__DOT__check__33__msg));
        }
        __Vtask_cdfg_tb__DOT__check__34__msg = VL_SFORMATF_NX("result_data stable (hold %0d)",
                                                              32,
                                                              vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                                                              [3U]) ;
        __Vtask_cdfg_tb__DOT__check__34__cond = ((IData)(vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q) 
                                                 == cdfg_tb__DOT__unnamedblk8__DOT__d0);
        if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__34__cond)) {
            cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
        } else {
            cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
            VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,
                      &(cdfg_tb__DOT__cur_test),-1,
                      &(__Vtask_cdfg_tb__DOT__check__34__msg));
        }
        cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k 
            = ((IData)(1U) + cdfg_tb__DOT__unnamedblk8__DOT__unnamedblk1__DOT__unnamedblk9__DOT__k);
    }
    cdfg_tb__DOT__unnamedblk8__DOT__tc0 = vlSelf->cdfg_tb__DOT__transfer_count;
    __Vtask_cdfg_tb__DOT__set_rdy__35__r = 1U;
    vlSelf->cdfg_tb__DOT__result_ready = __Vtask_cdfg_tb__DOT__set_rdy__35__r;
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       316);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       317);
    __Vtask_cdfg_tb__DOT__check__36__msg = VL_SFORMATF_NX("exactly one transfer on release (hold %0d)",
                                                          32,
                                                          vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                                                          [3U]) ;
    __Vtask_cdfg_tb__DOT__check__36__cond = (vlSelf->cdfg_tb__DOT__transfer_count 
                                             == ((IData)(1U) 
                                                 + cdfg_tb__DOT__unnamedblk8__DOT__tc0));
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__36__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__36__msg));
    }
    __Vtask_cdfg_tb__DOT__check__37__msg = std::string{"job result recorded after release"};
    __Vtask_cdfg_tb__DOT__check__37__cond = vlSelf->cdfg_tb__DOT__seen
        [vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__j];
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__37__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__37__msg));
    }
    if ((8U != vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
         [3U])) {
        __Vtask_cdfg_tb__DOT__clear_seen__38__jid = vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__j;
        vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__38__jid] = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__39__with_commit = 1U;
        __Vtask_cdfg_tb__DOT__do_issue__39__rdd = 9U;
        __Vtask_cdfg_tb__DOT__do_issue__39__c = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__39__b = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__39__a = ((IData)(0xbeefU) 
                                                 + 
                                                 vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__widths
                                                 [3U]);
        __Vtask_cdfg_tb__DOT__do_issue__39__lat = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__39__op = 0xbU;
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           124);
        while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
            co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                               "@(negedge clk)", 
                                                               "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                               125);
        }
        __Vtask_cdfg_tb__DOT__do_issue__39__jid = cdfg_tb__DOT__next_id;
        cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                           + (IData)(cdfg_tb__DOT__next_id)));
        vlSelf->cdfg_tb__DOT__issue_valid = 1U;
        vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__39__op;
        vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__39__lat;
        vlSelf->cdfg_tb__DOT__hartid = 0U;
        vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__39__jid;
        vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__39__rdd;
        vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__39__a;
        vlSelf->cdfg_tb__DOT__registers[1U] = (IData)(
                                                      (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__c)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__b))));
        vlSelf->cdfg_tb__DOT__registers[2U] = (IData)(
                                                      ((((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__c)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__b))) 
                                                       >> 0x20U));
        vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__39__with_commit;
        vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__39__jid) 
                                        << 1U);
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           138);
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           139);
        vlSelf->cdfg_tb__DOT__issue_valid = 0U;
        vlSelf->cdfg_tb__DOT__commit_valid = 0U;
        vlSelf->cdfg_tb__DOT__unnamedblk8__DOT__j = __Vtask_cdfg_tb__DOT__do_issue__39__jid;
        while ((1U & (~ (IData)(vlSelf->cdfg_tb__DOT__result_valid)))) {
            co_await vlSelf->__VtrigSched_h17bdab3d__0.trigger(
                                                               "@([changed] cdfg_tb.result_valid)", 
                                                               "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                               323);
        }
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           324);
        cdfg_tb__DOT__unnamedblk8__DOT__d0 = (IData)(vlSelf->cdfg_tb__DOT__dut__DOT__rbuf_q);
    }
    __Vtask_cdfg_tb__DOT__set_rdy__40__r = 1U;
    vlSelf->cdfg_tb__DOT__result_ready = __Vtask_cdfg_tb__DOT__set_rdy__40__r;
    cdfg_tb__DOT__cur_test = std::string{"kill_queued"};
    __Vtask_cdfg_tb__DOT__tick__41__n = 5U;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__41__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    __Vtask_cdfg_tb__DOT__do_issue__42__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__42__rdd = 0xaU;
    __Vtask_cdfg_tb__DOT__do_issue__42__c = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__42__b = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__42__a = 0xa1U;
    __Vtask_cdfg_tb__DOT__do_issue__42__lat = 4U;
    __Vtask_cdfg_tb__DOT__do_issue__42__op = 0xbU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__42__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__42__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__42__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__42__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__42__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__42__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__42__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__42__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__42__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__42__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__42__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__42__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    cdfg_tb__DOT__unnamedblk10__DOT__jA = __Vtask_cdfg_tb__DOT__do_issue__42__jid;
    __Vtask_cdfg_tb__DOT__do_issue__43__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__43__rdd = 0xbU;
    __Vtask_cdfg_tb__DOT__do_issue__43__c = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__43__b = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__43__a = 0xb2U;
    __Vtask_cdfg_tb__DOT__do_issue__43__lat = 4U;
    __Vtask_cdfg_tb__DOT__do_issue__43__op = 0xbU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__43__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__43__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__43__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__43__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__43__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__43__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__43__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__43__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__43__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__43__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__43__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__43__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    cdfg_tb__DOT__unnamedblk10__DOT__jB = __Vtask_cdfg_tb__DOT__do_issue__43__jid;
    __Vtask_cdfg_tb__DOT__clear_seen__44__jid = cdfg_tb__DOT__unnamedblk10__DOT__jB;
    vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__44__jid] = 0U;
    __Vtask_cdfg_tb__DOT__do_kill__45__jid = cdfg_tb__DOT__unnamedblk10__DOT__jB;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       179);
    vlSelf->cdfg_tb__DOT__commit_valid = 1U;
    vlSelf->cdfg_tb__DOT__commit = (1U | ((IData)(__Vtask_cdfg_tb__DOT__do_kill__45__jid) 
                                          << 1U));
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       181);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       182);
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    __Vtask_cdfg_tb__DOT__expect_no_result__46__ncyc = 0x32U;
    __Vtask_cdfg_tb__DOT__expect_no_result__46__jid 
        = cdfg_tb__DOT__unnamedblk10__DOT__jB;
    __Vtask_cdfg_tb__DOT__tick__47__n = __Vtask_cdfg_tb__DOT__expect_no_result__46__ncyc;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__47__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    __Vtask_cdfg_tb__DOT__check__48__msg = VL_SFORMATF_NX("jid=%0# unexpectedly produced a result",
                                                          10,
                                                          __Vtask_cdfg_tb__DOT__expect_no_result__46__jid) ;
    __Vtask_cdfg_tb__DOT__check__48__cond = (1U & (~ 
                                                   vlSelf->cdfg_tb__DOT__seen
                                                   [__Vtask_cdfg_tb__DOT__expect_no_result__46__jid]));
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__48__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__48__msg));
    }
    __Vtask_cdfg_tb__DOT__check__49__msg = std::string{"A still completes"};
    __Vtask_cdfg_tb__DOT__check__49__cond = vlSelf->cdfg_tb__DOT__seen
        [cdfg_tb__DOT__unnamedblk10__DOT__jA];
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__49__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__49__msg));
    }
    __Vtask_cdfg_tb__DOT__expect_result__50__expected = 0xa1U;
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__50__jid 
        = cdfg_tb__DOT__unnamedblk10__DOT__jA;
    while ((1U & (~ vlSelf->cdfg_tb__DOT__seen[vlSelf->__Vtask_cdfg_tb__DOT__expect_result__50__jid]))) {
        co_await vlSelf->__VtrigSched_h45db8945__0.trigger(
                                                           "@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__50__jid)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           194);
    }
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       196);
    __Vtask_cdfg_tb__DOT__check__51__msg = VL_SFORMATF_NX("jid=%0# result=0x%0x expected=0x%0x",
                                                          10,
                                                          vlSelf->__Vtask_cdfg_tb__DOT__expect_result__50__jid,
                                                          32,
                                                          vlSelf->cdfg_tb__DOT__seen_data
                                                          [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__50__jid],
                                                          32,
                                                          __Vtask_cdfg_tb__DOT__expect_result__50__expected) ;
    __Vtask_cdfg_tb__DOT__check__51__cond = (vlSelf->cdfg_tb__DOT__seen_data
                                             [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__50__jid] 
                                             == __Vtask_cdfg_tb__DOT__expect_result__50__expected);
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__51__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__51__msg));
    }
    cdfg_tb__DOT__cur_test = std::string{"kill_running"};
    __Vtask_cdfg_tb__DOT__tick__52__n = 5U;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__52__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    __Vtask_cdfg_tb__DOT__do_issue__53__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__53__rdd = 0xaU;
    __Vtask_cdfg_tb__DOT__do_issue__53__c = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__53__b = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__53__a = 0xc3U;
    __Vtask_cdfg_tb__DOT__do_issue__53__lat = 4U;
    __Vtask_cdfg_tb__DOT__do_issue__53__op = 0xbU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__53__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__53__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__53__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__53__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__53__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__53__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__53__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__53__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__53__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__53__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__53__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__53__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    cdfg_tb__DOT__unnamedblk11__DOT__j = __Vtask_cdfg_tb__DOT__do_issue__53__jid;
    __Vtask_cdfg_tb__DOT__tick__54__n = 3U;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__54__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    __Vtask_cdfg_tb__DOT__clear_seen__55__jid = cdfg_tb__DOT__unnamedblk11__DOT__j;
    vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__55__jid] = 0U;
    __Vtask_cdfg_tb__DOT__do_kill__56__jid = cdfg_tb__DOT__unnamedblk11__DOT__j;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       179);
    vlSelf->cdfg_tb__DOT__commit_valid = 1U;
    vlSelf->cdfg_tb__DOT__commit = (1U | ((IData)(__Vtask_cdfg_tb__DOT__do_kill__56__jid) 
                                          << 1U));
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       181);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       182);
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    __Vtask_cdfg_tb__DOT__expect_no_result__57__ncyc = 0x32U;
    __Vtask_cdfg_tb__DOT__expect_no_result__57__jid 
        = cdfg_tb__DOT__unnamedblk11__DOT__j;
    __Vtask_cdfg_tb__DOT__tick__58__n = __Vtask_cdfg_tb__DOT__expect_no_result__57__ncyc;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__58__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    __Vtask_cdfg_tb__DOT__check__59__msg = VL_SFORMATF_NX("jid=%0# unexpectedly produced a result",
                                                          10,
                                                          __Vtask_cdfg_tb__DOT__expect_no_result__57__jid) ;
    __Vtask_cdfg_tb__DOT__check__59__cond = (1U & (~ 
                                                   vlSelf->cdfg_tb__DOT__seen
                                                   [__Vtask_cdfg_tb__DOT__expect_no_result__57__jid]));
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__59__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__59__msg));
    }
    cdfg_tb__DOT__cur_test = std::string{"kill_done"};
    __Vtask_cdfg_tb__DOT__tick__60__n = 5U;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__60__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    __Vtask_cdfg_tb__DOT__set_rdy__61__r = 0U;
    vlSelf->cdfg_tb__DOT__result_ready = __Vtask_cdfg_tb__DOT__set_rdy__61__r;
    __Vtask_cdfg_tb__DOT__do_issue__62__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__62__rdd = 0xaU;
    __Vtask_cdfg_tb__DOT__do_issue__62__c = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__62__b = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__62__a = 0xd4U;
    __Vtask_cdfg_tb__DOT__do_issue__62__lat = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__62__op = 0xbU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__62__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__62__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__62__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__62__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__62__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__62__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__62__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__62__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__62__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__62__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__62__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__62__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    cdfg_tb__DOT__unnamedblk12__DOT__j = __Vtask_cdfg_tb__DOT__do_issue__62__jid;
    while ((1U & (~ (IData)(vlSelf->cdfg_tb__DOT__result_valid)))) {
        co_await vlSelf->__VtrigSched_h17bdab3d__0.trigger(
                                                           "@([changed] cdfg_tb.result_valid)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           362);
    }
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       363);
    __Vtask_cdfg_tb__DOT__clear_seen__63__jid = cdfg_tb__DOT__unnamedblk12__DOT__j;
    vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__63__jid] = 0U;
    __Vtask_cdfg_tb__DOT__do_kill__64__jid = cdfg_tb__DOT__unnamedblk12__DOT__j;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       179);
    vlSelf->cdfg_tb__DOT__commit_valid = 1U;
    vlSelf->cdfg_tb__DOT__commit = (1U | ((IData)(__Vtask_cdfg_tb__DOT__do_kill__64__jid) 
                                          << 1U));
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       181);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       182);
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    __Vtask_cdfg_tb__DOT__set_rdy__65__r = 1U;
    vlSelf->cdfg_tb__DOT__result_ready = __Vtask_cdfg_tb__DOT__set_rdy__65__r;
    __Vtask_cdfg_tb__DOT__expect_no_result__66__ncyc = 0x14U;
    __Vtask_cdfg_tb__DOT__expect_no_result__66__jid 
        = cdfg_tb__DOT__unnamedblk12__DOT__j;
    __Vtask_cdfg_tb__DOT__tick__67__n = __Vtask_cdfg_tb__DOT__expect_no_result__66__ncyc;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__67__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    __Vtask_cdfg_tb__DOT__check__68__msg = VL_SFORMATF_NX("jid=%0# unexpectedly produced a result",
                                                          10,
                                                          __Vtask_cdfg_tb__DOT__expect_no_result__66__jid) ;
    __Vtask_cdfg_tb__DOT__check__68__cond = (1U & (~ 
                                                   vlSelf->cdfg_tb__DOT__seen
                                                   [__Vtask_cdfg_tb__DOT__expect_no_result__66__jid]));
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__68__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__68__msg));
    }
    cdfg_tb__DOT__cur_test = std::string{"kill_done_race"};
    __Vtask_cdfg_tb__DOT__tick__69__n = 5U;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__69__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    __Vtask_cdfg_tb__DOT__set_rdy__70__r = 1U;
    vlSelf->cdfg_tb__DOT__result_ready = __Vtask_cdfg_tb__DOT__set_rdy__70__r;
    __Vtask_cdfg_tb__DOT__do_issue__71__with_commit = 1U;
    __Vtask_cdfg_tb__DOT__do_issue__71__rdd = 0xaU;
    __Vtask_cdfg_tb__DOT__do_issue__71__c = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__71__b = 0U;
    __Vtask_cdfg_tb__DOT__do_issue__71__a = 0xe5U;
    __Vtask_cdfg_tb__DOT__do_issue__71__lat = 4U;
    __Vtask_cdfg_tb__DOT__do_issue__71__op = 0xbU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       124);
    while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           125);
    }
    __Vtask_cdfg_tb__DOT__do_issue__71__jid = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__71__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__71__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__71__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__71__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__71__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__71__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__71__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__71__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__71__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__71__with_commit;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__71__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       138);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       139);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    cdfg_tb__DOT__unnamedblk13__DOT__j = __Vtask_cdfg_tb__DOT__do_issue__71__jid;
    __Vtask_cdfg_tb__DOT__tick__72__n = 0x10U;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__72__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    __Vtask_cdfg_tb__DOT__clear_seen__73__jid = cdfg_tb__DOT__unnamedblk13__DOT__j;
    vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__73__jid] = 0U;
    __Vtask_cdfg_tb__DOT__do_kill__74__jid = cdfg_tb__DOT__unnamedblk13__DOT__j;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       179);
    vlSelf->cdfg_tb__DOT__commit_valid = 1U;
    vlSelf->cdfg_tb__DOT__commit = (1U | ((IData)(__Vtask_cdfg_tb__DOT__do_kill__74__jid) 
                                          << 1U));
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       181);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       182);
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    __Vtask_cdfg_tb__DOT__expect_no_result__75__ncyc = 0x1eU;
    __Vtask_cdfg_tb__DOT__expect_no_result__75__jid 
        = cdfg_tb__DOT__unnamedblk13__DOT__j;
    __Vtask_cdfg_tb__DOT__tick__76__n = __Vtask_cdfg_tb__DOT__expect_no_result__75__ncyc;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__76__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    __Vtask_cdfg_tb__DOT__check__77__msg = VL_SFORMATF_NX("jid=%0# unexpectedly produced a result",
                                                          10,
                                                          __Vtask_cdfg_tb__DOT__expect_no_result__75__jid) ;
    __Vtask_cdfg_tb__DOT__check__77__cond = (1U & (~ 
                                                   vlSelf->cdfg_tb__DOT__seen
                                                   [__Vtask_cdfg_tb__DOT__expect_no_result__75__jid]));
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__77__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__77__msg));
    }
    cdfg_tb__DOT__cur_test = std::string{"commit_gate"};
    __Vtask_cdfg_tb__DOT__tick__78__n = 5U;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__78__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    __Vtask_cdfg_tb__DOT__set_rdy__79__r = 1U;
    vlSelf->cdfg_tb__DOT__result_ready = __Vtask_cdfg_tb__DOT__set_rdy__79__r;
    cdfg_tb__DOT__unnamedblk14__DOT__a = 0xf6U;
    __Vtask_cdfg_tb__DOT__clear_seen__80__jid = vlSelf->cdfg_tb__DOT__unnamedblk14__DOT__j;
    vlSelf->cdfg_tb__DOT__seen[__Vtask_cdfg_tb__DOT__clear_seen__80__jid] = 0U;
    __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__rdd = 0xaU;
    __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__c = 0U;
    __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__b = 0U;
    __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__a 
        = cdfg_tb__DOT__unnamedblk14__DOT__a;
    __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__lat = 0U;
    __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__op = 0xbU;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       151);
    __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__jid 
        = cdfg_tb__DOT__next_id;
    cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                       + (IData)(cdfg_tb__DOT__next_id)));
    vlSelf->cdfg_tb__DOT__issue_valid = 1U;
    vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__op;
    vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__lat;
    vlSelf->cdfg_tb__DOT__hartid = 0U;
    vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__jid;
    vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__rdd;
    vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__a;
    vlSelf->cdfg_tb__DOT__registers[1U] = (IData)((
                                                   ((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue_nocommit__81__c)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue_nocommit__81__b))));
    vlSelf->cdfg_tb__DOT__registers[2U] = (IData)((
                                                   (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue_nocommit__81__c)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue_nocommit__81__b))) 
                                                   >> 0x20U));
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       161);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       162);
    vlSelf->cdfg_tb__DOT__issue_valid = 0U;
    vlSelf->cdfg_tb__DOT__unnamedblk14__DOT__j = __Vtask_cdfg_tb__DOT__do_issue_nocommit__81__jid;
    __Vtask_cdfg_tb__DOT__tick__82__n = 0xaU;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__82__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    __Vtask_cdfg_tb__DOT__check__83__msg = std::string{"no result before commit (private)"};
    __Vtask_cdfg_tb__DOT__check__83__cond = (1U & (~ 
                                                   vlSelf->cdfg_tb__DOT__seen
                                                   [vlSelf->cdfg_tb__DOT__unnamedblk14__DOT__j]));
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__83__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__83__msg));
    }
    __Vtask_cdfg_tb__DOT__do_commit__84__jid = vlSelf->cdfg_tb__DOT__unnamedblk14__DOT__j;
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       169);
    vlSelf->cdfg_tb__DOT__commit_valid = 1U;
    vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_commit__84__jid) 
                                    << 1U);
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       171);
    co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                       "@(negedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       172);
    vlSelf->cdfg_tb__DOT__commit_valid = 0U;
    __Vtask_cdfg_tb__DOT__expect_result__85__expected 
        = cdfg_tb__DOT__unnamedblk14__DOT__a;
    vlSelf->__Vtask_cdfg_tb__DOT__expect_result__85__jid 
        = vlSelf->cdfg_tb__DOT__unnamedblk14__DOT__j;
    while ((1U & (~ vlSelf->cdfg_tb__DOT__seen[vlSelf->__Vtask_cdfg_tb__DOT__expect_result__85__jid]))) {
        co_await vlSelf->__VtrigSched_he8b42485__0.trigger(
                                                           "@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__85__jid)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           194);
    }
    co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                       "@(posedge clk)", 
                                                       "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                       196);
    __Vtask_cdfg_tb__DOT__check__86__msg = VL_SFORMATF_NX("jid=%0# result=0x%0x expected=0x%0x",
                                                          10,
                                                          vlSelf->__Vtask_cdfg_tb__DOT__expect_result__85__jid,
                                                          32,
                                                          vlSelf->cdfg_tb__DOT__seen_data
                                                          [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__85__jid],
                                                          32,
                                                          __Vtask_cdfg_tb__DOT__expect_result__85__expected) ;
    __Vtask_cdfg_tb__DOT__check__86__cond = (vlSelf->cdfg_tb__DOT__seen_data
                                             [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__85__jid] 
                                             == __Vtask_cdfg_tb__DOT__expect_result__85__expected);
    if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__86__cond)) {
        cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
    } else {
        cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
        VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,&(cdfg_tb__DOT__cur_test),
                  -1,&(__Vtask_cdfg_tb__DOT__check__86__msg));
    }
    cdfg_tb__DOT__cur_test = std::string{"randomized_100plus"};
    __Vtask_cdfg_tb__DOT__tick__87__n = 5U;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__87__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    __Vtask_cdfg_tb__DOT__set_rdy__88__r = 1U;
    vlSelf->cdfg_tb__DOT__result_ready = __Vtask_cdfg_tb__DOT__set_rdy__88__r;
    cdfg_tb__DOT__unnamedblk15__DOT__seed = 0x12345678U;
    cdfg_tb__DOT__unnamedblk15__DOT__unnamedblk16__DOT__v = 0U;
    while (VL_GTS_III(32, 0x78U, cdfg_tb__DOT__unnamedblk15__DOT__unnamedblk16__DOT__v)) {
        cdfg_tb__DOT__unnamedblk15__DOT__seed = ((IData)(0x3c6ef35fU) 
                                                 + 
                                                 ((IData)(0x19660dU) 
                                                  * cdfg_tb__DOT__unnamedblk15__DOT__seed));
        vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__a 
            = cdfg_tb__DOT__unnamedblk15__DOT__seed;
        cdfg_tb__DOT__unnamedblk15__DOT__seed = ((IData)(0x3c6ef35fU) 
                                                 + 
                                                 ((IData)(0x19660dU) 
                                                  * cdfg_tb__DOT__unnamedblk15__DOT__seed));
        vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__b 
            = cdfg_tb__DOT__unnamedblk15__DOT__seed;
        cdfg_tb__DOT__unnamedblk15__DOT__seed = ((IData)(0x3c6ef35fU) 
                                                 + 
                                                 ((IData)(0x19660dU) 
                                                  * cdfg_tb__DOT__unnamedblk15__DOT__seed));
        vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__c 
            = cdfg_tb__DOT__unnamedblk15__DOT__seed;
        __Vfunc_cdfg_tb__DOT__cdfg_ref__89__c = vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__c;
        __Vfunc_cdfg_tb__DOT__cdfg_ref__89__b = vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__b;
        __Vfunc_cdfg_tb__DOT__cdfg_ref__89__a = vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__a;
        __Vfunc_cdfg_tb__DOT__cdfg_ref__89__Vfuncout 
            = (((__Vfunc_cdfg_tb__DOT__cdfg_ref__89__a 
                 * __Vfunc_cdfg_tb__DOT__cdfg_ref__89__b) 
                + __Vfunc_cdfg_tb__DOT__cdfg_ref__89__c) 
               ^ (__Vfunc_cdfg_tb__DOT__cdfg_ref__89__a 
                  + __Vfunc_cdfg_tb__DOT__cdfg_ref__89__c));
        vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__expv 
            = __Vfunc_cdfg_tb__DOT__cdfg_ref__89__Vfuncout;
        vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__latv 
            = (3U & cdfg_tb__DOT__unnamedblk15__DOT__unnamedblk16__DOT__v);
        __Vtask_cdfg_tb__DOT__do_issue__90__with_commit = 1U;
        __Vtask_cdfg_tb__DOT__do_issue__90__rdd = 0xbU;
        __Vtask_cdfg_tb__DOT__do_issue__90__c = vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__c;
        __Vtask_cdfg_tb__DOT__do_issue__90__b = vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__b;
        __Vtask_cdfg_tb__DOT__do_issue__90__a = vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__a;
        __Vtask_cdfg_tb__DOT__do_issue__90__lat = vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__latv;
        __Vtask_cdfg_tb__DOT__do_issue__90__op = 0xcU;
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           124);
        while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
            co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                               "@(negedge clk)", 
                                                               "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                               125);
        }
        __Vtask_cdfg_tb__DOT__do_issue__90__jid = cdfg_tb__DOT__next_id;
        cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                           + (IData)(cdfg_tb__DOT__next_id)));
        vlSelf->cdfg_tb__DOT__issue_valid = 1U;
        vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__90__op;
        vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__90__lat;
        vlSelf->cdfg_tb__DOT__hartid = 0U;
        vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__90__jid;
        vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__90__rdd;
        vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__90__a;
        vlSelf->cdfg_tb__DOT__registers[1U] = (IData)(
                                                      (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__90__c)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__90__b))));
        vlSelf->cdfg_tb__DOT__registers[2U] = (IData)(
                                                      ((((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__90__c)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__90__b))) 
                                                       >> 0x20U));
        vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__90__with_commit;
        vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__90__jid) 
                                        << 1U);
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           138);
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           139);
        vlSelf->cdfg_tb__DOT__issue_valid = 0U;
        vlSelf->cdfg_tb__DOT__commit_valid = 0U;
        vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__j 
            = __Vtask_cdfg_tb__DOT__do_issue__90__jid;
        __Vtask_cdfg_tb__DOT__expect_result__91__expected 
            = vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__expv;
        vlSelf->__Vtask_cdfg_tb__DOT__expect_result__91__jid 
            = vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__j;
        while ((1U & (~ vlSelf->cdfg_tb__DOT__seen[vlSelf->__Vtask_cdfg_tb__DOT__expect_result__91__jid]))) {
            co_await vlSelf->__VtrigSched_h878b8e03__0.trigger(
                                                               "@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__91__jid)", 
                                                               "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                               194);
        }
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           196);
        __Vtask_cdfg_tb__DOT__check__92__msg = VL_SFORMATF_NX("jid=%0# result=0x%0x expected=0x%0x",
                                                              10,
                                                              vlSelf->__Vtask_cdfg_tb__DOT__expect_result__91__jid,
                                                              32,
                                                              vlSelf->cdfg_tb__DOT__seen_data
                                                              [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__91__jid],
                                                              32,
                                                              __Vtask_cdfg_tb__DOT__expect_result__91__expected) ;
        __Vtask_cdfg_tb__DOT__check__92__cond = (vlSelf->cdfg_tb__DOT__seen_data
                                                 [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__91__jid] 
                                                 == __Vtask_cdfg_tb__DOT__expect_result__91__expected);
        if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__92__cond)) {
            cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
        } else {
            cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
            VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,
                      &(cdfg_tb__DOT__cur_test),-1,
                      &(__Vtask_cdfg_tb__DOT__check__92__msg));
        }
        cdfg_tb__DOT__unnamedblk15__DOT__unnamedblk16__DOT__v 
            = ((IData)(1U) + cdfg_tb__DOT__unnamedblk15__DOT__unnamedblk16__DOT__v);
    }
    cdfg_tb__DOT__unnamedblk15__DOT__unnamedblk17__DOT__v = 0U;
    while (VL_GTS_III(32, 0x96U, cdfg_tb__DOT__unnamedblk15__DOT__unnamedblk17__DOT__v)) {
        cdfg_tb__DOT__unnamedblk15__DOT__seed = ((IData)(0x3c6ef35fU) 
                                                 + 
                                                 ((IData)(0x19660dU) 
                                                  * cdfg_tb__DOT__unnamedblk15__DOT__seed));
        vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__a 
            = cdfg_tb__DOT__unnamedblk15__DOT__seed;
        vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__latv 
            = (7U & VL_MODDIVS_III(32, cdfg_tb__DOT__unnamedblk15__DOT__unnamedblk17__DOT__v, (IData)(5U)));
        __Vtask_cdfg_tb__DOT__do_issue__93__with_commit = 1U;
        __Vtask_cdfg_tb__DOT__do_issue__93__rdd = 0xaU;
        __Vtask_cdfg_tb__DOT__do_issue__93__c = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__93__b = 0U;
        __Vtask_cdfg_tb__DOT__do_issue__93__a = vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__a;
        __Vtask_cdfg_tb__DOT__do_issue__93__lat = vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__latv;
        __Vtask_cdfg_tb__DOT__do_issue__93__op = 0xbU;
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           124);
        while ((0x2000000U & vlSelf->cdfg_tb__DOT__dut__DOT__q1_q[3U])) {
            co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                               "@(negedge clk)", 
                                                               "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                               125);
        }
        __Vtask_cdfg_tb__DOT__do_issue__93__jid = cdfg_tb__DOT__next_id;
        cdfg_tb__DOT__next_id = (0x3ffU & ((IData)(1U) 
                                           + (IData)(cdfg_tb__DOT__next_id)));
        vlSelf->cdfg_tb__DOT__issue_valid = 1U;
        vlSelf->cdfg_tb__DOT__opcode = __Vtask_cdfg_tb__DOT__do_issue__93__op;
        vlSelf->cdfg_tb__DOT__latency_sel = __Vtask_cdfg_tb__DOT__do_issue__93__lat;
        vlSelf->cdfg_tb__DOT__hartid = 0U;
        vlSelf->cdfg_tb__DOT__id = __Vtask_cdfg_tb__DOT__do_issue__93__jid;
        vlSelf->cdfg_tb__DOT__rd = __Vtask_cdfg_tb__DOT__do_issue__93__rdd;
        vlSelf->cdfg_tb__DOT__registers[0U] = __Vtask_cdfg_tb__DOT__do_issue__93__a;
        vlSelf->cdfg_tb__DOT__registers[1U] = (IData)(
                                                      (((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__93__c)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__93__b))));
        vlSelf->cdfg_tb__DOT__registers[2U] = (IData)(
                                                      ((((QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__93__c)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_cdfg_tb__DOT__do_issue__93__b))) 
                                                       >> 0x20U));
        vlSelf->cdfg_tb__DOT__commit_valid = __Vtask_cdfg_tb__DOT__do_issue__93__with_commit;
        vlSelf->cdfg_tb__DOT__commit = ((IData)(__Vtask_cdfg_tb__DOT__do_issue__93__jid) 
                                        << 1U);
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           138);
        co_await vlSelf->__VtrigSched_h3cae1f77__0.trigger(
                                                           "@(negedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           139);
        vlSelf->cdfg_tb__DOT__issue_valid = 0U;
        vlSelf->cdfg_tb__DOT__commit_valid = 0U;
        vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__j 
            = __Vtask_cdfg_tb__DOT__do_issue__93__jid;
        __Vtask_cdfg_tb__DOT__expect_result__94__expected 
            = vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__a;
        vlSelf->__Vtask_cdfg_tb__DOT__expect_result__94__jid 
            = vlSelf->cdfg_tb__DOT__unnamedblk15__DOT__j;
        while ((1U & (~ vlSelf->cdfg_tb__DOT__seen[vlSelf->__Vtask_cdfg_tb__DOT__expect_result__94__jid]))) {
            co_await vlSelf->__VtrigSched_h2cbfa2a0__0.trigger(
                                                               "@([changed] cdfg_tb.seen or [changed] __Vtask_cdfg_tb.expect_result__94__jid)", 
                                                               "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                               194);
        }
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           196);
        __Vtask_cdfg_tb__DOT__check__95__msg = VL_SFORMATF_NX("jid=%0# result=0x%0x expected=0x%0x",
                                                              10,
                                                              vlSelf->__Vtask_cdfg_tb__DOT__expect_result__94__jid,
                                                              32,
                                                              vlSelf->cdfg_tb__DOT__seen_data
                                                              [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__94__jid],
                                                              32,
                                                              __Vtask_cdfg_tb__DOT__expect_result__94__expected) ;
        __Vtask_cdfg_tb__DOT__check__95__cond = (vlSelf->cdfg_tb__DOT__seen_data
                                                 [vlSelf->__Vtask_cdfg_tb__DOT__expect_result__94__jid] 
                                                 == __Vtask_cdfg_tb__DOT__expect_result__94__expected);
        if (VL_LIKELY(__Vtask_cdfg_tb__DOT__check__95__cond)) {
            cdfg_tb__DOT__n_pass = ((IData)(1U) + cdfg_tb__DOT__n_pass);
        } else {
            cdfg_tb__DOT__n_fail = ((IData)(1U) + cdfg_tb__DOT__n_fail);
            VL_WRITEF("[cdfg_tb] FAIL [%@] %@\n",-1,
                      &(cdfg_tb__DOT__cur_test),-1,
                      &(__Vtask_cdfg_tb__DOT__check__95__msg));
        }
        cdfg_tb__DOT__unnamedblk15__DOT__unnamedblk17__DOT__v 
            = ((IData)(1U) + cdfg_tb__DOT__unnamedblk15__DOT__unnamedblk17__DOT__v);
    }
    __Vtask_cdfg_tb__DOT__tick__96__n = 0x14U;
    cdfg_tb__DOT__tick__Vstatic__k = 0U;
    while (VL_LTS_III(32, cdfg_tb__DOT__tick__Vstatic__k, __Vtask_cdfg_tb__DOT__tick__96__n)) {
        co_await vlSelf->__VtrigSched_h3cae1fb6__0.trigger(
                                                           "@(posedge clk)", 
                                                           "/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 
                                                           114);
        cdfg_tb__DOT__tick__Vstatic__k = ((IData)(1U) 
                                          + cdfg_tb__DOT__tick__Vstatic__k);
    }
    VL_WRITEF("[cdfg_tb] ============================================================\n[cdfg_tb] SUMMARY: %0d checks passed, %0d FAILED\n",
              32,cdfg_tb__DOT__n_pass,32,cdfg_tb__DOT__n_fail);
    if ((0U == cdfg_tb__DOT__n_fail)) {
        VL_WRITEF("[cdfg_tb] ALL CASES PASSED\n");
    } else {
        VL_WRITEF("[cdfg_tb] SOME CASES FAILED\n");
    }
    VL_WRITEF("[cdfg_tb] ============================================================\n");
    if (VL_UNLIKELY((0U != cdfg_tb__DOT__n_fail))) {
        VL_WRITEF("[%0t] %%Error: cdfg_tb.sv:438: Assertion failed in %Ncdfg_tb: [cdfg_tb] failing cases present\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 438, "");
    }
    VL_FINISH_MT("/home/tt/cva6_UROP/verif/tb/cvxif_cdfg/cdfg_tb.sv", 439, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcdfg_tb___024root___dump_triggers__act(Vcdfg_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcdfg_tb___024root___eval_triggers__act(Vcdfg_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcdfg_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcdfg_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((~ (IData)(vlSelf->rst_n)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__rst_n)));
    vlSelf->__VactTriggered.at(2U) = ((~ (IData)(vlSelf->clk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__clk));
    vlSelf->__VactTriggered.at(3U) = (vlSelf->cdfg_tb__DOT__seen.neq(vlSelf->__Vtrigrprev__TOP__cdfg_tb__DOT__seen) 
                                      | ((IData)(vlSelf->__Vtask_cdfg_tb__DOT__expect_result__2__jid) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__2__jid)));
    vlSelf->__VactTriggered.at(4U) = (vlSelf->cdfg_tb__DOT__seen.neq(vlSelf->__Vtrigrprev__TOP__cdfg_tb__DOT__seen) 
                                      | ((IData)(vlSelf->__Vtask_cdfg_tb__DOT__expect_result__7__jid) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__7__jid)));
    vlSelf->__VactTriggered.at(5U) = (vlSelf->cdfg_tb__DOT__seen.neq(vlSelf->__Vtrigrprev__TOP__cdfg_tb__DOT__seen) 
                                      | ((IData)(vlSelf->__Vtask_cdfg_tb__DOT__expect_result__14__jid) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__14__jid)));
    vlSelf->__VactTriggered.at(6U) = (vlSelf->cdfg_tb__DOT__seen.neq(vlSelf->__Vtrigrprev__TOP__cdfg_tb__DOT__seen) 
                                      | ((IData)(vlSelf->__Vtask_cdfg_tb__DOT__expect_result__16__jid) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__16__jid)));
    vlSelf->__VactTriggered.at(7U) = ((IData)(vlSelf->cdfg_tb__DOT__result_valid) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__cdfg_tb__DOT__result_valid));
    vlSelf->__VactTriggered.at(8U) = (vlSelf->cdfg_tb__DOT__seen.neq(vlSelf->__Vtrigrprev__TOP__cdfg_tb__DOT__seen) 
                                      | ((IData)(vlSelf->__Vtask_cdfg_tb__DOT__expect_result__50__jid) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__50__jid)));
    vlSelf->__VactTriggered.at(9U) = (vlSelf->cdfg_tb__DOT__seen.neq(vlSelf->__Vtrigrprev__TOP__cdfg_tb__DOT__seen) 
                                      | ((IData)(vlSelf->__Vtask_cdfg_tb__DOT__expect_result__85__jid) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__85__jid)));
    vlSelf->__VactTriggered.at(0xaU) = (vlSelf->cdfg_tb__DOT__seen.neq(vlSelf->__Vtrigrprev__TOP__cdfg_tb__DOT__seen) 
                                        | ((IData)(vlSelf->__Vtask_cdfg_tb__DOT__expect_result__91__jid) 
                                           != (IData)(vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__91__jid)));
    vlSelf->__VactTriggered.at(0xbU) = (vlSelf->cdfg_tb__DOT__seen.neq(vlSelf->__Vtrigrprev__TOP__cdfg_tb__DOT__seen) 
                                        | ((IData)(vlSelf->__Vtask_cdfg_tb__DOT__expect_result__94__jid) 
                                           != (IData)(vlSelf->__Vtrigrprev__TOP____Vtask_cdfg_tb__DOT__expect_result__94__jid)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst_n = vlSelf->rst_n;
    vlSelf->__Vtrigrprev__TOP__cdfg_tb__DOT__seen.assign(vlSelf->cdfg_tb__DOT__seen);
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
        vlSelf->__VactTriggered.at(4U) = 1U;
        vlSelf->__VactTriggered.at(5U) = 1U;
        vlSelf->__VactTriggered.at(6U) = 1U;
        vlSelf->__VactTriggered.at(7U) = 1U;
        vlSelf->__VactTriggered.at(8U) = 1U;
        vlSelf->__VactTriggered.at(9U) = 1U;
        vlSelf->__VactTriggered.at(0xaU) = 1U;
        vlSelf->__VactTriggered.at(0xbU) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcdfg_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

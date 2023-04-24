// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpla_testbench.h for the primary calling header

#include "verilated.h"

#include "Vpla_testbench___024root.h"

VL_ATTR_COLD void Vpla_testbench___024root___eval_static__TOP(Vpla_testbench___024root* vlSelf);

VL_ATTR_COLD void Vpla_testbench___024root___eval_static(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___eval_static\n"); );
    // Body
    Vpla_testbench___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vpla_testbench___024root___eval_static__TOP(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init = 0U;
    vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init = 1U;
    vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init = 2U;
    vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init = 3U;
    vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init = 0U;
    vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init = 1U;
    vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init = 2U;
    vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init = 3U;
}

VL_ATTR_COLD void Vpla_testbench___024root___eval_initial__TOP(Vpla_testbench___024root* vlSelf);

VL_ATTR_COLD void Vpla_testbench___024root___eval_initial(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___eval_initial\n"); );
    // Body
    Vpla_testbench___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vpla_testbench___024root___eval_initial__TOP(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->pla_testbench__DOT__andSel[0U] = 1U;
    vlSelf->pla_testbench__DOT__andSel[1U] = 2U;
    vlSelf->pla_testbench__DOT__andSel[2U] = 3U;
    vlSelf->pla_testbench__DOT__andSel[3U] = 4U;
    vlSelf->pla_testbench__DOT__orSel[0U] = 1U;
    vlSelf->pla_testbench__DOT__orSel[1U] = 2U;
    vlSelf->pla_testbench__DOT__orSel[2U] = 3U;
    vlSelf->pla_testbench__DOT__orSel[3U] = 4U;
}

VL_ATTR_COLD void Vpla_testbench___024root___eval_final(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vpla_testbench___024root___eval_triggers__stl(Vpla_testbench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpla_testbench___024root___dump_triggers__stl(Vpla_testbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vpla_testbench___024root___eval_stl(Vpla_testbench___024root* vlSelf);

VL_ATTR_COLD void Vpla_testbench___024root___eval_settle(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vpla_testbench___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vpla_testbench___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("../source/PLA/pla_testbench.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vpla_testbench___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpla_testbench___024root___dump_triggers__stl(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpla_testbench___024root___stl_sequent__TOP__0(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__U0__Y;
    pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__U0__Y = 0;
    CData/*0:0*/ pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__U0__Y;
    pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__U0__Y = 0;
    CData/*0:0*/ pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__U0__Y;
    pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__U0__Y = 0;
    CData/*0:0*/ pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__U0__Y;
    pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__U0__Y = 0;
    // Body
    pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__U0__Y 
        = (1U & (((~ ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init) 
                      >> 7U)) | (~ ((IData)(vlSelf->btns_4bits_tri_i) 
                                    >> 3U))) & (((~ 
                                                  ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init) 
                                                   >> 6U)) 
                                                 | ((IData)(vlSelf->btns_4bits_tri_i) 
                                                    >> 3U)) 
                                                & (((~ 
                                                     ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init) 
                                                      >> 5U)) 
                                                    | (~ 
                                                       ((IData)(vlSelf->btns_4bits_tri_i) 
                                                        >> 2U))) 
                                                   & (((~ 
                                                        ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init) 
                                                         >> 4U)) 
                                                       | ((IData)(vlSelf->btns_4bits_tri_i) 
                                                          >> 2U)) 
                                                      & (((~ 
                                                           ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init) 
                                                            >> 3U)) 
                                                          | (~ 
                                                             ((IData)(vlSelf->btns_4bits_tri_i) 
                                                              >> 1U))) 
                                                         & (((~ 
                                                              ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init) 
                                                               >> 2U)) 
                                                             | ((IData)(vlSelf->btns_4bits_tri_i) 
                                                                >> 1U)) 
                                                            & (((~ 
                                                                 ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init) 
                                                                  >> 1U)) 
                                                                | (~ (IData)(vlSelf->btns_4bits_tri_i))) 
                                                               & ((~ (IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init)) 
                                                                  | (IData)(vlSelf->btns_4bits_tri_i))))))))));
    pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__U0__Y 
        = (1U & (((~ ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init) 
                      >> 7U)) | (~ ((IData)(vlSelf->btns_4bits_tri_i) 
                                    >> 3U))) & (((~ 
                                                  ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init) 
                                                   >> 6U)) 
                                                 | ((IData)(vlSelf->btns_4bits_tri_i) 
                                                    >> 3U)) 
                                                & (((~ 
                                                     ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init) 
                                                      >> 5U)) 
                                                    | (~ 
                                                       ((IData)(vlSelf->btns_4bits_tri_i) 
                                                        >> 2U))) 
                                                   & (((~ 
                                                        ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init) 
                                                         >> 4U)) 
                                                       | ((IData)(vlSelf->btns_4bits_tri_i) 
                                                          >> 2U)) 
                                                      & (((~ 
                                                           ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init) 
                                                            >> 3U)) 
                                                          | (~ 
                                                             ((IData)(vlSelf->btns_4bits_tri_i) 
                                                              >> 1U))) 
                                                         & (((~ 
                                                              ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init) 
                                                               >> 2U)) 
                                                             | ((IData)(vlSelf->btns_4bits_tri_i) 
                                                                >> 1U)) 
                                                            & (((~ 
                                                                 ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init) 
                                                                  >> 1U)) 
                                                                | (~ (IData)(vlSelf->btns_4bits_tri_i))) 
                                                               & ((~ (IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init)) 
                                                                  | (IData)(vlSelf->btns_4bits_tri_i))))))))));
    pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__U0__Y 
        = (1U & (((~ ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init) 
                      >> 7U)) | (~ ((IData)(vlSelf->btns_4bits_tri_i) 
                                    >> 3U))) & (((~ 
                                                  ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init) 
                                                   >> 6U)) 
                                                 | ((IData)(vlSelf->btns_4bits_tri_i) 
                                                    >> 3U)) 
                                                & (((~ 
                                                     ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init) 
                                                      >> 5U)) 
                                                    | (~ 
                                                       ((IData)(vlSelf->btns_4bits_tri_i) 
                                                        >> 2U))) 
                                                   & (((~ 
                                                        ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init) 
                                                         >> 4U)) 
                                                       | ((IData)(vlSelf->btns_4bits_tri_i) 
                                                          >> 2U)) 
                                                      & (((~ 
                                                           ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init) 
                                                            >> 3U)) 
                                                          | (~ 
                                                             ((IData)(vlSelf->btns_4bits_tri_i) 
                                                              >> 1U))) 
                                                         & (((~ 
                                                              ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init) 
                                                               >> 2U)) 
                                                             | ((IData)(vlSelf->btns_4bits_tri_i) 
                                                                >> 1U)) 
                                                            & (((~ 
                                                                 ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init) 
                                                                  >> 1U)) 
                                                                | (~ (IData)(vlSelf->btns_4bits_tri_i))) 
                                                               & ((~ (IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init)) 
                                                                  | (IData)(vlSelf->btns_4bits_tri_i))))))))));
    pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__U0__Y 
        = (1U & (((~ ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init) 
                      >> 7U)) | (~ ((IData)(vlSelf->btns_4bits_tri_i) 
                                    >> 3U))) & (((~ 
                                                  ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init) 
                                                   >> 6U)) 
                                                 | ((IData)(vlSelf->btns_4bits_tri_i) 
                                                    >> 3U)) 
                                                & (((~ 
                                                     ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init) 
                                                      >> 5U)) 
                                                    | (~ 
                                                       ((IData)(vlSelf->btns_4bits_tri_i) 
                                                        >> 2U))) 
                                                   & (((~ 
                                                        ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init) 
                                                         >> 4U)) 
                                                       | ((IData)(vlSelf->btns_4bits_tri_i) 
                                                          >> 2U)) 
                                                      & (((~ 
                                                           ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init) 
                                                            >> 3U)) 
                                                          | (~ 
                                                             ((IData)(vlSelf->btns_4bits_tri_i) 
                                                              >> 1U))) 
                                                         & (((~ 
                                                              ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init) 
                                                               >> 2U)) 
                                                             | ((IData)(vlSelf->btns_4bits_tri_i) 
                                                                >> 1U)) 
                                                            & (((~ 
                                                                 ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init) 
                                                                  >> 1U)) 
                                                                | (~ (IData)(vlSelf->btns_4bits_tri_i))) 
                                                               & ((~ (IData)(vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init)) 
                                                                  | (IData)(vlSelf->btns_4bits_tri_i))))))))));
    vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber4[3U] 
        = vlSelf->pla_testbench__DOT__orSel[3U];
    vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber4[2U] 
        = vlSelf->pla_testbench__DOT__orSel[2U];
    vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber4[1U] 
        = vlSelf->pla_testbench__DOT__orSel[1U];
    vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber4[0U] 
        = vlSelf->pla_testbench__DOT__orSel[0U];
    vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber3[3U] 
        = vlSelf->pla_testbench__DOT__andSel[3U];
    vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber3[2U] 
        = vlSelf->pla_testbench__DOT__andSel[2U];
    vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber3[1U] 
        = vlSelf->pla_testbench__DOT__andSel[1U];
    vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber3[0U] 
        = vlSelf->pla_testbench__DOT__andSel[0U];
    vlSelf->leds_4bits_tri_o = (((0xfffffff8U & ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init) 
                                                 & ((IData)(pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__U0__Y) 
                                                    << 3U))) 
                                 | ((0xfffffff8U & 
                                     (((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init) 
                                       << 1U) & ((IData)(pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__U0__Y) 
                                                 << 3U))) 
                                    | ((0xfffffff8U 
                                        & (((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init) 
                                            << 2U) 
                                           & ((IData)(pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__U0__Y) 
                                              << 3U))) 
                                       | (((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init) 
                                           & (IData)(pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__U0__Y)) 
                                          << 3U)))) 
                                | (((0x7ffffffcU & 
                                     (((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init) 
                                       >> 1U) & ((IData)(pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__U0__Y) 
                                                 << 2U))) 
                                    | ((0xfffffffcU 
                                        & ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init) 
                                           & ((IData)(pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__U0__Y) 
                                              << 2U))) 
                                       | ((0xfffffffcU 
                                           & (((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init) 
                                               << 1U) 
                                              & ((IData)(pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__U0__Y) 
                                                 << 2U))) 
                                          | (((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init) 
                                              & (IData)(pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__U0__Y)) 
                                             << 2U)))) 
                                   | (((0x3ffffffeU 
                                        & (((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init) 
                                            >> 2U) 
                                           & ((IData)(pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__U0__Y) 
                                              << 1U))) 
                                       | ((0x7ffffffeU 
                                           & (((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init) 
                                               >> 1U) 
                                              & ((IData)(pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__U0__Y) 
                                                 << 1U))) 
                                          | ((0xfffffffeU 
                                              & ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init) 
                                                 & ((IData)(pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__U0__Y) 
                                                    << 1U))) 
                                             | (((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init) 
                                                 & (IData)(pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__U0__Y)) 
                                                << 1U)))) 
                                      | ((((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init) 
                                           >> 3U) & (IData)(pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__U0__Y)) 
                                         | ((((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init) 
                                              >> 2U) 
                                             & (IData)(pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__U0__Y)) 
                                            | ((((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init) 
                                                 >> 1U) 
                                                & (IData)(pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__U0__Y)) 
                                               | ((IData)(vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init) 
                                                  & (IData)(pla_testbench__DOT__U0__DOT__U1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__U0__Y))))))));
    vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U2__sel[3U] 
        = vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber4
        [3U];
    vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U2__sel[2U] 
        = vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber4
        [2U];
    vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U2__sel[1U] 
        = vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber4
        [1U];
    vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U2__sel[0U] 
        = vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber4
        [0U];
    vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U1__sel[3U] 
        = vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber3
        [3U];
    vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U1__sel[2U] 
        = vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber3
        [2U];
    vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U1__sel[1U] 
        = vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber3
        [1U];
    vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U1__sel[0U] 
        = vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber3
        [0U];
}

VL_ATTR_COLD void Vpla_testbench___024root___eval_stl(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vpla_testbench___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpla_testbench___024root___dump_triggers__ico(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpla_testbench___024root___dump_triggers__act(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpla_testbench___024root___dump_triggers__nba(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpla_testbench___024root___ctor_var_reset(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->btns_4bits_tri_i = VL_RAND_RESET_I(4);
    vlSelf->leds_4bits_tri_o = VL_RAND_RESET_I(4);
    vlSelf->clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->pla_testbench__DOT__andSel[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->pla_testbench__DOT__orSel[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber4[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->pla_testbench__DOT____Vcellinp__U0____pinNumber3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U1__sel[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U2__sel[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init = VL_RAND_RESET_I(8);
    vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init = VL_RAND_RESET_I(8);
    vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init = VL_RAND_RESET_I(8);
    vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init = VL_RAND_RESET_I(8);
    vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init = VL_RAND_RESET_I(4);
    vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init = VL_RAND_RESET_I(4);
    vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init = VL_RAND_RESET_I(4);
    vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
}

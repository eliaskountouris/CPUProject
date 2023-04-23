// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__sel[0U] = 1U;
    vlSelf->top__DOT__sel[1U] = 2U;
    vlSelf->top__DOT__sel[2U] = 3U;
    vlSelf->top__DOT__sel[3U] = 4U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("../source/PAL/top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT____Vcellinp__U3____pinNumber3[3U] 
        = vlSelf->top__DOT__sel[3U];
    vlSelf->top__DOT____Vcellinp__U3____pinNumber3[2U] 
        = vlSelf->top__DOT__sel[2U];
    vlSelf->top__DOT____Vcellinp__U3____pinNumber3[1U] 
        = vlSelf->top__DOT__sel[1U];
    vlSelf->top__DOT____Vcellinp__U3____pinNumber3[0U] 
        = vlSelf->top__DOT__sel[0U];
    vlSelf->leds_4bits_tri_o = ((8U & ((0xfffffff8U 
                                        & ((IData)(vlSelf->btns_4bits_tri_i) 
                                           & ((vlSelf->top__DOT____Vcellinp__U3____pinNumber3
                                               [3U] 
                                               & (IData)(vlSelf->btns_4bits_tri_i)) 
                                              << 1U))) 
                                       | ((0xfffffff8U 
                                           & ((((~ 
                                                 ((IData)(vlSelf->btns_4bits_tri_i) 
                                                  >> 3U)) 
                                                << 3U) 
                                               | (0xfffffff8U 
                                                  & (vlSelf->top__DOT____Vcellinp__U3____pinNumber3
                                                     [3U] 
                                                     << 2U))) 
                                              & ((IData)(vlSelf->btns_4bits_tri_i) 
                                                 << 2U))) 
                                          | ((((~ ((IData)(vlSelf->btns_4bits_tri_i) 
                                                   >> 3U)) 
                                               | vlSelf->top__DOT____Vcellinp__U3____pinNumber3
                                               [3U]) 
                                              & (IData)(vlSelf->btns_4bits_tri_i)) 
                                             << 3U)))) 
                                | ((4U & ((0x7ffffffcU 
                                           & (((IData)(vlSelf->btns_4bits_tri_i) 
                                               >> 1U) 
                                              & (vlSelf->top__DOT____Vcellinp__U3____pinNumber3
                                                 [2U] 
                                                 & (IData)(vlSelf->btns_4bits_tri_i)))) 
                                          | ((0xfffffffcU 
                                              & ((((~ 
                                                    ((IData)(vlSelf->btns_4bits_tri_i) 
                                                     >> 3U)) 
                                                   << 2U) 
                                                  | (0xfffffffcU 
                                                     & (vlSelf->top__DOT____Vcellinp__U3____pinNumber3
                                                        [2U] 
                                                        << 1U))) 
                                                 & ((IData)(vlSelf->btns_4bits_tri_i) 
                                                    << 1U))) 
                                             | (0x7ffffffcU 
                                                & (((IData)(vlSelf->btns_4bits_tri_i) 
                                                    >> 1U) 
                                                   & ((vlSelf->top__DOT____Vcellinp__U3____pinNumber3
                                                       [2U] 
                                                       & (IData)(vlSelf->btns_4bits_tri_i)) 
                                                      << 2U)))))) 
                                   | ((2U & ((0x3ffffffeU 
                                              & (((IData)(vlSelf->btns_4bits_tri_i) 
                                                  >> 2U) 
                                                 & ((vlSelf->top__DOT____Vcellinp__U3____pinNumber3
                                                     [1U] 
                                                     & (IData)(vlSelf->btns_4bits_tri_i)) 
                                                    >> 1U))) 
                                             | ((0x3ffffffeU 
                                                 & (((IData)(vlSelf->btns_4bits_tri_i) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT____Vcellinp__U3____pinNumber3
                                                       [1U] 
                                                       & (IData)(vlSelf->btns_4bits_tri_i)))) 
                                                | ((((~ 
                                                      ((IData)(vlSelf->btns_4bits_tri_i) 
                                                       >> 3U)) 
                                                     | vlSelf->top__DOT____Vcellinp__U3____pinNumber3
                                                     [1U]) 
                                                    & (IData)(vlSelf->btns_4bits_tri_i)) 
                                                   << 1U)))) 
                                      | (IData)((((IData)(vlSelf->btns_4bits_tri_i) 
                                                  >> 3U) 
                                                 & (((vlSelf->top__DOT____Vcellinp__U3____pinNumber3
                                                      [0U] 
                                                      & (IData)(vlSelf->btns_4bits_tri_i)) 
                                                     >> 2U) 
                                                    | (((vlSelf->top__DOT____Vcellinp__U3____pinNumber3
                                                         [0U] 
                                                         & (IData)(vlSelf->btns_4bits_tri_i)) 
                                                        >> 1U) 
                                                       | (vlSelf->top__DOT____Vcellinp__U3____pinNumber3
                                                          [0U] 
                                                          & (IData)(vlSelf->btns_4bits_tri_i)))))))));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->btns_4bits_tri_i = VL_RAND_RESET_I(4);
    vlSelf->leds_4bits_tri_o = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__sel[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT____Vcellinp__U3____pinNumber3[__Vi0] = VL_RAND_RESET_I(3);
    }
}

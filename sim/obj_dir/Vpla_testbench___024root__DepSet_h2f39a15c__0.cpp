// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpla_testbench.h for the primary calling header

#include "verilated.h"

#include "Vpla_testbench___024root.h"

VL_INLINE_OPT void Vpla_testbench___024root___ico_sequent__TOP__0(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___ico_sequent__TOP__0\n"); );
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
}

void Vpla_testbench___024root___eval_ico(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vpla_testbench___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vpla_testbench___024root___eval_act(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vpla_testbench___024root___nba_sequent__TOP__0(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___nba_sequent__TOP__0\n"); );
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
    if (vlSelf->clk) {
        vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init 
            = (0xfU & vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U2__sel
               [3U]);
        vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init 
            = (0xfU & vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U2__sel
               [2U]);
        vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init 
            = (0xfU & vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U2__sel
               [1U]);
        vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init 
            = (0xfU & vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U2__sel
               [0U]);
        vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init 
            = (0xffU & vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U1__sel
               [3U]);
        vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init 
            = (0xffU & vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U1__sel
               [2U]);
        vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init 
            = (0xffU & vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U1__sel
               [1U]);
        vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init 
            = (0xffU & vlSelf->pla_testbench__DOT__U0__DOT____Vcellinp__U1__sel
               [0U]);
    } else {
        vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init = 3U;
        vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init = 2U;
        vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init = 1U;
        vlSelf->pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init = 0U;
        vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init = 3U;
        vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init = 2U;
        vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init = 1U;
        vlSelf->pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init = 0U;
    }
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
}

void Vpla_testbench___024root___eval_nba(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vpla_testbench___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vpla_testbench___024root___eval_triggers__ico(Vpla_testbench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpla_testbench___024root___dump_triggers__ico(Vpla_testbench___024root* vlSelf);
#endif  // VL_DEBUG
void Vpla_testbench___024root___eval_triggers__act(Vpla_testbench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpla_testbench___024root___dump_triggers__act(Vpla_testbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpla_testbench___024root___dump_triggers__nba(Vpla_testbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vpla_testbench___024root___eval(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vpla_testbench___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vpla_testbench___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("../source/PLA/pla_testbench.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vpla_testbench___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vpla_testbench___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vpla_testbench___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../source/PLA/pla_testbench.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vpla_testbench___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vpla_testbench___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../source/PLA/pla_testbench.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vpla_testbench___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vpla_testbench___024root___eval_debug_assertions(Vpla_testbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpla_testbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpla_testbench___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->btns_4bits_tri_i & 0xf0U))) {
        Verilated::overWidthError("btns_4bits_tri_i");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG

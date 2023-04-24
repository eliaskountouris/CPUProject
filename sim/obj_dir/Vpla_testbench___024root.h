// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpla_testbench.h for the primary calling header

#ifndef VERILATED_VPLA_TESTBENCH___024ROOT_H_
#define VERILATED_VPLA_TESTBENCH___024ROOT_H_  // guard

#include "verilated.h"

class Vpla_testbench__Syms;

class Vpla_testbench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(btns_4bits_tri_i,3,0);
    VL_OUT8(leds_4bits_tri_o,3,0);
    CData/*7:0*/ pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init;
    CData/*7:0*/ pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init;
    CData/*7:0*/ pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init;
    CData/*7:0*/ pla_testbench__DOT__U0__DOT__U1__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init;
    CData/*3:0*/ pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__0__KET____DOT__U0__DOT__init;
    CData/*3:0*/ pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__1__KET____DOT__U0__DOT__init;
    CData/*3:0*/ pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__2__KET____DOT__U0__DOT__init;
    CData/*3:0*/ pla_testbench__DOT__U0__DOT__U2__DOT__genblk1__BRA__3__KET____DOT__U0__DOT__init;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 4> pla_testbench__DOT__andSel;
    VlUnpacked<CData/*3:0*/, 4> pla_testbench__DOT__orSel;
    VlUnpacked<CData/*3:0*/, 4> pla_testbench__DOT____Vcellinp__U0____pinNumber4;
    VlUnpacked<CData/*7:0*/, 4> pla_testbench__DOT____Vcellinp__U0____pinNumber3;
    VlUnpacked<CData/*7:0*/, 4> pla_testbench__DOT__U0__DOT____Vcellinp__U1__sel;
    VlUnpacked<CData/*3:0*/, 4> pla_testbench__DOT__U0__DOT____Vcellinp__U2__sel;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpla_testbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpla_testbench___024root(Vpla_testbench__Syms* symsp, const char* v__name);
    ~Vpla_testbench___024root();
    VL_UNCOPYABLE(Vpla_testbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

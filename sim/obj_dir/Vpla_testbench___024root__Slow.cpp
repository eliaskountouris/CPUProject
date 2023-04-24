// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpla_testbench.h for the primary calling header

#include "verilated.h"

#include "Vpla_testbench__Syms.h"
#include "Vpla_testbench___024root.h"

void Vpla_testbench___024root___ctor_var_reset(Vpla_testbench___024root* vlSelf);

Vpla_testbench___024root::Vpla_testbench___024root(Vpla_testbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpla_testbench___024root___ctor_var_reset(this);
}

void Vpla_testbench___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpla_testbench___024root::~Vpla_testbench___024root() {
}

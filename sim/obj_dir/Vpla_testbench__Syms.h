// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPLA_TESTBENCH__SYMS_H_
#define VERILATED_VPLA_TESTBENCH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vpla_testbench.h"

// INCLUDE MODULE CLASSES
#include "Vpla_testbench___024root.h"

// SYMS CLASS (contains all model state)
class Vpla_testbench__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpla_testbench* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vpla_testbench___024root       TOP;

    // CONSTRUCTORS
    Vpla_testbench__Syms(VerilatedContext* contextp, const char* namep, Vpla_testbench* modelp);
    ~Vpla_testbench__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

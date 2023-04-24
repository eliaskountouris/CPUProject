// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpla_testbench.h"
#include "Vpla_testbench__Syms.h"

//============================================================
// Constructors

Vpla_testbench::Vpla_testbench(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpla_testbench__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , btns_4bits_tri_i{vlSymsp->TOP.btns_4bits_tri_i}
    , leds_4bits_tri_o{vlSymsp->TOP.leds_4bits_tri_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpla_testbench::Vpla_testbench(const char* _vcname__)
    : Vpla_testbench(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpla_testbench::~Vpla_testbench() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpla_testbench___024root___eval_debug_assertions(Vpla_testbench___024root* vlSelf);
#endif  // VL_DEBUG
void Vpla_testbench___024root___eval_static(Vpla_testbench___024root* vlSelf);
void Vpla_testbench___024root___eval_initial(Vpla_testbench___024root* vlSelf);
void Vpla_testbench___024root___eval_settle(Vpla_testbench___024root* vlSelf);
void Vpla_testbench___024root___eval(Vpla_testbench___024root* vlSelf);

void Vpla_testbench::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpla_testbench::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpla_testbench___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpla_testbench___024root___eval_static(&(vlSymsp->TOP));
        Vpla_testbench___024root___eval_initial(&(vlSymsp->TOP));
        Vpla_testbench___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpla_testbench___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpla_testbench::eventsPending() { return false; }

uint64_t Vpla_testbench::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpla_testbench::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpla_testbench___024root___eval_final(Vpla_testbench___024root* vlSelf);

VL_ATTR_COLD void Vpla_testbench::final() {
    Vpla_testbench___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpla_testbench::hierName() const { return vlSymsp->name(); }
const char* Vpla_testbench::modelName() const { return "Vpla_testbench"; }
unsigned Vpla_testbench::threads() const { return 1; }

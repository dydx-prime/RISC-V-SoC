// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSOC.h for the primary calling header

#ifndef VERILATED_VSOC___024ROOT_H_
#define VERILATED_VSOC___024ROOT_H_  // guard

#include "verilated.h"


class VSOC__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSOC___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(RESET,0,0);
    VL_OUT8(LEDS,4,0);
    VL_IN8(RXD,0,0);
    VL_OUT8(TXD,0,0);
    CData/*3:0*/ SOC__DOT__mem_wmask;
    CData/*3:0*/ SOC__DOT____Vcellinp__RAM__mem_wmask;
    CData/*0:0*/ SOC__DOT__uart_valid;
    CData/*0:0*/ SOC__DOT__uart_ready;
    CData/*0:0*/ SOC__DOT__CPU__DOT__LT;
    CData/*0:0*/ SOC__DOT__CPU__DOT__takeBranch;
    CData/*7:0*/ SOC__DOT__CPU__DOT__LOAD_byte;
    CData/*0:0*/ SOC__DOT__CPU__DOT__LOAD_sign;
    CData/*2:0*/ SOC__DOT__CPU__DOT__state;
    CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_h14078eb5__0;
    CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_h1407909f__0;
    CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_h14079299__0;
    CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_h14079483__0;
    CData/*7:0*/ SOC__DOT__UART__DOT__cnt;
    CData/*0:0*/ SOC__DOT__CW__DOT__slow_CLK;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__SOC__DOT__CW__DOT__slow_CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ SOC__DOT__CPU__DOT__LOAD_halfword;
    SData/*9:0*/ SOC__DOT__UART__DOT__data;
    IData/*31:0*/ SOC__DOT__mem_addr;
    IData/*31:0*/ SOC__DOT__mem_rdata;
    IData/*31:0*/ SOC__DOT__mem_wdata;
    IData/*31:0*/ SOC__DOT__RAM_rdata;
    IData/*31:0*/ SOC__DOT__CPU__DOT__PC;
    IData/*31:0*/ SOC__DOT__CPU__DOT__instr;
    IData/*31:0*/ SOC__DOT__CPU__DOT__Uimm;
    IData/*31:0*/ SOC__DOT__CPU__DOT__rs1;
    IData/*31:0*/ SOC__DOT__CPU__DOT__rs2;
    IData/*31:0*/ SOC__DOT__CPU__DOT__aluIn2;
    IData/*31:0*/ SOC__DOT__CPU__DOT__aluPlus;
    IData/*31:0*/ SOC__DOT__CPU__DOT__PCplusImm;
    IData/*31:0*/ SOC__DOT__CPU__DOT__PCplus4;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ SOC__DOT__CPU__DOT__aluMinus;
    QData/*32:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    VlUnpacked<IData/*31:0*/, 32> SOC__DOT__CPU__DOT__RegisterBank;
    VlUnpacked<IData/*31:0*/, 3072> SOC__DOT__RAM__DOT__MEM;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSOC__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VSOC___024root(VSOC__Syms* symsp, const char* namep);
    ~VSOC___024root();
    VL_UNCOPYABLE(VSOC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

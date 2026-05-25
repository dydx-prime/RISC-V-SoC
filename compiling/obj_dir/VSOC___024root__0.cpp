// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSOC.h for the primary calling header

#include "VSOC__pch.h"

void VSOC___024root___eval_triggers_vec__act(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_triggers_vec__act\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.CLK) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__CLK__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.SOC__DOT__CW__DOT__slow_CLK) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SOC__DOT__CW__DOT__slow_CLK__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__SOC__DOT__CW__DOT__slow_CLK__0 
        = vlSelfRef.SOC__DOT__CW__DOT__slow_CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__0 = vlSelfRef.CLK;
}

bool VSOC___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*0:0*/, 64> VSOC__ConstPool__TABLE_h381f83e2_0;

void VSOC___024root___nba_sequent__TOP__0(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___nba_sequent__TOP__0\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ SOC__DOT__CPU__DOT__loadstore_addr;
    SOC__DOT__CPU__DOT__loadstore_addr = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vdly__SOC__DOT__CPU__DOT__state;
    __Vdly__SOC__DOT__CPU__DOT__state = 0;
    IData/*31:0*/ __Vdly__SOC__DOT__CPU__DOT__instr;
    __Vdly__SOC__DOT__CPU__DOT__instr = 0;
    CData/*0:0*/ __Vdly__SOC__DOT__uart_ready;
    __Vdly__SOC__DOT__uart_ready = 0;
    CData/*7:0*/ __Vdly__SOC__DOT__UART__DOT__cnt;
    __Vdly__SOC__DOT__UART__DOT__cnt = 0;
    IData/*31:0*/ __VdlyVal__SOC__DOT__CPU__DOT__RegisterBank__v0;
    __VdlyVal__SOC__DOT__CPU__DOT__RegisterBank__v0 = 0;
    CData/*4:0*/ __VdlyDim0__SOC__DOT__CPU__DOT__RegisterBank__v0;
    __VdlyDim0__SOC__DOT__CPU__DOT__RegisterBank__v0 = 0;
    CData/*0:0*/ __VdlySet__SOC__DOT__CPU__DOT__RegisterBank__v0;
    __VdlySet__SOC__DOT__CPU__DOT__RegisterBank__v0 = 0;
    CData/*7:0*/ __VdlyVal__SOC__DOT__RAM__DOT__MEM__v0;
    __VdlyVal__SOC__DOT__RAM__DOT__MEM__v0 = 0;
    SData/*11:0*/ __VdlyDim0__SOC__DOT__RAM__DOT__MEM__v0;
    __VdlyDim0__SOC__DOT__RAM__DOT__MEM__v0 = 0;
    CData/*0:0*/ __VdlySet__SOC__DOT__RAM__DOT__MEM__v0;
    __VdlySet__SOC__DOT__RAM__DOT__MEM__v0 = 0;
    CData/*7:0*/ __VdlyVal__SOC__DOT__RAM__DOT__MEM__v1;
    __VdlyVal__SOC__DOT__RAM__DOT__MEM__v1 = 0;
    SData/*11:0*/ __VdlyDim0__SOC__DOT__RAM__DOT__MEM__v1;
    __VdlyDim0__SOC__DOT__RAM__DOT__MEM__v1 = 0;
    CData/*0:0*/ __VdlySet__SOC__DOT__RAM__DOT__MEM__v1;
    __VdlySet__SOC__DOT__RAM__DOT__MEM__v1 = 0;
    CData/*7:0*/ __VdlyVal__SOC__DOT__RAM__DOT__MEM__v2;
    __VdlyVal__SOC__DOT__RAM__DOT__MEM__v2 = 0;
    SData/*11:0*/ __VdlyDim0__SOC__DOT__RAM__DOT__MEM__v2;
    __VdlyDim0__SOC__DOT__RAM__DOT__MEM__v2 = 0;
    CData/*0:0*/ __VdlySet__SOC__DOT__RAM__DOT__MEM__v2;
    __VdlySet__SOC__DOT__RAM__DOT__MEM__v2 = 0;
    CData/*7:0*/ __VdlyVal__SOC__DOT__RAM__DOT__MEM__v3;
    __VdlyVal__SOC__DOT__RAM__DOT__MEM__v3 = 0;
    SData/*11:0*/ __VdlyDim0__SOC__DOT__RAM__DOT__MEM__v3;
    __VdlyDim0__SOC__DOT__RAM__DOT__MEM__v3 = 0;
    CData/*0:0*/ __VdlySet__SOC__DOT__RAM__DOT__MEM__v3;
    __VdlySet__SOC__DOT__RAM__DOT__MEM__v3 = 0;
    // Body
    if (VL_UNLIKELY((vlSelfRef.SOC__DOT__uart_valid))) {
        VL_WRITEF_NX("%c",1, '#',8,(0x000000ffU & vlSelfRef.SOC__DOT__mem_wdata));
        VL_FFLUSH_I(0x80000001U);
    }
    __VdlySet__SOC__DOT__RAM__DOT__MEM__v0 = 0U;
    __VdlySet__SOC__DOT__RAM__DOT__MEM__v1 = 0U;
    __VdlySet__SOC__DOT__RAM__DOT__MEM__v2 = 0U;
    __VdlySet__SOC__DOT__RAM__DOT__MEM__v3 = 0U;
    __VdlySet__SOC__DOT__CPU__DOT__RegisterBank__v0 = 0U;
    __Vdly__SOC__DOT__CPU__DOT__state = vlSelfRef.SOC__DOT__CPU__DOT__state;
    __Vdly__SOC__DOT__CPU__DOT__instr = vlSelfRef.SOC__DOT__CPU__DOT__instr;
    __Vdly__SOC__DOT__UART__DOT__cnt = vlSelfRef.SOC__DOT__UART__DOT__cnt;
    __Vdly__SOC__DOT__uart_ready = vlSelfRef.SOC__DOT__uart_ready;
    if ((1U & (IData)(vlSelfRef.SOC__DOT____Vcellinp__RAM__mem_wmask))) {
        vlSelfRef.SOC__DOT__RAM__DOT____Vlvbound_h14079483__0 
            = (0x000000ffU & vlSelfRef.SOC__DOT__mem_wdata);
        if ((0x0bffU >= (0x00000fffU & (vlSelfRef.SOC__DOT__mem_addr 
                                        >> 2U)))) {
            __VdlyVal__SOC__DOT__RAM__DOT__MEM__v0 
                = vlSelfRef.SOC__DOT__RAM__DOT____Vlvbound_h14079483__0;
            __VdlyDim0__SOC__DOT__RAM__DOT__MEM__v0 
                = (0x00000fffU & (vlSelfRef.SOC__DOT__mem_addr 
                                  >> 2U));
            __VdlySet__SOC__DOT__RAM__DOT__MEM__v0 = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.SOC__DOT____Vcellinp__RAM__mem_wmask))) {
        vlSelfRef.SOC__DOT__RAM__DOT____Vlvbound_h14079299__0 
            = (0x000000ffU & (vlSelfRef.SOC__DOT__mem_wdata 
                              >> 8U));
        if ((0x0bffU >= (0x00000fffU & (vlSelfRef.SOC__DOT__mem_addr 
                                        >> 2U)))) {
            __VdlyVal__SOC__DOT__RAM__DOT__MEM__v1 
                = vlSelfRef.SOC__DOT__RAM__DOT____Vlvbound_h14079299__0;
            __VdlyDim0__SOC__DOT__RAM__DOT__MEM__v1 
                = (0x00000fffU & (vlSelfRef.SOC__DOT__mem_addr 
                                  >> 2U));
            __VdlySet__SOC__DOT__RAM__DOT__MEM__v1 = 1U;
        }
    }
    if ((4U & (IData)(vlSelfRef.SOC__DOT____Vcellinp__RAM__mem_wmask))) {
        vlSelfRef.SOC__DOT__RAM__DOT____Vlvbound_h1407909f__0 
            = (0x000000ffU & (vlSelfRef.SOC__DOT__mem_wdata 
                              >> 0x10U));
        if ((0x0bffU >= (0x00000fffU & (vlSelfRef.SOC__DOT__mem_addr 
                                        >> 2U)))) {
            __VdlyVal__SOC__DOT__RAM__DOT__MEM__v2 
                = vlSelfRef.SOC__DOT__RAM__DOT____Vlvbound_h1407909f__0;
            __VdlyDim0__SOC__DOT__RAM__DOT__MEM__v2 
                = (0x00000fffU & (vlSelfRef.SOC__DOT__mem_addr 
                                  >> 2U));
            __VdlySet__SOC__DOT__RAM__DOT__MEM__v2 = 1U;
        }
    }
    if ((8U & (IData)(vlSelfRef.SOC__DOT____Vcellinp__RAM__mem_wmask))) {
        vlSelfRef.SOC__DOT__RAM__DOT____Vlvbound_h14078eb5__0 
            = (vlSelfRef.SOC__DOT__mem_wdata >> 0x18U);
        if ((0x0bffU >= (0x00000fffU & (vlSelfRef.SOC__DOT__mem_addr 
                                        >> 2U)))) {
            __VdlyVal__SOC__DOT__RAM__DOT__MEM__v3 
                = vlSelfRef.SOC__DOT__RAM__DOT____Vlvbound_h14078eb5__0;
            __VdlyDim0__SOC__DOT__RAM__DOT__MEM__v3 
                = (0x00000fffU & (vlSelfRef.SOC__DOT__mem_addr 
                                  >> 2U));
            __VdlySet__SOC__DOT__RAM__DOT__MEM__v3 = 1U;
        }
    }
    if ((IData)((((IData)(vlSelfRef.SOC__DOT__UART__DOT__cnt) 
                  >> 7U) & (~ (0U != (IData)(vlSelfRef.SOC__DOT__UART__DOT__data)))))) {
        __Vdly__SOC__DOT__uart_ready = 1U;
    } else if (((IData)(vlSelfRef.SOC__DOT__uart_valid) 
                & (IData)(vlSelfRef.SOC__DOT__uart_ready))) {
        __Vdly__SOC__DOT__uart_ready = 0U;
    }
    __Vdly__SOC__DOT__UART__DOT__cnt = (((IData)(vlSelfRef.SOC__DOT__uart_ready) 
                                         | ((IData)(vlSelfRef.SOC__DOT__UART__DOT__cnt) 
                                            >> 7U))
                                         ? 0x00000068U
                                         : (0x000000ffU 
                                            & ((IData)(vlSelfRef.SOC__DOT__UART__DOT__cnt) 
                                               - (IData)(1U))));
    if ((0x00000080U & (IData)(vlSelfRef.SOC__DOT__UART__DOT__cnt))) {
        vlSelfRef.SOC__DOT__UART__DOT__data = (0x000001ffU 
                                               & ((IData)(vlSelfRef.SOC__DOT__UART__DOT__data) 
                                                  >> 1U));
    } else if (((IData)(vlSelfRef.SOC__DOT__uart_valid) 
                & (IData)(vlSelfRef.SOC__DOT__uart_ready))) {
        vlSelfRef.SOC__DOT__UART__DOT__data = (0x00000200U 
                                               | (0x000001feU 
                                                  & (vlSelfRef.SOC__DOT__CPU__DOT__rs2 
                                                     << 1U)));
    }
    if ((IData)(((0x00400004U == (0x00400004U & vlSelfRef.SOC__DOT__mem_addr)) 
                 & (0U != (IData)(vlSelfRef.SOC__DOT__mem_wmask))))) {
        vlSelfRef.LEDS = (0x0000001fU & vlSelfRef.SOC__DOT__mem_wdata);
    }
    if (((~ (vlSelfRef.SOC__DOT__mem_addr >> 0x00000016U)) 
         & ((0U == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__state)) 
            | (4U == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__state))))) {
        vlSelfRef.SOC__DOT__RAM_rdata = ((0x0bffU >= 
                                          (0x00000fffU 
                                           & (vlSelfRef.SOC__DOT__mem_addr 
                                              >> 2U)))
                                          ? vlSelfRef.SOC__DOT__RAM__DOT__MEM
                                         [(0x00000fffU 
                                           & (vlSelfRef.SOC__DOT__mem_addr 
                                              >> 2U))]
                                          : 0U);
    }
    vlSelfRef.SOC__DOT__UART__DOT__cnt = __Vdly__SOC__DOT__UART__DOT__cnt;
    vlSelfRef.SOC__DOT__uart_ready = __Vdly__SOC__DOT__uart_ready;
    if (__VdlySet__SOC__DOT__RAM__DOT__MEM__v0) {
        vlSelfRef.SOC__DOT__RAM__DOT__MEM[__VdlyDim0__SOC__DOT__RAM__DOT__MEM__v0] 
            = ((0xffffff00U & vlSelfRef.SOC__DOT__RAM__DOT__MEM
                [__VdlyDim0__SOC__DOT__RAM__DOT__MEM__v0]) 
               | (IData)(__VdlyVal__SOC__DOT__RAM__DOT__MEM__v0));
    }
    if (__VdlySet__SOC__DOT__RAM__DOT__MEM__v1) {
        vlSelfRef.SOC__DOT__RAM__DOT__MEM[__VdlyDim0__SOC__DOT__RAM__DOT__MEM__v1] 
            = ((0xffff00ffU & vlSelfRef.SOC__DOT__RAM__DOT__MEM
                [__VdlyDim0__SOC__DOT__RAM__DOT__MEM__v1]) 
               | ((IData)(__VdlyVal__SOC__DOT__RAM__DOT__MEM__v1) 
                  << 8U));
    }
    if (__VdlySet__SOC__DOT__RAM__DOT__MEM__v2) {
        vlSelfRef.SOC__DOT__RAM__DOT__MEM[__VdlyDim0__SOC__DOT__RAM__DOT__MEM__v2] 
            = ((0xff00ffffU & vlSelfRef.SOC__DOT__RAM__DOT__MEM
                [__VdlyDim0__SOC__DOT__RAM__DOT__MEM__v2]) 
               | ((IData)(__VdlyVal__SOC__DOT__RAM__DOT__MEM__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__SOC__DOT__RAM__DOT__MEM__v3) {
        vlSelfRef.SOC__DOT__RAM__DOT__MEM[__VdlyDim0__SOC__DOT__RAM__DOT__MEM__v3] 
            = ((0x00ffffffU & vlSelfRef.SOC__DOT__RAM__DOT__MEM
                [__VdlyDim0__SOC__DOT__RAM__DOT__MEM__v3]) 
               | ((IData)(__VdlyVal__SOC__DOT__RAM__DOT__MEM__v3) 
                  << 0x00000018U));
    }
    vlSelfRef.TXD = (1U & ((~ (0U != (IData)(vlSelfRef.SOC__DOT__UART__DOT__data))) 
                           | (IData)(vlSelfRef.SOC__DOT__UART__DOT__data)));
    if (vlSelfRef.RESET) {
        if ((((5U == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__state)) 
              | ((~ ((0x63U == (0x0000007fU & vlSelfRef.SOC__DOT__CPU__DOT__instr)) 
                     | (0x23U == (0x0000007fU & vlSelfRef.SOC__DOT__CPU__DOT__instr)))) 
                 & (3U == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__state)))) 
             & (0U != (0x0000001fU & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                      >> 7U))))) {
            __VdlyVal__SOC__DOT__CPU__DOT__RegisterBank__v0 
                = (((0x67U == (0x0000007fU & vlSelfRef.SOC__DOT__CPU__DOT__instr)) 
                    | (0x6fU == (0x0000007fU & vlSelfRef.SOC__DOT__CPU__DOT__instr)))
                    ? vlSelfRef.SOC__DOT__CPU__DOT__PCplus4
                    : ((0x37U == (0x0000007fU & vlSelfRef.SOC__DOT__CPU__DOT__instr))
                        ? vlSelfRef.SOC__DOT__CPU__DOT__Uimm
                        : ((0x17U == (0x0000007fU & vlSelfRef.SOC__DOT__CPU__DOT__instr))
                            ? vlSelfRef.SOC__DOT__CPU__DOT__PCplusImm
                            : ((3U == (0x0000007fU 
                                       & vlSelfRef.SOC__DOT__CPU__DOT__instr))
                                ? ((0U == (3U & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                 >> 0x0000000cU)))
                                    ? (((- (IData)((IData)(vlSelfRef.SOC__DOT__CPU__DOT__LOAD_sign))) 
                                        << 8U) | (IData)(vlSelfRef.SOC__DOT__CPU__DOT__LOAD_byte))
                                    : ((1U == (3U & 
                                               (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                >> 0x0000000cU)))
                                        ? (((- (IData)((IData)(vlSelfRef.SOC__DOT__CPU__DOT__LOAD_sign))) 
                                            << 0x00000010U) 
                                           | (IData)(vlSelfRef.SOC__DOT__CPU__DOT__LOAD_halfword))
                                        : vlSelfRef.SOC__DOT__mem_rdata))
                                : ((0x00004000U & vlSelfRef.SOC__DOT__CPU__DOT__instr)
                                    ? ((0x00002000U 
                                        & vlSelfRef.SOC__DOT__CPU__DOT__instr)
                                        ? ((0x00001000U 
                                            & vlSelfRef.SOC__DOT__CPU__DOT__instr)
                                            ? (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                               & vlSelfRef.SOC__DOT__CPU__DOT__aluIn2)
                                            : (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                               | vlSelfRef.SOC__DOT__CPU__DOT__aluIn2))
                                        : ((0x00001000U 
                                            & vlSelfRef.SOC__DOT__CPU__DOT__instr)
                                            ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                            : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                                    : ((0x00002000U 
                                        & vlSelfRef.SOC__DOT__CPU__DOT__instr)
                                        ? (1U & ((0x00001000U 
                                                  & vlSelfRef.SOC__DOT__CPU__DOT__instr)
                                                  ? (IData)(
                                                            (vlSelfRef.SOC__DOT__CPU__DOT__aluMinus 
                                                             >> 0x00000020U))
                                                  : (IData)(vlSelfRef.SOC__DOT__CPU__DOT__LT)))
                                        : ((0x00001000U 
                                            & vlSelfRef.SOC__DOT__CPU__DOT__instr)
                                            ? (((((
                                                   (((2U 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                   >> 1U)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((IData)(
                                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                    >> 2U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                     >> 3U)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((IData)(
                                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                    >> 4U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                     >> 5U)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(
                                                                    (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                     >> 6U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                      >> 7U)))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & ((IData)(
                                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                    >> 8U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                     >> 9U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                      >> 0x0000000aU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                       >> 0x0000000bU)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                      >> 0x0000000cU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                       >> 0x0000000dU)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((IData)(
                                                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                       >> 0x0000000eU)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                        >> 0x0000000fU)))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & ((IData)(
                                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                    >> 0x00000010U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                     >> 0x00000011U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                      >> 0x00000012U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                       >> 0x00000013U)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                      >> 0x00000014U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                       >> 0x00000015U)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((IData)(
                                                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                       >> 0x00000016U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                        >> 0x00000017U)))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & ((IData)(
                                                                    (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                     >> 0x00000018U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                      >> 0x00000019U)))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & ((IData)(
                                                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                       >> 0x0000001aU)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                        >> 0x0000001bU)))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & ((IData)(
                                                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                       >> 0x0000001cU)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                        >> 0x0000001dU)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((IData)(
                                                                       (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                        >> 0x0000001eU)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                         >> 0x0000001fU))))))))
                                            : ((IData)(
                                                       (0x40000020U 
                                                        == 
                                                        (0x40000020U 
                                                         & vlSelfRef.SOC__DOT__CPU__DOT__instr)))
                                                ? (IData)(vlSelfRef.SOC__DOT__CPU__DOT__aluMinus)
                                                : vlSelfRef.SOC__DOT__CPU__DOT__aluPlus))))))));
            __VdlyDim0__SOC__DOT__CPU__DOT__RegisterBank__v0 
                = (0x0000001fU & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                  >> 7U));
            __VdlySet__SOC__DOT__CPU__DOT__RegisterBank__v0 = 1U;
        }
        if ((0U == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__state))) {
            __Vdly__SOC__DOT__CPU__DOT__state = 1U;
        } else if ((1U == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__state))) {
            __Vdly__SOC__DOT__CPU__DOT__instr = vlSelfRef.SOC__DOT__mem_rdata;
            __Vdly__SOC__DOT__CPU__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__state))) {
            vlSelfRef.SOC__DOT__CPU__DOT__rs1 = vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank
                [(0x0000001fU & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                 >> 0x0000000fU))];
            __Vdly__SOC__DOT__CPU__DOT__state = 3U;
            vlSelfRef.SOC__DOT__CPU__DOT__rs2 = vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank
                [(0x0000001fU & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                 >> 0x00000014U))];
        } else if ((3U == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__state))) {
            if ((0x73U != (0x0000007fU & vlSelfRef.SOC__DOT__CPU__DOT__instr))) {
                vlSelfRef.SOC__DOT__CPU__DOT__PC = 
                    (((0x6fU == (0x0000007fU & vlSelfRef.SOC__DOT__CPU__DOT__instr)) 
                      | ((IData)(vlSelfRef.SOC__DOT__CPU__DOT__takeBranch) 
                         & (0x63U == (0x0000007fU & vlSelfRef.SOC__DOT__CPU__DOT__instr))))
                      ? vlSelfRef.SOC__DOT__CPU__DOT__PCplusImm
                      : ((0x67U == (0x0000007fU & vlSelfRef.SOC__DOT__CPU__DOT__instr))
                          ? (0xfffffffeU & vlSelfRef.SOC__DOT__CPU__DOT__aluPlus)
                          : vlSelfRef.SOC__DOT__CPU__DOT__PCplus4));
            }
            __Vdly__SOC__DOT__CPU__DOT__state = ((3U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.SOC__DOT__CPU__DOT__instr))
                                                  ? 4U
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.SOC__DOT__CPU__DOT__instr))
                                                   ? 6U
                                                   : 0U));
            if (VL_UNLIKELY(((0x73U == (0x0000007fU 
                                        & vlSelfRef.SOC__DOT__CPU__DOT__instr))))) {
                VL_FINISH_MT("RTL/SOC.v", 318, "");
            }
        } else if ((4U == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__state))) {
            __Vdly__SOC__DOT__CPU__DOT__state = 5U;
        } else if ((5U == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__state))) {
            __Vdly__SOC__DOT__CPU__DOT__state = 0U;
        } else if ((6U == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__state))) {
            __Vdly__SOC__DOT__CPU__DOT__state = 0U;
        }
    } else {
        vlSelfRef.SOC__DOT__CPU__DOT__PC = 0U;
        __Vdly__SOC__DOT__CPU__DOT__state = 0U;
    }
    if (__VdlySet__SOC__DOT__CPU__DOT__RegisterBank__v0) {
        vlSelfRef.SOC__DOT__CPU__DOT__RegisterBank[__VdlyDim0__SOC__DOT__CPU__DOT__RegisterBank__v0] 
            = __VdlyVal__SOC__DOT__CPU__DOT__RegisterBank__v0;
    }
    vlSelfRef.SOC__DOT__CPU__DOT__state = __Vdly__SOC__DOT__CPU__DOT__state;
    vlSelfRef.SOC__DOT__CPU__DOT__instr = __Vdly__SOC__DOT__CPU__DOT__instr;
    vlSelfRef.SOC__DOT__CPU__DOT__PCplus4 = ((IData)(4U) 
                                             + vlSelfRef.SOC__DOT__CPU__DOT__PC);
    vlSelfRef.SOC__DOT__CPU__DOT__Uimm = (0xfffff000U 
                                          & vlSelfRef.SOC__DOT__CPU__DOT__instr);
    vlSelfRef.SOC__DOT__CPU__DOT__PCplusImm = (vlSelfRef.SOC__DOT__CPU__DOT__PC 
                                               + ((8U 
                                                   & vlSelfRef.SOC__DOT__CPU__DOT__instr)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                                >> 0x0000001fU))) 
                                                    << 0x00000014U) 
                                                   | ((((0x000001feU 
                                                         & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                            >> 0x0000000bU)) 
                                                        | (1U 
                                                           & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                              >> 0x00000014U))) 
                                                       << 0x0000000bU) 
                                                      | (0x000007feU 
                                                         & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                            >> 0x00000014U))))
                                                   : 
                                                  ((0x00000010U 
                                                    & vlSelfRef.SOC__DOT__CPU__DOT__instr)
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelfRef.SOC__DOT__CPU__DOT__instr)
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                                 >> 0x0000001fU))) 
                                                     << 0x0000000cU) 
                                                    | ((0x00000800U 
                                                        & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                           << 4U)) 
                                                       | ((0x000007e0U 
                                                           & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                              >> 0x00000014U)) 
                                                          | (0x0000001eU 
                                                             & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                                >> 7U))))))));
    vlSelfRef.SOC__DOT__CPU__DOT__aluIn2 = (((0x33U 
                                              == (0x0000007fU 
                                                  & vlSelfRef.SOC__DOT__CPU__DOT__instr)) 
                                             | (0x63U 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.SOC__DOT__CPU__DOT__instr)))
                                             ? vlSelfRef.SOC__DOT__CPU__DOT__rs2
                                             : (((- (IData)(
                                                            (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                             >> 0x0000001fU))) 
                                                 << 0x0000000bU) 
                                                | (0x000007ffU 
                                                   & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                      >> 0x00000014U))));
    SOC__DOT__CPU__DOT__loadstore_addr = (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                          + (((- (IData)(
                                                         (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                          >> 0x0000001fU))) 
                                              << 0x0000000bU) 
                                             | (0x000007ffU 
                                                & ((0x23U 
                                                    == 
                                                    (0x0000007fU 
                                                     & vlSelfRef.SOC__DOT__CPU__DOT__instr))
                                                    ? 
                                                   ((0x000007e0U 
                                                     & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001fU 
                                                       & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                          >> 7U)))
                                                    : 
                                                   (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                    >> 0x00000014U)))));
    vlSelfRef.SOC__DOT__CPU__DOT__aluPlus = (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                             + vlSelfRef.SOC__DOT__CPU__DOT__aluIn2);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (0x00000001ffffffffULL 
                                                & VL_SHIFTRS_QQI(33,33,5, 
                                                                 (((QData)((IData)(
                                                                                ((vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000001fU) 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                                                >> 0x0000001eU)))) 
                                                                   << 0x00000020U) 
                                                                  | (QData)((IData)(
                                                                                ((1U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                                                >> 0x0000000cU)))
                                                                                 ? 
                                                                                ((((((((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 1U))) 
                                                                                << 6U) 
                                                                                | (((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 3U))) 
                                                                                << 4U)) 
                                                                                | ((((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 3U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 5U))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 5U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 7U))))) 
                                                                                << 0x00000018U) 
                                                                                | ((((((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 7U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 9U))) 
                                                                                << 6U) 
                                                                                | (((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 9U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000000bU))) 
                                                                                << 4U)) 
                                                                                | ((((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000000bU)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000000dU))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000000dU)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000000fU))))) 
                                                                                << 0x00000010U)) 
                                                                                | (((((((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000000fU)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000011U))) 
                                                                                << 6U) 
                                                                                | (((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000011U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000013U))) 
                                                                                << 4U)) 
                                                                                | ((((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000013U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000015U))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000015U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000017U))))) 
                                                                                << 8U) 
                                                                                | (((((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000017U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000019U))) 
                                                                                << 6U) 
                                                                                | (((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x00000019U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000001bU))) 
                                                                                << 4U)) 
                                                                                | ((((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000001bU)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000001dU))) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000001dU)) 
                                                                                | (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x0000001fU))))))
                                                                                 : vlSelfRef.SOC__DOT__CPU__DOT__rs1)))), 
                                                                 (0x0000001fU 
                                                                  & vlSelfRef.SOC__DOT__CPU__DOT__aluIn2)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                ^ vlSelfRef.SOC__DOT__CPU__DOT__aluIn2);
    vlSelfRef.SOC__DOT__CPU__DOT__aluMinus = (0x00000001ffffffffULL 
                                              & (1ULL 
                                                 + 
                                                 ((0x0000000100000000ULL 
                                                   | (QData)((IData)(
                                                                     (~ vlSelfRef.SOC__DOT__CPU__DOT__aluIn2)))) 
                                                  + (QData)((IData)(vlSelfRef.SOC__DOT__CPU__DOT__rs1)))));
    vlSelfRef.SOC__DOT__mem_wdata = ((((0x0000ff00U 
                                        & (((1U & SOC__DOT__CPU__DOT__loadstore_addr)
                                             ? vlSelfRef.SOC__DOT__CPU__DOT__rs2
                                             : ((2U 
                                                 & SOC__DOT__CPU__DOT__loadstore_addr)
                                                 ? 
                                                (vlSelfRef.SOC__DOT__CPU__DOT__rs2 
                                                 >> 8U)
                                                 : 
                                                (vlSelfRef.SOC__DOT__CPU__DOT__rs2 
                                                 >> 0x00000018U))) 
                                           << 8U)) 
                                       | (0x000000ffU 
                                          & ((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                              ? vlSelfRef.SOC__DOT__CPU__DOT__rs2
                                              : (vlSelfRef.SOC__DOT__CPU__DOT__rs2 
                                                 >> 0x00000010U)))) 
                                      << 0x00000010U) 
                                     | ((0x0000ff00U 
                                         & (((1U & SOC__DOT__CPU__DOT__loadstore_addr)
                                              ? vlSelfRef.SOC__DOT__CPU__DOT__rs2
                                              : (vlSelfRef.SOC__DOT__CPU__DOT__rs2 
                                                 >> 8U)) 
                                            << 8U)) 
                                        | (0x000000ffU 
                                           & vlSelfRef.SOC__DOT__CPU__DOT__rs2)));
    vlSelfRef.SOC__DOT__mem_wmask = (0x0000000fU & 
                                     (((0U == (3U & 
                                               (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                >> 0x0000000cU)))
                                        ? ((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                            ? ((1U 
                                                & SOC__DOT__CPU__DOT__loadstore_addr)
                                                ? 8U
                                                : 4U)
                                            : ((1U 
                                                & SOC__DOT__CPU__DOT__loadstore_addr)
                                                ? 2U
                                                : 1U))
                                        : (((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                             ? 0x0cU
                                             : 3U) 
                                           | (- (IData)(
                                                        (1U 
                                                         != 
                                                         (3U 
                                                          & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                             >> 0x0000000cU))))))) 
                                      & (- (IData)(
                                                   (6U 
                                                    == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__state))))));
    vlSelfRef.SOC__DOT__mem_addr = (((1U == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__state)) 
                                     | (0U == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__state)))
                                     ? vlSelfRef.SOC__DOT__CPU__DOT__PC
                                     : SOC__DOT__CPU__DOT__loadstore_addr);
    vlSelfRef.SOC__DOT__CPU__DOT__LT = (1U & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                                               >> 0x0000001fU)
                                               ? (vlSelfRef.SOC__DOT__CPU__DOT__rs1 
                                                  >> 0x0000001fU)
                                               : (IData)(
                                                         (vlSelfRef.SOC__DOT__CPU__DOT__aluMinus 
                                                          >> 0x00000020U))));
    vlSelfRef.SOC__DOT____Vcellinp__RAM__mem_wmask 
        = ((- (IData)((1U & (~ (vlSelfRef.SOC__DOT__mem_addr 
                                >> 0x00000016U))))) 
           & (IData)(vlSelfRef.SOC__DOT__mem_wmask));
    vlSelfRef.SOC__DOT__uart_valid = (IData)(((0x00400008U 
                                               == (0x00400008U 
                                                   & vlSelfRef.SOC__DOT__mem_addr)) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.SOC__DOT__mem_wmask))));
    vlSelfRef.SOC__DOT__mem_rdata = ((0x00400000U & vlSelfRef.SOC__DOT__mem_addr)
                                      ? (0x00000200U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.SOC__DOT__mem_addr 
                                                           >> 4U)))) 
                                            & ((~ (IData)(vlSelfRef.SOC__DOT__uart_ready)) 
                                               << 9U)))
                                      : vlSelfRef.SOC__DOT__RAM_rdata);
    __Vtableidx1 = (((0U == (IData)(vlSelfRef.SOC__DOT__CPU__DOT__aluMinus)) 
                     << 5U) | (((IData)(vlSelfRef.SOC__DOT__CPU__DOT__LT) 
                                << 4U) | ((8U & ((IData)(
                                                         (vlSelfRef.SOC__DOT__CPU__DOT__aluMinus 
                                                          >> 0x00000020U)) 
                                                 << 3U)) 
                                          | (7U & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                   >> 0x0000000cU)))));
    vlSelfRef.SOC__DOT__CPU__DOT__takeBranch = VSOC__ConstPool__TABLE_h381f83e2_0
        [__Vtableidx1];
    vlSelfRef.SOC__DOT__CPU__DOT__LOAD_halfword = (0x0000ffffU 
                                                   & ((2U 
                                                       & SOC__DOT__CPU__DOT__loadstore_addr)
                                                       ? 
                                                      (vlSelfRef.SOC__DOT__mem_rdata 
                                                       >> 0x00000010U)
                                                       : vlSelfRef.SOC__DOT__mem_rdata));
    vlSelfRef.SOC__DOT__CPU__DOT__LOAD_byte = (0x000000ffU 
                                               & ((1U 
                                                   & SOC__DOT__CPU__DOT__loadstore_addr)
                                                   ? 
                                                  ((IData)(vlSelfRef.SOC__DOT__CPU__DOT__LOAD_halfword) 
                                                   >> 8U)
                                                   : (IData)(vlSelfRef.SOC__DOT__CPU__DOT__LOAD_halfword)));
    vlSelfRef.SOC__DOT__CPU__DOT__LOAD_sign = (1U & 
                                               ((~ 
                                                 (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                  >> 0x0000000eU)) 
                                                & ((0U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.SOC__DOT__CPU__DOT__instr 
                                                        >> 0x0000000cU)))
                                                    ? 
                                                   ((IData)(vlSelfRef.SOC__DOT__CPU__DOT__LOAD_byte) 
                                                    >> 7U)
                                                    : 
                                                   ((IData)(vlSelfRef.SOC__DOT__CPU__DOT__LOAD_halfword) 
                                                    >> 0x0000000fU))));
}

void VSOC___024root___nba_sequent__TOP__1(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___nba_sequent__TOP__1\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.SOC__DOT__CW__DOT__slow_CLK = ((IData)(vlSelfRef.RESET) 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.SOC__DOT__CW__DOT__slow_CLK)));
}

void VSOC___024root___eval_nba(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_nba\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VSOC___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.SOC__DOT__CW__DOT__slow_CLK = ((IData)(vlSelfRef.RESET) 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.SOC__DOT__CW__DOT__slow_CLK)));
    }
}

void VSOC___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSOC___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VSOC___024root___eval_phase__act(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_phase__act\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VSOC___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSOC___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VSOC___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void VSOC___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VSOC___024root___eval_phase__nba(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_phase__nba\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VSOC___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VSOC___024root___eval_nba(vlSelf);
        VSOC___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VSOC___024root___eval(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VSOC___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("RTL/SOC.v", 346, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VSOC___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("RTL/SOC.v", 346, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = VSOC___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VSOC___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void VSOC___024root___eval_debug_assertions(VSOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_debug_assertions\n"); );
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.CLK & 0xfeU)))) {
        Verilated::overWidthError("CLK");
    }
    if (VL_UNLIKELY(((vlSelfRef.RESET & 0xfeU)))) {
        Verilated::overWidthError("RESET");
    }
    if (VL_UNLIKELY(((vlSelfRef.RXD & 0xfeU)))) {
        Verilated::overWidthError("RXD");
    }
}
#endif  // VL_DEBUG

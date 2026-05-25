#include "VSOC.h"
#include "VSOC___024root.h"
#include "verilated.h"

#include <iostream>

int main(int argc, char** argv, char** env) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    
    VSOC* top = new VSOC{contextp};
    top->CLK = 0;
    top->RESET = 1;
    
    while(!contextp->gotFinish()) {
        top->CLK = !top->CLK;

        top->eval();
        
        // Print PC every 1M cycles so we know where we are
        /*if(contextp->time() % 1000000 == 0) {
            std::cout << "t=" << contextp->time() 
                      << " PC=" << top->rootp->SOC__DOT__CPU__DOT__PC 
                      << std::endl;
        } */
        
        if(contextp->time() > 50000000) break;

        contextp->timeInc(1);
    }
    
    delete top;
    delete contextp;
    return 0;
}

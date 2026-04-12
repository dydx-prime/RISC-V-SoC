`include "Clockworks.v"
`include "processor.v"
`include "memory.v"

module SOC(
    input CLK,
    input RESET,
    output [4:0] LEDS,
    input RXD,
    output TXD
);

    Clockworks #(
      .SLOW(2) // Divide clock frequency by 2^21
   )CW(
     .CLK(CLK),
     .RESET(RESET),

     .clk(clk),
     .resetn(resetn)
   );

    wire clk;
    wire resetn;
	 
	 memory RAM(
		.clk(clk),
		.mem_addr(mem_addr),
		.mem_rdata(mem_rdata),
		.mem_rstrb(mem_rstrb)
	 );
	 
	 wire [31:0] mem_addr;
	 wire [31:0] mem_rdata;
	 wire mem_rstrb;
	 wire [31:0] x1;
	 
	 processor CPU(
		.clk(clk),
		.resetn(resetn),
      .mem_addr(mem_addr),
      .mem_rdata(mem_rdata),
      .mem_rstrb(mem_rstrb),
      .x1(x1)	
	 );
	 
	 assign LEDS = x1[4:0];
	 
    assign TXD = 1'b0; 

endmodule


module bench();
   reg CLK;
   reg RESET = 0;
   wire [4:0] LEDS;
   reg  RXD = 1'b0;
   wire TXD;

   SOC uut(
     .CLK(CLK),
     .RESET(RESET),
     .LEDS(LEDS)
   );


  reg[4:0] prev_LEDS = 0;
  //initial #500 $finish;
   initial begin
      RESET = 1;
      CLK = 0;
      forever begin

	 #1 CLK = ~CLK;
	 if(LEDS != prev_LEDS) begin
	    $display("LEDS = %b",LEDS);

	 end
	 prev_LEDS <= LEDS;
      end
   end

  initial begin
    $dumpfile("sim.vcd");
    $dumpvars(0, bench);
  end
  
endmodule
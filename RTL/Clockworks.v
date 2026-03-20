module Clockworks (
    input  CLK,
    input  RESET,
    output clk,
    output resetn
);
    parameter SLOW = 21;

    // Clock divider
    reg [SLOW:0] slow_CLK = 0;
    always @(posedge CLK) begin
        if (!RESET)
            slow_CLK <= 0;
        else
            slow_CLK <= slow_CLK + 1;

    end
    assign clk = slow_CLK[SLOW];
    assign resetn = RESET;


endmodule

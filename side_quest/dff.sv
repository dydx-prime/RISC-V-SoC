// d-flip flop - variable width
module dff #(
  parameter WIDTH = 32
 )
(
  input clk,
  input reset,
  input [WIDTH-1:0] d,
  output logic [WIDTH-1:0] q
);

always_ff @(posedge clk) begin
  if(!reset) q <= {WIDTH{1'b0}};
  else q <= d;
end

  
endmodule

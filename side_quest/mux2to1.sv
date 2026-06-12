// 2 to 1 mux, 32 bits
module mux2to1 (
  input [31:0] signal_0,
  input [31:0] signal_1,
  input sel,
  output logic [31:0] src
);

always_comb begin
  case (sel)
    2'b00: src = signal_0;
    2'b01: src = signal_1;
    default : src = signal_0;
  endcase
end

endmodule

// 3 to 1 mux, 32 bits
module mux3to1 (
  input [31:0] signal_00,
  input [31:0] signal_01,
  input [31:0] signal_10,
  input [1:0] sel,
  output logic [31:0] src
);

always_comb begin
  case (sel)
    2'b00: src = signal_00;
    2'b01: src = signal_01;
    2'b10: src = signal_10;
    default : src = signal_00;
  endcase
end

endmodule

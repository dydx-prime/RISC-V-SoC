module registerfile (
  input clk,
  input [4:0] rs1,
  input [4:0] rs2,
  input [4:0] rd,
  input [31:0] wd, // data to write into rd
  input we, // write enable signal
  output logic [31:0] rd1,
  output logic [31:0] rd2
);

logic [31:0] register [31:0];

always_ff @(posedge clk) begin
  if (we && rd != 5'b0) register[rd] <= wd;
end

assign rd1 = (rs1 != 5'b0) ? register[rs1] : 32'b0;
assign rd2 = (rs2 != 5'b0) ? register[rs2] : 32'b0;

endmodule

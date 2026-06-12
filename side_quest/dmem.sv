module dmem (
  input clk,
  input write_en,
  input [31:0] addr,
  input [31:0] wd,
  output logic [31:0] rd
);
  
  logic [31:0] RAM[0:1023];

  logic [9:0] word_addr;
  assign word_addr = addr[11:2];

  always_ff @(posedge clk) begin
    if(write_en) begin
      RAM[word_addr] <= wd;
    end
  end

    assign rd = RAM[word_addr];
endmodule

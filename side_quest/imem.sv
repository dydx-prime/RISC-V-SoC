module imem(
  input [31:0] a, // address
  output logic [31:0] rd 
);
  
  logic [31:0] RAM[0:255]; // might want more

  initial
    $readmemh("filename.hex", RAM); // replace with actual file name

  assign rd = RAM[a[9:2]]; // word aligned, 8bit word

  endmodule

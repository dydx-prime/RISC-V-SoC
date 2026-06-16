module imem(
  input [31:0] a, // address
  output logic [31:0] rd 
);

  logic [31:0] RAM[0:63]; // might want more

  initial
    $readmemh("filename.dat", ROM); // replace with actual file name

  assign rd = RAM[a[31:2]]; // word aligned

  endmodule

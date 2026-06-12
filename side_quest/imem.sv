module imem(
  input [9:0] a, // address
  output logic [31:0] rd 
);

  logic [31:0] ROM[511:0]; // might want more

  initial
    $readmemh("filename.dat", ROM); // replace with actual file name

  assign rd = ROM[a];

  endmodule

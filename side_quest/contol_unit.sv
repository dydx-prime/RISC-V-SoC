module control_unit (
  input [6:0] opcode,
  input [2:0] funct3,
  input [6:0] funct7,

  output logic branch_en,
  output logic mem_read,
  output logic mem_to_reg,
  output logic [3:0] alu_op,
  output logic mem_write,
  output logic alu_src,
  output logic regwrite
);

  
//---------------- decoding instruction type
  // assignment based on opcode
  logic alu_reg = (opcode [6:0] == 7'b0110011); 
  logic alu_imm = (opcode [6:0] == 7'b0010011);
  logic jal     = (opcode [6:0] == 7'b1101111);
  logic jalr    = (opcode [6:0] == 7'b1100111);
  logic lui     = (opcode [6:0] == 7'b0110111);
  logic auipc   = (opcode [6:0] == 7'b0010111);
  logic branch  = (opcode [6:0] == 7'b1100011);
  logic load    = (opcode [6:0] == 7'b0000011);
  logic store   = (opcode [6:0] == 7'b0100011);
  logic system  = (opcode [6:0] == 7'b1110011); // ECALL, EBREAK

//--------------- decoding into proper ALU signals
  always_comb begin
    case (funct3)
      3'b000: alu_op = (alu_reg && funct7[5]) ? 4'b0110 : 4'b0010; // sub/add()
      3'b001: alu_op = 4'b0101; // sll(i)
      3'b010: alu_op = 4'b0011; // slt(i)
      3'b011: alu_op = 4'b0111; // sltu(iu)
      3'b100: alu_op = 4'b0100; // xor(i)
      3'b101: alu_op = funct7[5] ? 4'b1111: 4'b1101; // sra(i)/srl(i)
      3'b110: alu_op = 4'b0001; // or(i)
      3'b111: alu_op = 4'b0000; // and(i)
      default : alu_op = 4'b0000;
    endcase
  end

//--------------- other output signals
assign branch_en = branch;
assign mem_read = load;
assign mem_write = store;
assign mem_to_reg = load;// alu result or read data from memory 
assign alu_src = alu_imm | load | store | jalr; // if immediate, then mux select goes high
assign regwrite = alu_reg | alu_imm | load | jal | jalr | lui | auipc;

endmodule

module control_unit (
  input [6:0] opcode,
  input [14:12] funct3,
  input [31:25] funct7,

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
    if(alu_reg) begin
      case (funct3)
        3'b000: alu_op = (funct7 == 7'b0000000) ? 4'b0010 : 4'b0110; // add or sub
        3'b001: alu_op = 4'b0101; // sll
        3'b010: alu_op = 4'b0011; // slt
        3'b011: alu_op = 4'b0111; // sltu
        3'b100: alu_op = 4'b0100; // xor
        3'b101: alu_op = (funct7 == 7'b0000000) ? 4'b1101: 4'b1111; // srl or sra
        3'b110: alu_op = 4'b0001; // OR
        3'b111: alu_op = 4'b0000; // AND
        default : alu_op = 4'b0000;
      endcase
    end
  end

//--------------- other output signals
assign branch_en = branch;
assign mem_read = load;
assign mem_wrtite = store;
assign mem_to_reg = ;// alu result or read data from memory // idk what signal to use
assign alu_src = alu_imm; // if immediate, then mux select goes high
assign regwrite = alu_reg;

endmodule

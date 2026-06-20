module control_unit (
  input [6:0] opcode,
  input [2:0] funct3,
  input [6:0] funct7,
  

  output logic jal_en,
  output logic jalr_en,
  output logic auipc_en,
  output logic lui_en,
  output logic branch_en,
  output logic mem_read,
  output logic mem_to_reg,
  output logic [3:0] alu_op,
  output logic mem_write,
  output logic alu_src,
  output logic reg_write,
  output logic branch_inv, // branch alternatives
  output logic mem_size [1:0], // LB/SB, LH/SH, LW/SW
  output logic mem_unsigned // LBU, LHU 
);

//---------------- decoding instruction type
  // assignment based on opcode
  logic alu_reg ;
  logic alu_imm ;
  logic jal     ;
  logic jalr    ;
  logic lui     ;
  logic auipc   ;
  logic branch  ;
  logic load    ;
  logic store   ;
  logic system  ; // ECALL, EBREAK

  always_comb begin
    alu_reg = (opcode [6:0] == 7'b0110011); 
    alu_imm = (opcode [6:0] == 7'b0010011);
    jal     = (opcode [6:0] == 7'b1101111);
    jalr    = (opcode [6:0] == 7'b1100111);
    lui     = (opcode [6:0] == 7'b0110111);
    auipc   = (opcode [6:0] == 7'b0010111);
    branch  = (opcode [6:0] == 7'b1100011);
    load    = (opcode [6:0] == 7'b0000011);
    store   = (opcode [6:0] == 7'b0100011);
    system  = (opcode [6:0] == 7'b1110011);   
  end
//--------------- decoding into proper ALU signals
  always_comb begin
    if(branch) begin
      case(funct3)
        3'b000: begin alu_op = 4'b0110; branch_inv = 1'b0; end // BEQ
        3'b001: begin alu_op = 4'b0110; branch_inv = 1'b1; end // BNE
        3'b100: begin alu_op = 4'b0011; branch_inv = 1'b0; end // BLT
        3'b101: begin alu_op = 4'b0011; branch_inv = 1'b1; end // BGE
        3'b110: begin alu_op = 4'b0111; branch_inv = 1'b0; end // BLTU
        3'b111: begin alu_op = 4'b0111; branch_inv = 1'b1; end // BGEU
        default: begin alu_op = 4'b0110; branch_inv = 1'b0; end // default to BEQ
      endcase
    end
    else begin // r-type
      branch_inv = 1'b0;
      case (funct3)
        3'b000: alu_op = (alu_reg && funct7[5]) ? 4'b0110 : 4'b0010; // sub/add(i)
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
  end

//--------------- memory width/sign decoding
  always_comb begin
    case (funct3[1:0])
      2'b00: mem_size = 2'b00; // LB/SB
      2'b01: mem_size = 2'b01; // LH/SH
      2'b10: mem_size = 2'b10; // LW/SW
      default: mem_size = 2'b00; 
    endcase
    mem_unsigned = funct[2]; // LBU/LHU
  end

//--------------- other output signals
assign jal_en = jal;
assign jalr_en = jalr;
assign auipc_en = auipc;
assign lui_en = lui;
assign branch_en = branch;
assign mem_read = load;
assign mem_write = store;
assign mem_to_reg = load;// alu result or read data from memory 
assign alu_src = alu_imm | load | store | jalr; // if immediate, then mux select goes high
assign reg_write = alu_reg | alu_imm | load | jal | jalr | lui | auipc;

endmodule

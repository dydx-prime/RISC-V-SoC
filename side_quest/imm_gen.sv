module imm_gen (
  input [31:0] instr,
  output logic [31:0] imm_instr
);

//---------------- generating immediates
  logic [31:0] i_imm;
  logic [31:0] s_imm; 
  logic [31:0] u_imm; 
  logic [31:0] b_imm; 
  logic [31:0] j_imm; 

  always_comb begin
    i_imm = { {21{instr[31]}}, instr[30:25], instr[24:21], instr[20]};
    s_imm = { {21{instr[31]}}, instr[30:25], instr[11: 8], instr[ 7]};
    u_imm = { instr[31], instr[30:20], instr[19:12], 12'b0};
    b_imm = { {20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0}; 
    j_imm = { {12{instr[31]}}, instr[19:12], instr[20], instr[30:25], instr[24:21], 1'b0};
  end
  
  //logic alu_reg = (opcode [6:0] == 7'b0110011);
  localparam logic [6:0] alu_imm = 7'b0010011, 
                        jal     = 7'b1101111,
                        jalr    = 7'b1100111,
                        lui     = 7'b0110111,
                        auipc   = 7'b0010111,
                        branch  = 7'b1100011,
                        load    = 7'b0000011,
                        store   = 7'b0100011,
                        system  = 7'b1110011; // ECALL, EBREAK // FIXME look if needed inside imm_gen
  always_comb begin
    case (instr[6:0]) // opcode
      alu_imm: imm_instr = i_imm;
      store: imm_instr = s_imm;
      load: imm_instr = i_imm;
      jal: imm_instr = j_imm;
      branch: imm_instr = b_imm;
      lui: imm_instr = u_imm;
      auipc: imm_instr = u_imm;
      jalr: imm_instr = i_imm;
      default : imm_instr = 32'b0;
    endcase
  end
  

endmodule

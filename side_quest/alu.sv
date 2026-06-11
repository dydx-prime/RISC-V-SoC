module alu (
  input [3:0] alu_op,
  input [31:0] srcA, // rs1
  input [31:0] srcB, // rs2, imm + sign extend
  output logic [31:0] alu_result,
  output logic isZero
);

always_comb begin
  case (alu_op)
    4'b0000: alu_result = srcA & srcB; // AND, ANDI
    4'b0001: alu_result = srcA | srcB; // OR, ORI
    4'b0010: alu_result = srcA + srcB; // ADD, ADDI, LW, SW
    4'b0011: alu_result = ($signed(srcA) < $signed(srcB)) ? 32'b1 : 32'b0; // SLT, SLTI, BLT, BGE
    4'b0100: alu_result = srcA ^ srcB; // XOR, XORI
    4'b0101: alu_result = srcA << (srcB[4:0]); // SLL, SLLI
    4'b0110: alu_result = srcA - srcB; // SUB, BEQ, BNE
    4'b0111: alu_result = srcA < srcB ? 32'b1 : 32'b0; // SLTU, SLTIU, BLTU, BGEU

    4'b1101: alu_result = srcA >> (srcB[4:0]); // SRL, SRLI
  
    4'b1111: alu_result = $signed(srcA) >>> srcB[4:0]; // SRA, SRAI

    // add M extension - MUL, MULH, DIV, DIVU, REM, REMU 
  
    default : alu_result = 32'b0;
  endcase
end

assign isZero = (alu_result == 32'b0);
  
endmodule

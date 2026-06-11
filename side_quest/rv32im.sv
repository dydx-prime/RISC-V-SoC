module rv32im_top (
  input clk, rst_n,
  output logic [31:0] pc_out   // for debug
);

  logic [31:0] pc, pc_next, instruction;
  logic [31:0] rd1, rd2, imm_ext, alu_result, read_data, result;
  logic zero;
  
  // PC
  always_ff @(posedge clk) begin
    if(!rst_n) pc <= 32'b0;
    else pc <= pc_next;
  end


//---------------- generating immediates
  assign i_imm = { {21{instruction[31]}}, instruction[30:25], instruction[24:21], instruction[20]};
  assign s_imm = { {21{instruction[31]}}, instruction[30:25], instruction[11: 8], instruction[ 7]};
  assign u_imm = { instruction[31], instruction[30:20], instruction[19:12], 12'b0};
  assign b_imm = { {20{instruction[31]}}, instruction[7], instruction[30:25], instruction[11:8], 1'b0}; 
  assign j_imm = { {12{instruction[31]}}, instruction[19:12], instruction[20], instruction[30:25], instruction[24:21], 1'b0};


  assign pc_out = pc;


    // ── Submodules (instantiate yours here) ─────────────
    imem       u_imem  (.addr(pc),         .instr(instr));

    imm_gen    u_imm   (.instr(instr),     .imm_ext(imm_ext));
    reg_file   u_rf    (.clk, .rst_n,
                        .rs1(instr[19:15]), .rs2(instr[24:20]),
                        .rd (instr[11: 7]),

                        .we(reg_write),    .wd(result),
                        .rd1(rd1),         .rd2(rd2));
    alu        u_alu   (.a(alu_a), .b(alu_b), .op(alu_op),
                        .result(alu_result), .zero(zero));

    dmem       u_dmem  (.clk, .addr(alu_result),

                        .wd(rd2), .we(mem_write),
                        .funct3(instr[14:12]),
                        .rd(read_data));
    control    u_ctrl  (.opcode(instr[6:0]),
                        .funct3(instr[14:12]),
                        .funct7(instr[31:25]),

                        /* ... outputs ... */);
endmodule

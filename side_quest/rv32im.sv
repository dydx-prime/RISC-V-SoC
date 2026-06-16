module rv32im_top (
  input clk, rst_n,
  output logic [31:0] pc_out   // for debug
);

//TODO refactor nets, implement LUI, AUIPC, JAL, JALR, test, combinational blocks

  logic [31:0] pc, pc_next, instruction;
  logic [31:0] read_data, result;
  
  // PC
  always_ff @(posedge clk) begin
    if(!rst_n) pc <= 32'b0;
    else pc <= pc_next;
  end
  
  assign pc_out = pc; 
  logic pc4 = pc + 32'd4; // add 4 to pc

  logic [31:0] branch_addy = pc + (imm_instr << 32'b1);
  
  logic address_sel = branch_en & isZero;

  mux2to1 m3(.signal_0 (pc4),
             .signal_1 (branch_addy),
             .sel      (address_sel),

             .src      (pc_next)
             );

  imem imem1(.a(pc), .rd(instruction));
 
  logic [3:0] alu_op;
  logic branch_en, mem_read, mem_to_reg;
  logic mem_write, alu_src, reg_write;
  control_unit ctrl(.opcode     (instruction[6:0]),
                    .funct3     (instruction[14:12]),
                    .funct7     (instruction[31:25]),
                    
                    .branch_en  (branch_en),
                    .mem_read   (mem_read),
                    .mem_to_reg (mem_to_reg),
                    .alu_op     (alu_op),
                    .mem_write  (mem_write),
                    .alu_src    (alu_src),
                    .reg_write  (reg_write)
                    );


  logic [31:0] imm_instr;
  imm_gen imm_gen1(.instruction (instruction),
                   .imm_instr   (imm_instr)
                   );

  logic [31:0] alu_src_in; // alu source input
  mux2to1 m1(.signal_0 (read_data_out2),
             .signal_1 (imm_instr), 
             .sel      (alu_src), 

             .src      (alu_src_in)
             );

  logic [31:0] dmem_read_data;
  dmem dmem1(.clk(clk),
             .write_en (mem_write),
             .addr     (alu_result),
             .wd       (read_data_out2),

             .rd       (dmem_read_data) // read data
    );
  
  logic [31:0] reg_wd_src;
  mux2to1 m2(.signal_0 (alu_result),
             .signal_1 (dmem_read_data), 
             .sel      (mem_to_reg), 

             .src      (reg_wd_src)
             );
  
  logic [31:0] read_data_out1, read_data_out2;
  registerfile rf(.clk (clk),
                  .rs1 (instruction[19:15]),
                  .rs2 (instruction[24:20]),
                  .rd  (instruction[11:7]),
                  .wd  (reg_wd_src), // output from data memory mux
                  .we  (reg_write), // from control unit 

                  .rd1 (read_data_out1), // read data
                  .rd2 (read_data_out2)
                  );

  logic [31:0] alu_result;
  logic isZero;
  alu alu1(.alu_op     (alu_op),
           .srcA       (read_data_out1), // rs1
           .srcB       (alu_src_in), // rs2 or imm+sign_extended

           .alu_result (alu_result),
           .isZero     (isZero)
           );

endmodule

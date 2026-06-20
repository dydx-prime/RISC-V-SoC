module rv32im_top (
  input clk, rst_n,
  output logic [31:0] pc_out   // for debug
);
  
//------------------------------ signals
  logic [31:0] pc, pc_next, instruction;
  logic [31:0] branch_addy;
  logic address_sel;
  logic [31:0] pc_src;
  logic [31:0] pc_or_branch;
  logic [31:0] pc4;
  logic [31:0] read_data, result;
  logic [3:0] alu_op;
  logic branch_en, mem_read, mem_to_reg;
  logic mem_write, alu_src, reg_write;
  logic jal_en, jalr_en, auipc_en, lui_en;
  logic [31:0] imm_instr;
  logic [31:0] alu_src_in2; // alu source input
  logic [31:0] dmem_read_data;
  logic [31:0] reg_wd_src;
  logic [31:0] reg_writedata_src;
  logic [31:0] read_data_out1, read_data_out2;
  logic [31:0] alu_src_in1;
  logic [31:0] alu_result;
  logic isZero;

  mux2to1 m6(.signal_0 (pc_or_branch),
             .signal_1 (alu_result),
             .sel      (jalr_en),

             .src      (pc_next)
             );

  mux2to1 m7(.signal_0 (pc_src),
             .signal_1 (alu_result),
             .sel      (jal_en),

             .src      (pc_or_branch)
             ); 

  // PC
  always_ff @(posedge clk) begin
    if(!rst_n) pc <= 32'b0;
    else pc <= pc_next;
  end
  
  assign pc4 = pc + 32'd4; // PC + 4
  assign pc_out = pc; 
  assign branch_addy = pc + imm_instr;
  assign address_sel = branch_en & isZero;

  mux2to1 m3(.signal_0 (pc4),
             .signal_1 (branch_addy),
             .sel      (address_sel),

             .src      (pc_src)
             );

  imem imem1(.a(pc), .rd(instruction));
 
  control_unit ctrl(.opcode     (instruction[6:0]),
                    .funct3     (instruction[14:12]),
                    .funct7     (instruction[31:25]),

                    .jal_en     (jal_en),
                    .jalr_en    (jalr_en),
                    .auipc_en   (auipc_en),
                    .lui_en     (lui_en),
                    .branch_en  (branch_en),
                    .mem_read   (mem_read),
                    .mem_to_reg (mem_to_reg),
                    .alu_op     (alu_op),
                    .mem_write  (mem_write),
                    .alu_src    (alu_src),
                    .reg_write  (reg_write)
                    );

  imm_gen imm_gen1(.instr (instruction),
                   .imm_instr   (imm_instr)
                   );

  mux2to1 m1(.signal_0 (read_data_out2),
             .signal_1 (imm_instr), 
             .sel      (alu_src), 

             .src      (alu_src_in2)
             );

  dmem dmem1(.clk(clk),
             .write_en (mem_write),
             .addr     (alu_result),
             .wd       (read_data_out2),

             .rd       (dmem_read_data) // read data
            );
  
  mux2to1 m2(.signal_0 (alu_result),
             .signal_1 (dmem_read_data), 
             .sel      (mem_to_reg), 

             .src      (reg_wd_src)
             );

  // sel: 00 = alu/mem result, 01 = lui immediate, 10 = pc+4 (JAL)
  mux3to1 m5(.signal_00 (reg_wd_src),
             .signal_01 (imm_instr),
             .signal_10 (pc4),
             .sel       ({jal_en, lui_en}),
             .src       (reg_writedata_src)
             );

  registerfile rf(.clk (clk),
                  .rs1 (instruction[19:15]),
                  .rs2 (instruction[24:20]),
                  .rd  (instruction[11:7]),
                  .wd  (reg_writedata_src), // output from data memory mux
                  .we  (reg_write), // from control unit 

                  .rd1 (read_data_out1), // read data
                  .rd2 (read_data_out2)
                  );

  mux2to1 m4(.signal_0 (read_data_out1),
             .signal_1 (pc), 
             .sel      (auipc_en), 

             .src      (alu_src_in1)
             );

  alu alu1(.alu_op     (alu_op),
           .srcA       (alu_src_in1), // rs1 or auipc (pc + (imm << 12))
           .srcB       (alu_src_in2), // rs2 or imm+sign_extended

           .alu_result (alu_result),
           .isZero     (isZero)
           );

endmodule

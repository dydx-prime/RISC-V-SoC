module rv32im_top (
  input clk, rst_n,
  output logic [31:0] pc_out   // for debug
);

  logic [31:0] pc, pc_next, instruction;
  logic [31:0] read_data, result;
  
  // PC
  always_ff @(posedge clk) begin
    if(!rst_n) pc <= 32'b0;
    else pc <= pc_next;
  end

//---------------- generating immediates
  logic i_imm = { {21{instruction[31]}}, instruction[30:25], instruction[24:21], instruction[20]};
  logic s_imm = { {21{instruction[31]}}, instruction[30:25], instruction[11: 8], instruction[ 7]};
  logic u_imm = { instruction[31], instruction[30:20], instruction[19:12], 12'b0};
  logic b_imm = { {20{instruction[31]}}, instruction[7], instruction[30:25], instruction[11:8], 1'b0}; 
  logic j_imm = { {12{instruction[31]}}, instruction[19:12], instruction[20], instruction[30:25], instruction[24:21], 1'b0};

  assign pc_out = pc; // capture pc
  logic pc4 = pc_out + 32'd4; // add 4 to pc

  imem imem1(.a(pc_out[9:0]), .rd(instruction));
 
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
  
  logic [31:0] read_data_out1, read_data_out2;
  registerfile rf(.clk (clk),
                  .rs1 (instruction[19:15]),
                  .rs2 (instruction[24:20]),
                  .rd  (instruction[11:7]),
                  .wd  ([31:0]), // output from data memory mux
                  .we  (reg_write), // from control unit 

                  .rd1 (read_data_out1), // read data
                  .rd2 (read_data_out2)
                  );

  logic [31:0] alu_result;
  logic isZero;
  alu alu1(.alu_op     (alu_op),
           .srcA       (read_data_out1), // rs1
           .srcB       (read_data_out2), // rs2 or imm+sign_extended

           .alu_result (alu_result),
           .isZero     (isZero)
           );


  logic [31:0] dmem_read_data;
  dmem dmem1(.clk(clk),
             .write_en (mem_write),
             .addr     (alu_result),
             .wd       (read_data_out2),

             .rd       (dmem_read_data) // read data
    );

endmodule

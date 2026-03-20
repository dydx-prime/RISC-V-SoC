`default_nettype none
`include "Clockworks.v"

module SOC(
    input CLK,
    input RESET,
    output [4:0] LEDS,
    input RXD,
    output TXD
);

    Clockworks #(
      .SLOW(2) // Divide clock frequency by 2^21
   )CW(
     .CLK(CLK),
     .RESET(RESET),

     .clk(clk),
     .resetn(resetn)
   );

    wire clk;
    wire resetn;

    reg[31:0] MEM [0:255];
    reg[31:0] PC;

    reg[31:0] instr;

   
    // opcodes for instruction type
    wire R_type = (instr[6:0] == 7'b0110011);
    wire I_type = (instr[6:0] == 7'b0010011);
    wire B_type = (instr[6:0] == 7'b1100011);
    wire JALR   = (instr[6:0] == 7'b1100111);
    wire JAL    = (instr[6:0] == 7'b1101111);

    wire AUIPC  = (instr[6:0] == 7'b0010111); 
    wire LUI    = (instr[6:0] == 7'b0110111);
    wire Load   = (instr[6:0] == 7'b0000011);
    wire Store  = (instr[6:0] == 7'b0100011);
    wire SYSTEM = (instr[6:0] == 7'b1110011);


    // rtype decode
    wire [4:0]rs2 = instr[24:20];
    wire [4:0]rs1 = instr[19:15];
    wire [4:0]rd  = instr[11:7];

    wire [6:0]funct7 = instr[31:25];
    wire [2:0]funct3 = instr[14:12];

    // itype decode

    // sign extended
    wire [31:0]Iimm = {{21{instr[31]}}, instr[30:20]};

    // store
    wire [31:0]Simm = {{21{instr[31]}}, instr[30:25], instr[11:7]};

    // btype
    wire [31:0]Bimm = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0};


    // utype
    wire [31:0]Uimm = {instr[31], instr[30:12], {12{1'b0}}};   

    // jtype
  	wire [31:0]Jimm = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};


    initial begin
        PC = 0;


        // add x0, x0, x0
        //                   rs2   rs1  add  rd   ALUREG

        instr = 32'b0000000_00000_00000_000_00000_0110011;

        // add x1, x0, x0
        //                    rs2   rs1  add  rd  ALUREG
        MEM[0] = 32'b0000000_00000_00000_000_00001_0110011;


        // addi x1, x1, 1
        //             imm         rs1  add  rd   ALUIMM

        MEM[1] = 32'b000000000001_00001_000_00001_0010011;

        // addi x1, x1, 1
        //             imm         rs1  add  rd   ALUIMM
        MEM[2] = 32'b000000000001_00001_000_00001_0010011;


        // addi x1, x1, 1
        //             imm         rs1  add  rd   ALUIMM

        MEM[3] = 32'b000000000001_00001_000_00001_0010011;

        // addi x1, x1, 1
        //             imm         rs1  add  rd   ALUIMM
        MEM[4] = 32'b000000000001_00001_000_00001_0010011;


        // lw x2,0(x1)
        //             imm         rs1   w   rd   LOAD
        MEM[5] = 32'b000000000000_00001_010_00010_0000011;

        // sw x2,0(x1)
        //             imm   rs2   rs1   w   imm  STORE
        MEM[6] = 32'b000000_00001_00010_010_00000_0100011;

        // ebreak

        //                                        SYSTEM
        MEM[7] = 32'b000000000001_00000_000_00000_1110011;

    end

    always @(posedge clk) begin
        if(!resetn)
            PC <= 0;
        else if(!SYSTEM) begin
            instr <= MEM[PC];
            PC <= PC+1;
        end
        `ifdef bench      
            if(SYSTEM) $finish();
        `endif 
    end

    assign LEDS = SYSTEM ? 31 : {PC[0],R_type,I_type,Store,Load};

    `ifdef bench   
    always @(posedge clk) begin
        $display("PC=%0d",PC);
        case (1'b1)
        R_type: $display(
            "ALUreg rd=%d rs1=%d rs2=%d funct3=%b",
                rd, rs1, rs2, funct3
            );
        I_type: $display(
            "ALUimm rd=%d rs1=%d imm=%0d funct3=%b",
                rd, rs1, Iimm, funct3
            );
        B_type: $display("BRANCH");
        JAL:    $display("JAL");
        JALR:   $display("JALR");
        AUIPC:  $display("AUIPC");
        LUI:    $display("LUI");	
        Load:   $display("LOAD");
        Store:  $display("STORE");
        SYSTEM: $display("SYSTEM");
        endcase 
    end
`endif
    assign TXD = 1'b0; 
endmodule


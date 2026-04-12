module processor (
	input clk,
	input resetn,
	output [31:0] mem_addr,
	input	 [31:0] mem_rdata,
	output mem_rstrb,
	output reg [31:0] x1
);

    reg[31:0] PC = 0;
    wire [31:0] nextPC = (B_type && takeBranch) ? PC + Bimm : 
                                            isJAL ? PC + Jimm :
                                            isJALR ? rs1 + Iimm :
                                            PC + 4;

    reg[31:0] instr; // instruction 
   
    // opcodes for instruction type
    wire R_type = (instr[6:0] == 7'b0110011);
    wire I_type = (instr[6:0] == 7'b0010011);
    wire B_type = (instr[6:0] == 7'b1100011);
    wire isJALR   = (instr[6:0] == 7'b1100111);
    wire isJAL    = (instr[6:0] == 7'b1101111);

    wire isAUIPC  = (instr[6:0] == 7'b0010111); 
    wire isLUI    = (instr[6:0] == 7'b0110111);
    wire Load   = (instr[6:0] == 7'b0000011);
    wire Store  = (instr[6:0] == 7'b0100011);
    wire SYSTEM = (instr[6:0] == 7'b1110011);


    // src/destination registers
    wire [4:0]rs2Id = instr[24:20];
    wire [4:0]rs1Id = instr[19:15];
    wire [4:0]rdId  = instr[11:7];
	
	 // functions
    wire [6:0]funct7 = instr[31:25];
    wire [2:0]funct3 = instr[14:12];

    // immediate formats
    wire [31:0]Iimm = {{21{instr[31]}}, instr[30:20]};
    wire [31:0]Simm = {{21{instr[31]}}, instr[30:25], instr[11:7]};
    wire [31:0]Bimm = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0};
    wire [31:0]Uimm = {instr[31], instr[30:12], {12{1'b0}}};   
  	wire [31:0]Jimm = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};

    // registers
    reg [31:0]RegisterBank[0:31];
    wire [31:0]writeBackData;
    wire writeBackEn;
    reg [31:0] rs2;
    reg [31:0] rs1;

    `ifdef bench  
    integer i;
    initial begin
        for(i=0; i<32; ++i) begin
        RegisterBank[i] = 0;
        end
    end
    `endif   


    // state machine
    localparam FETCH_INSTR = 0;
    localparam WAIT_INSTR  = 1;
    localparam FETCH_REGS  = 2;
    localparam EXECUTE     = 3;
    reg [1:0]state = FETCH_INSTR;

    always@(posedge clk) begin
        if(!resetn) begin
            PC <= 0;
            state <= FETCH_INSTR;
				x1 <= 0;
        end
        else begin
            if(writeBackEn && rdId != 0) begin
                RegisterBank[rdId] <= writeBackData;
                if(rdId == 1) begin
                    x1 <= writeBackData;
                end
                `ifdef bench
                    $display("x%0d <= %b", rdId, writeBackData);
                `endif
            end

            case(state)
                FETCH_INSTR: begin
                    state <= WAIT_INSTR;
                end
					 
				WAIT_INSTR: begin
					instr <= mem_rdata;
					state <= FETCH_REGS;
				end
                
                FETCH_REGS: begin
                    rs1 <= RegisterBank[rs1Id];
                    rs2 <= RegisterBank[rs2Id];
                    state <= EXECUTE;
                end

                EXECUTE: begin
                    if(!SYSTEM) begin
                        PC <= nextPC;
                    end
                    state <= FETCH_INSTR;

                `ifdef bench
                    if(SYSTEM) $finish();
                `endif
                end
            endcase
        end
    end


    `ifdef bench   
    always @(posedge clk) begin
        if(state == FETCH_REGS) begin
            case (1'b1)
            R_type: $display(
                "ALUreg rd=%d rs1=%d rs2=%d funct3=%b",
                    rdId, rs1Id, rs2Id, funct3
                );
            I_type: $display(
                "ALUimm rd=%d rs1=%d imm=%0d funct3=%b",
                    rdId, rs1Id, Iimm, funct3
                );
            B_type: $display("BRANCH");
            isJAL:    $display("isJAL");
            isJALR:   $display("isJALR");
            isAUIPC:  $display("isAUIPC");
            isLUI:    $display("LUI");	
            Load:   $display("LOAD");
            Store:  $display("STORE");
            SYSTEM: $display("SYSTEM");
            endcase 

            if(SYSTEM) begin
                $finish();
            end

        end
    end
`endif

    // ALU
    reg [31:0] aluOut;

    wire [31:0] aluIn1 = rs1;
    wire [31:0] aluIn2 = R_type ? rs2 : Iimm;
    wire [4:0] shamt = R_type ? rs2[4:0] : instr[24:20];
    wire [32:0] aluMinus = {1'b1, ~aluIn2} + {1'b0, aluIn1} + 33'b1;

    wire EQ = (aluMinus[31:0] == 0);
    wire LTU = aluMinus[32];
    wire LT = (aluIn1[31] ^ aluIn2[31]) ? aluIn1[31] : aluMinus[32]; // unsigned comparison, MSB sign
    wire [31:0] aluPlus = aluIn1 + aluIn2;

    always@(*) begin
        case(funct3)
            3'b000: aluOut = (funct7[5] && instr[5]) ? (aluIn1 - aluIn2) : (aluIn1 + aluIn2); // ADD/SUB
            3'b001: aluOut = aluIn1 << shamt; // SLL 
            3'b010: aluOut = ($signed(aluIn1) < $signed(aluIn2)); // SLT
            3'b011: aluOut = (aluIn1 < aluIn2); // SLTU
            3'b100: aluOut = (aluIn1 ^ aluIn2); // XOR
            3'b101: aluOut = (funct7[5]) ? ($signed(aluIn1) >>> shamt) : (aluIn1 >> shamt); // SRA//SRL
            3'b110: aluOut = (aluIn1 | aluIn2); 
            3'b111: aluOut = (aluIn1 & aluIn2);
        endcase
    end

    reg takeBranch;
    always@(*) begin
        case(funct3)
            3'b000: takeBranch = (rs1 == rs2);
            3'b001: takeBranch = (rs1 != rs2);
            3'b100: takeBranch = ($signed(rs1) < $signed(rs2));
            3'b101: takeBranch = ($signed(rs1) >= $signed(rs2));
            3'b110: takeBranch = (rs1 < rs2);
            3'b111: takeBranch = (rs1 >= rs2);
            default: takeBranch = 1'b0;
        endcase
    end

    assign mem_addr = PC;
    assign mem_rstrb = (state == FETCH_INSTR);

    assign writeBackData = (isJAL || isJALR) ? (PC + 4) : (isLUI) ? Uimm :
                           (isAUIPC) ? (PC + Uimm) : aluOut;
									
    assign writeBackEn = (state == EXECUTE && (R_type || I_type || isJAL || isJALR || isLUI || isAUIPC));

endmodule
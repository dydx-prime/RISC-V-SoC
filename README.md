# RISC-V-SoC

RV32I Core w/ some protocols (maybe). Synthesizable FPGA code.

## RV32I Spec

Mainly notes from the spec

- 32 registers, each 32 bits wide.
    - x0 -> zero register
    - x1-x31 -> general purpose
    - pc -> program counter (address of current instruction)

- 2 types of control transfer instructions (unconditional, J. conditional, B)

### Instruction Formats


|R-Type|
|------|
|31-25|24-20|19-15|14-12|11-7|6-0|
|funct7| rs2 | rs1 | funct3 | rd | opcode|

|I-Type|
|------|
|31-20| 19-15 | 14-12 | 11-7 | 6-0 |
|imm[11:0]| rs1 | funct3 | rd | opcode|

|Shifts (using I-type)|
|---------------------|
|31-25| 24-20 | 19-15| 14-12 | 11-7 | 6-0 |
|imm[11:5]| imm[4:0]| rs1 | funct3 | rd | opcode|
|xxxxxxx| shamt[4:0] | src | SLLI/SRLI/SRAI| dest| OP-IMM|


|S-Type|
|------|
|31-25| 20-24| 19-15 | 14-12 | 11-7 | 6-0 |
|imm[11:5]| rs2 | rs1 | funct3 | imm[4:0] | opcode|
Store instructions use S-type, Load instructions use I-type.

|Load Instructions & Store Instructions|
|--------------------------------------|
| LW | 32-bit into rd|
| LH | 16-bit, sign-extended, into rd|
| LHU| 16-bit, zero-extended, into rd|
| LB/LBU| 8-bit, defined analogously|
| SW | 32-bit storing|
| SH | 16-bit storing|
| SB | 8-bit storing|

|U-type|
|------|
|31-12| 11-7 | 6-0 |
|imm[31:12]| rd | opcode|

|Load upper immediate & Add upper imm to pc (using U-type)|
|---------------------------------------------------------|
| 31-12 | 11-7 | 6-0 |
| U-imm[31:12]  | dest | LUI |
| U-imm[31:12]  | dest | AUIPC |
 
|B-type|
|------|
|31| 30-25 | 24-20| 19-15 | 14-12 | 11-8| 7 | 6-0|
|imm[12]| imm[10:5] | rs2 | rs1 | funct3 | imm[4:1] | imm[11] | opcode |

All branch instructions use B-type.

|J-type|
|------|
|31| 30-21| 20| 19-12 | 11-7 | 6-0|
|imm[20]| imm[10:1] | imm[11] | imm[19:12] | rd | opcode |

JAL typically uses the J-type, while JALR uses I-type. Ensure 4-byte aligned boundry to avoid misaligned exception.

### Types of Immediate from RISC-V Instructions

Sign extension always uses instruction bit 31

|I-immediate|
|-----------|
|31-11| 10-5 | 4-1 | 0 |
| inst[31] | inst[30:25] | inst[24:21] | inst[20] |

|S-immediate|
|-----------|
|31-11| 10-5 | 4-1 | 0 |
|inst[31]| inst[30:25] | inst[11:8] | inst[7] |

|U-immediate|
|-----------|
|31 | 30-20| 19-12 | 11-0 |
|inst[31]| inst[30:20] | inst[19:12] | 0 |

|B-immediate|
|-----------|
|31-12| 11 | 10-5 | 4-1 | 0 |
|inst[31] | inst[7] | inst[30:25] | inst[11:8] | 0 |

|J-immediate|
|-----------|
|31-20| 19-12 | 11 | 10-5 | 4-1 | 0 |
|inst[31] | inst[19:12] | inst[20] | inst[30:25] | inst[24:21] | 0 |



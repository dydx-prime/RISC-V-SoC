# RISC-V-SoC

> TLDR: RV32I multicycle core able to run basic programs (yay). Can call it an SoC lowkey because it has UART, but nothing crazy of course. Plans are to work on a pipelined core RV32IM.

RV32I Core w/ some protocols (maybe). Synthesizable FPGA code.

## RV32I Spec

Mainly notes from the spec.

* 32 registers, each 32 bits wide.

  * x0 -> zero register
  * x1-x31 -> general purpose
  * pc -> program counter (address of current instruction)

* 2 types of control transfer instructions:

  * Unconditional (J)
  * Conditional (B)

## Instruction Formats

### R-Type

| 31-25  | 24-20 | 19-15 | 14-12  | 11-7 | 6-0    |
| ------ | ----- | ----- | ------ | ---- | ------ |
| funct7 | rs2   | rs1   | funct3 | rd   | opcode |

### I-Type

| 31-20     | 19-15 | 14-12  | 11-7 | 6-0    |
| --------- | ----- | ------ | ---- | ------ |
| imm[11:0] | rs1   | funct3 | rd   | opcode |

### Shift Instructions (I-Type)

| 31-25     | 24-20      | 19-15 | 14-12          | 11-7 | 6-0    |
| --------- | ---------- | ----- | -------------- | ---- | ------ |
| imm[11:5] | imm[4:0]   | rs1   | funct3         | rd   | opcode |
| xxxxxxx   | shamt[4:0] | src   | SLLI/SRLI/SRAI | dest | OP-IMM |

### S-Type

| 31-25     | 24-20 | 19-15 | 14-12  | 11-7     | 6-0    |
| --------- | ----- | ----- | ------ | -------- | ------ |
| imm[11:5] | rs2   | rs1   | funct3 | imm[4:0] | opcode |

Store instructions use S-type. Load instructions use I-type.

### Load & Store Instructions

| Instruction | Description                         |
| ----------- | ----------------------------------- |
| LW          | Load 32-bit word into rd            |
| LH          | Load 16-bit halfword, sign-extended |
| LHU         | Load 16-bit halfword, zero-extended |
| LB          | Load 8-bit byte, sign-extended      |
| LBU         | Load 8-bit byte, zero-extended      |
| SW          | Store 32-bit word                   |
| SH          | Store 16-bit halfword               |
| SB          | Store 8-bit byte                    |

### U-Type

| 31-12      | 11-7 | 6-0    |
| ---------- | ---- | ------ |
| imm[31:12] | rd   | opcode |

#### U-Type Instructions

| Instruction | Description               |
| ----------- | ------------------------- |
| LUI         | Load Upper Immediate      |
| AUIPC       | Add Upper Immediate to PC |

### B-Type

| 31      | 30-25     | 24-20 | 19-15 | 14-12  | 11-8     | 7       | 6-0    |
| ------- | --------- | ----- | ----- | ------ | -------- | ------- | ------ |
| imm[12] | imm[10:5] | rs2   | rs1   | funct3 | imm[4:1] | imm[11] | opcode |

All branch instructions use B-type.

### J-Type

| 31      | 30-21     | 20      | 19-12      | 11-7 | 6-0    |
| ------- | --------- | ------- | ---------- | ---- | ------ |
| imm[20] | imm[10:1] | imm[11] | imm[19:12] | rd   | opcode |

JAL typically uses J-type, while JALR uses I-type.

Ensure 4-byte aligned boundaries to avoid misaligned exceptions.

---

## Immediate Encoding Reference

Sign extension always uses instruction bit `inst[31]`.

| Immediate Type | Bit Layout                                                                              |
| -------------- | --------------------------------------------------------------------------------------- |
| I-immediate    | `imm[11:0] = {inst[31], inst[30:25], inst[24:21], inst[20]}`                            |
| S-immediate    | `imm[11:0] = {inst[31], inst[30:25], inst[11:8], inst[7]}`                              |
| B-immediate    | `imm[12:1] = {inst[31], inst[7], inst[30:25], inst[11:8]}`, `imm[0] = 0`                |
| U-immediate    | `imm[31:12] = {inst[31], inst[30:20], inst[19:12]}`, lower 12 bits are `0`              |
| J-immediate    | `imm[20:1] = {inst[31], inst[19:12], inst[20], inst[30:25], inst[24:21]}`, `imm[0] = 0` |

### Expanded View

#### I-immediate

| 31-11    | 10-5        | 4-1         | 0        |
| -------- | ----------- | ----------- | -------- |
| inst[31] | inst[30:25] | inst[24:21] | inst[20] |

#### S-immediate

| 31-11    | 10-5        | 4-1        | 0       |
| -------- | ----------- | ---------- | ------- |
| inst[31] | inst[30:25] | inst[11:8] | inst[7] |

#### U-immediate

| 31       | 30-20       | 19-12       | 11-0 |
| -------- | ----------- | ----------- | ---- |
| inst[31] | inst[30:20] | inst[19:12] | 0    |

#### B-immediate

| 31-12    | 11      | 10-5        | 4-1        | 0 |
| -------- | ------- | ----------- | ---------- | - |
| inst[31] | inst[7] | inst[30:25] | inst[11:8] | 0 |

#### J-immediate

| 31-20    | 19-12       | 11       | 10-5        | 4-1         | 0 |
| -------- | ----------- | -------- | ----------- | ----------- | - |
| inst[31] | inst[19:12] | inst[20] | inst[30:25] | inst[24:21] | 0 |

## What Can it Run?

// Add stuff 

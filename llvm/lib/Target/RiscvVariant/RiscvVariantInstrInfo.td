
//===-- RiscvVariantInstrInfo.td - RiscvVariant Instructions -*- tablegen -*-===//
// This file defines the instruction set for the RiscvVariant architecture.
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

// Include necessary TableGen utilities
include "llvm/Target/Target.td"

// Define instruction formats
class RiscvVariantInst<dag outs, dag ins, string asm, list<dag> pattern> : Instruction {
  bits<32> Inst;
  bits<5> rd;
  bits<5> rs1;
  bits<5> rs2;
  bits<12> imm12;
  bits<32> imm32;
  let Namespace = "RiscvVariant";
  let hasSideEffects = 0;
  let mayLoad = 0;
  let mayStore = 0;
  let Size = 4;
  dag OutOperandList = outs;
  dag InOperandList = ins;
  let AsmString = asm;
  let Pattern = pattern;
}

// Define ADD instruction (R-type: rd = rs1 + rs2)
def ADD : RiscvVariantInst<(outs GR32:$rd), (ins GR32:$rs1, GR32:$rs2),
                        "add $rd, $rs1, $rs2",
                        [(set GR32:$rd, (add GR32:$rs1, GR32:$rs2))]>
{
  let Inst{31-25} = 0b0000000; // funct7
  let Inst{24-20} = rs2;
  let Inst{19-15} = rs1;
  let Inst{14-12} = 0b000; // funct3
  let Inst{11-7} = rd;
  let Inst{6-0} = 0b0110011; // opcode
}

// Define MUL instruction (R-type: rd = rs1 * rs2)
def MUL : RiscvVariantInst<(outs GR32:$rd), (ins GR32:$rs1, GR32:$rs2),
                        "mul $rd, $rs1, $rs2",
                        [(set GR32:$rd, (mul GR32:$rs1, GR32:$rs2))]>
{
  let Inst{31-25} = 0b0000001; // funct7
  let Inst{24-20} = rs2;
  let Inst{19-15} = rs1;
  let Inst{14-12} = 0b000; // funct3
  let Inst{11-7} = rd;
  let Inst{6-0} = 0b0110011; // opcode
}

// Define BEQ instruction (SB-type: branch if rs1 == rs2)
def BEQ : RiscvVariantInst<(outs), (ins GR32:$rs1, GR32:$rs2, brtarget:$imm12),
                        "beq $rs1, $rs2, $imm12",
                        [(brcond (setcc GR32:$rs1, GR32:$rs2, SETEQ), brtarget:$imm12)]>
{
  let Inst{31-25} = imm12{11-5}; // imm[12|10:5]
  let Inst{24-20} = rs2;
  let Inst{19-15} = rs1;
  let Inst{14-12} = 0b000; // funct3
  let Inst{11-7} = imm12{4-1}; // imm[4:1]
  let Inst{6-0} = 0b1100011; // opcode
}

// Define CALL instruction (J-type: jump and link)
def CALL : RiscvVariantInst<(outs GR32:$rd), (ins calltarget:$imm32),
                         "call\t$imm32",
                         [(call tglobaladdr:$imm32)]>
{
  let Inst{31-12} = imm32{31-12}; // imm[31:12]
  let Inst{11-7} = rd;
  let Inst{6-0} = 0b1101111; // opcode
}
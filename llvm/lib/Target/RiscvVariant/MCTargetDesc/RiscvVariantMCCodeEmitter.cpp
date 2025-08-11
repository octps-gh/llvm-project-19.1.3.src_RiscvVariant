//===-- RiscvVariantMCCodeEmitter.cpp - RiscvVariant Code Emitter -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#include "RiscvVariantMCCodeEmitter.h"
#include "RiscvVariantMCTargetDesc.h"
#include "llvm/MC/MCInst.h"
#include "llvm/MC/MCInstrInfo.h"
#include "llvm/MC/MCRegisterInfo.h"
#include "llvm/Support/raw_ostream.h"

using namespace llvm;

#define GET_INSTRMAP_INFO
#include "RiscvVariantGenInstrInfo.inc"

void RiscvVariantMCCodeEmitter::encodeInstruction(const MCInst &MI, raw_ostream &OS,
                                               SmallVectorImpl<MCFixup> &Fixups,
                                               const MCSubtargetInfo &STI) const {
  uint32_t Encoding = 0;
  unsigned Opcode = MI.getOpcode();

  switch (Opcode) {
  case RiscvVariant::ADD:
  case RiscvVariant::MUL: {
    // R-type: [funct7:31-25][rs2:24-20][rs1:19-15][funct3:14-12][rd:11-7][opcode:6-0]
    Encoding |= getRegisterEncoding(MI, 0) << 7;  // rd
    Encoding |= getRegisterEncoding(MI, 1) << 15; // rs1
    Encoding |= getRegisterEncoding(MI, 2) << 20; // rs2
    Encoding |= (Opcode == RISCVLike::ADD ? 0x0 : 0x1) << 25; // funct7
    Encoding |= 0b0110011; // opcode
    break;
  }
  case RiscvVariant::BEQ: {
    // SB-type: [imm12:31][imm10:5:30-25][rs2:24-20][rs1:19-15][funct3:14-12][imm4:1:11-8][imm11:7][opcode:6-0]
    int32_t Imm = getImmEncoding(MI, 2, Fixups, STI);
    Encoding |= ((Imm >> 12) & 0x1) << 31; // imm[12]
    Encoding |= ((Imm >> 5) & 0x3f) << 25; // imm[10:5]
    Encoding |= getRegisterEncoding(MI, 0) << 15; // rs1
    Encoding |= getRegisterEncoding(MI, 1) << 20; // rs2
    Encoding |= 0b000 << 12; // funct3
    Encoding |= ((Imm >> 1) & 0xf) << 8;  // imm[4:1]
    Encoding |= ((Imm >> 11) & 0x1) << 7; // imm[11]
    Encoding |= 0b1100011; // opcode
    break;
  }
  case RiscvVariant::CALL: {
    // J-type: [imm31:12:31-12][rd:11-7][opcode:6-0]
    int32_t Imm = getImmEncoding(MI, 1, Fixups, STI);
    Encoding |= (Imm & 0xfffff) << 12; // imm[31:12]
    Encoding |= getRegisterEncoding(MI, 0) << 7; // rd
    Encoding |= 0b1101111; // opcode
    break;
  }
  default:
    llvm_unreachable("Current Unsupported instruction, will support more opcodes very soon");
  }

  // Emit the 32-bit instruction
  OS.write(static_cast<char>(Encoding & 0xff));
  OS.write(static_cast<char>((Encoding >> 8) & 0xff));
  OS.write(static_cast<char>((Encoding >> 16) & 0xff));
  OS.write(static_cast<char>((Encoding >> 24) & 0xff));
}

uint32_t RiscvVariantMCCodeEmitter::getRegisterEncoding(const MCInst &MI, unsigned OpNo) const {
  return MI.getOperand(OpNo).getReg();
}

uint32_t RiscvVariantMCCodeEmitter::getImmEncoding(const MCInst &MI, unsigned OpNo,
                                                SmallVectorImpl<MCFixup> &Fixups,
                                                const MCSubtargetInfo &STI) const {
  const MCOperand &MO = MI.getOperand(OpNo);
  if (MO.isImm())
    return MO.getImm();
  // Add fixup for relocations (e.g., for CALL)
  Fixups.push_back(MCFixup::create(0, MO.getExpr(), FK_PCRel_4));
  return 0;
}
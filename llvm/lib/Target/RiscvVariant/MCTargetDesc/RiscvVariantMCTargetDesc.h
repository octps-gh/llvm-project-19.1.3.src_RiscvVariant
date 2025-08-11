//===-- RiscvVariantMCTargetDesc.h - RiscvVariant Target Desc -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_RISCVLIKE_MCTARGETDESC_RISCVLIKEMCTARGETDESC_H
#define LLVM_LIB_TARGET_RISCVLIKE_MCTARGETDESC_RISCVLIKEMCTARGETDESC_H

#include "llvm/Support/DataTypes.h"

namespace llvm {

class MCAsmBackend;
class MCCodeEmitter;
class MCContext;
class MCObjectTargetWriter;
class Target;

MCCodeEmitter *createRiscvVariantMCCodeEmitter(const MCInstrInfo &MII, MCContext &Ctx);
MCAsmBackend *createRiscvVariantMCAsmBackend(const Target &T, const MCSubtargetInfo &STI,
                                         const MCRegisterInfo &MRI, const MCTargetOptions &Options);
std::unique_ptr<MCObjectTargetWriter> createRiscvVariantELFObjectWriter(uint8_t OSABI);
void InitializeRiscvVariantTargetMC();

} // namespace llvm

#endif
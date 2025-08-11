//===-- RiscvVariantMCTargetDesc.cpp - RiscvVariant Target Desc -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#include "RiscvVariantMCTargetDesc.h"
#include "RiscvVariantMCAsmInfo.h"
#include "RiscvVariantMCCodeEmitter.h"
#include "llvm/MC/MCInstrInfo.h"
#include "llvm/MC/MCRegisterInfo.h"
#include "llvm/MC/MCSubtargetInfo.h"
#include "llvm/MC/MCCodeEmitter.h"
#include "llvm/MC/MCObjectWriter.h"
#include "llvm/Support/TargetRegistry.h"
using namespace llvm;

#define GET_INSTRINFO_MC_DESC
#define GET_SUBTARGETINFO_MC_DESC
#define GET_REGINFO_MC_DESC
#include "RiscvVariantGenInstrInfo.inc"
#include "RiscvVariantGenSubtargetInfo.inc"
#include "RiscvVariantGenRegisterInfo.inc"


MCCodeEmitter *createRiscvVariantMCCodeEmitter(const MCInstrInfo &MII, MCContext &Ctx) {
  return new RiscvVariantMCCodeEmitter(MII, Ctx);
}

MCAsmBackend *createRiscvVariantMCAsmBackend(const Target &T, const MCSubtargetInfo &STI,
                                         const MCRegisterInfo &MRI, const MCTargetOptions &Options) {
  return createELFAsmBackend(STI, MRI, createRiscvVariantELFObjectWriter(0));
}

std::unique_ptr<MCObjectTargetWriter> createRiscvVariantELFObjectWriter(uint8_t OSABI) {
  return createELFObjectWriter(OSABI, true, Triple("riscv32-unknown-elf"));
}

void InitializeRiscvVariantTargetMC() {
  // Register the MC asm info
  RegisterMCAsmInfo<RiscvVariantMCAsmInfo> X(getTheRiscvVariantTarget());

  // Register the MC code emitter
  TargetRegistry::RegisterMCCodeEmitter(getTheRiscvVariantTarget(), createRiscvVariantMCCodeEmitter);

  // Register the MC asm backend
  TargetRegistry::RegisterMCAsmBackend(getTheRiscvVariantTarget(), createRiscvVariantMCAsmBackend);
}
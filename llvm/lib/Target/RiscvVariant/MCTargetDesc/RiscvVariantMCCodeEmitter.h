//===-- RiscvVariantMCCodeEmitter.h - RiscvVariant Code Emitter -*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
// This file is distributed under the University of Illinois Open Source License.
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_RISCVLIKE_MCTARGETDESC_RISCVLIKEMCCODEEMITTER_H
#define LLVM_LIB_TARGET_RISCVLIKE_MCTARGETDESC_RISCVLIKEMCCODEEMITTER_H

#include "llvm/MC/MCCodeEmitter.h"
#include "llvm/Support/DataTypes.h"

namespace llvm {

class MCContext;
class MCSubtargetInfo;

class RiscvVariantMCCodeEmitter : public MCCodeEmitter {
  const MCInstrInfo &MII;
  MCContext &Ctx;

public:
  RiscvVariantMCCodeEmitter(const MCInstrInfo &mii, MCContext &ctx)
      : MII(mii), Ctx(ctx) {}

  void encodeInstruction(const MCInst &MI, raw_ostream &OS,
                        SmallVectorImpl<MCFixup> &Fixups,
                        const MCSubtargetInfo &STI) const override;

private:
  uint32_t getRegisterEncoding(const MCInst &MI, unsigned OpNo) const;
  uint32_t getImmEncoding(const MCInst &MI, unsigned OpNo, SmallVectorImpl<MCFixup> &Fixups,
                          const MCSubtargetInfo &STI) const;
};

} // namespace llvm

#endif
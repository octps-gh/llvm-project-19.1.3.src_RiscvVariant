#include "MCTargetDesc/RymoMCTargetDesc.h"
#include "llvm/MC/MCELFObjectWriter.h"
#include "llvm/MC/MCExpr.h"
#include "llvm/MC/MCObjectWriter.h"
#include "llvm/MC/MCValue.h"

using namespace llvm;

namespace {
class RymoELFObjectWriter : public MCELFObjectTargetWriter {
public:
  RymoELFObjectWriter(bool Is64Bit, uint8_t OSABI)
      : MCELFObjectTargetWriter(Is64Bit, OSABI, ELF::EM_RISCV,
                                /*HasRelocationAddend*/ true) {}

  ~RymoELFObjectWriter() override = default;

protected:
  unsigned getRelocType(MCContext &Ctx, const MCValue &Target,
                        const MCFixup &Fixup, bool IsPCRel) const override;
};
} // namespace

unsigned RymoELFObjectWriter::getRelocType(MCContext &Ctx,
                                             const MCValue &Target,
                                             const MCFixup &Fixup,
                                             bool IsPCRel) const {
  return ELF::R_RYMO_NONE;
}

std::unique_ptr<MCObjectTargetWriter>
llvm::createRymoELFObjectWriter(bool Is64Bit, uint8_t OSABI) {
  return std::make_unique<RymoELFObjectWriter>(Is64Bit, OSABI);
}
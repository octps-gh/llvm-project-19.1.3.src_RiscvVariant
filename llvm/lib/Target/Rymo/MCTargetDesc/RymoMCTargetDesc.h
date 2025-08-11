#ifndef LLVM_LIB_TARGET_RYMO_MCTARGETDESC_RYMOMCTARGETDESC_H
#define LLVM_LIB_TARGET_RYMO_MCTARGETDESC_RYMOMCTARGETDESC_H

#include "llvm/Config/config.h"
#include "llvm/MC/MCTargetOptions.h"
#include "llvm/Support/DataTypes.h"
#include <memory>

namespace llvm {
class MCAsmBackend;
class MCCodeEmitter;
class MCContext;
class MCInstrInfo;
class MCObjectTargetWriter;
class MCRegisterInfo;
class MCSubtargetInfo;
class Target;

MCCodeEmitter *createRymoMCCodeEmitter(const MCInstrInfo &MCII,
                                         MCContext &Ctx);

MCAsmBackend *createRymoAsmBackend(const Target &T,
                                     const MCSubtargetInfo &STI,
                                     const MCRegisterInfo &MRI,
                                     const MCTargetOptions &Options);

std::unique_ptr<MCObjectTargetWriter>
createRymoELFObjectWriter(bool Is64Bit, uint8_t OSABI);
} // namespace llvm

#define GET_REGINFO_ENUM
#include "RymoGenRegisterInfo.inc"

#define GET_INSTRINFO_ENUM
#include "RymoGenInstrInfo.inc"

#define GET_SUBTARGETINFO_ENUM
#include "RymoGenSubtargetInfo.inc"

#endif

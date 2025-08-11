#ifndef LLVM_LIB_TARGET_RYMO_MCTARGETDESC_RYMOMCASMINFO_H
#define LLVM_LIB_TARGET_RYMO_MCTARGETDESC_RYMOMCASMINFO_H

#include "llvm/MC/MCAsmInfoELF.h"

namespace llvm {

class Triple;

class RymoMCAsmInfo : public MCAsmInfoELF {
public:
  explicit RymoMCAsmInfo(const Triple &TargetTriple);
};
} // namespace llvm

#endif
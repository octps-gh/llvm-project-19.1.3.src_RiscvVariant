#include "RymoTargetInfo.h"
#include "llvm/MC/TargetRegistry.h"

using namespace llvm;

Target &llvm::getTheRymoTarget() {
  static Target TheRymoTarget;
  return TheRymoTarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeRymoTargetInfo() {
  RegisterTarget<Triple::rymo, /*HasJIT=*/false> X(
      getTheRymoTarget(), "rymo", "Rymo (little endian)", "Rymo");
}
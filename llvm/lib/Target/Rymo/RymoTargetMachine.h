#ifndef LLVM_LIB_TARGET_RYMO_RYMOTARGETMACHINE_H
#define LLVM_LIB_TARGET_RYMO_RYMOTARGETMACHINE_H

#include "RymoSubtarget.h"
#include "llvm/Target/TargetMachine.h"

namespace llvm {

class RymoTargetMachine : public LLVMTargetMachine {
  std::unique_ptr<TargetLoweringObjectFile> TLOF;
  RymoSubtarget Subtarget;

public:
  RymoTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                      StringRef FS, const TargetOptions &Options,
                      std::optional<Reloc::Model> RM,
                      std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                      bool JIT);

  const RymoSubtarget *getSubtargetImpl() const { return &Subtarget; }
  const RymoSubtarget *getSubtargetImpl(const Function &) const override {
    return &Subtarget;
  }

  TargetPassConfig *createPassConfig(PassManagerBase &PM) override;

  TargetLoweringObjectFile *getObjFileLowering() const override {
    return TLOF.get();
  }
};
} // namespace llvm

#endif
#include "RymoTargetMachine.h"
#include "Rymo.h"
#include "TargetInfo/RymoTargetInfo.h"
#include "llvm/CodeGen/TargetLoweringObjectFileImpl.h"
#include "llvm/CodeGen/TargetPassConfig.h"
#include "llvm/MC/TargetRegistry.h"

#include <optional>

using namespace llvm;

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeRymoTarget() {
  RegisterTargetMachine<RymoTargetMachine> X(getTheRymoTarget());
}

static StringRef computeDataLayout(const Triple &TT) {
  return "e-m:e-p:32:32-i32:32-n32-S32";
}

static Reloc::Model getEffectiveRelocModel(std::optional<Reloc::Model> RM) {
  return RM.value_or(Reloc::Static);
}

RymoTargetMachine::RymoTargetMachine(const Target &T, const Triple &TT,
                                         StringRef CPU, StringRef FS,
                                         const TargetOptions &Options,
                                         std::optional<Reloc::Model> RM,
                                         std::optional<CodeModel::Model> CM,
                                         CodeGenOptLevel OL, bool JIT)
    : LLVMTargetMachine(T, computeDataLayout(TT), TT, CPU, FS, Options,
                        getEffectiveRelocModel(RM),
                        getEffectiveCodeModel(CM, CodeModel::Small), OL),
      TLOF(std::make_unique<TargetLoweringObjectFileELF>()),
      Subtarget(TT, std::string(CPU), std::string(FS), *this) {
  initAsmInfo();
}

namespace {
class RymoPassConfig : public TargetPassConfig {
public:
  RymoPassConfig(RymoTargetMachine &TM, PassManagerBase &PM)
      : TargetPassConfig(TM, PM) {}

  RymoTargetMachine &getRymoTargetMachine() const {
    return getTM<RymoTargetMachine>();
  }

  bool addInstSelector() override;
};
} // namespace

TargetPassConfig *RymoTargetMachine::createPassConfig(PassManagerBase &PM) {
  return new RymoPassConfig(*this, PM);
}

bool RymoPassConfig::addInstSelector() {
  addPass(createRymoISelDag(getRymoTargetMachine(), getOptLevel()));
  return false;
}
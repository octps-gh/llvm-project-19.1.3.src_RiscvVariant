#ifndef LLVM_LIB_TARGET_RYMO_RYMOISELLOWERING_H
#define LLVM_LIB_TARGET_RYMO_RYMOISELLOWERING_H

#include "llvm/CodeGen/TargetLowering.h"

namespace llvm {
class RymoSubtarget;
namespace RymoISD {
enum NodeType : unsigned { FIRST_NUMBER = ISD::BUILTIN_OP_END, RET_GLUE };
}

class RymoTargetLowering : public TargetLowering {
  const RymoSubtarget *Subtarget;

public:
  explicit RymoTargetLowering(const TargetMachine &TM,
                                const RymoSubtarget &STI);

  const char *getTargetNodeName(unsigned Opcode) const override;

private:
  SDValue LowerFormalArguments(SDValue Chain, CallingConv::ID CallConv,
                               bool IsVarArg,
                               const SmallVectorImpl<ISD::InputArg> &Ins,
                               const SDLoc &DL, SelectionDAG &DAG,
                               SmallVectorImpl<SDValue> &InVals) const override;

  SDValue LowerReturn(SDValue Chain, CallingConv::ID CallConv, bool IsVarArg,
                      const SmallVectorImpl<ISD::OutputArg> &Outs,
                      const SmallVectorImpl<SDValue> &OutVals, const SDLoc &DL,
                      SelectionDAG &DAG) const override;
};
} // namespace llvm

#endif
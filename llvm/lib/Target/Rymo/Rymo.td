include "llvm/Target/Target.td"

include "RymoRegisterInfo.td"
include "RymoCallingConv.td"
include "RymoInstrInfo.td"


def : ProcessorModel<"Rymo", NoSchedModel, []>;


def RymoInstrInfo : InstrInfo;

def RymoAsmParser : AsmParser {
  let ShouldEmitMatchRegisterAltName = 1;
}

def Rymo : Target {
  let InstructionSet = RymoInstrInfo;
  let AssemblyParsers = [RymoAsmParser];
}
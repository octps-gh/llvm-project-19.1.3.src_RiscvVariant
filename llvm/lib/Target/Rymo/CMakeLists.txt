add_llvm_component_group(Rymo)

set(LLVM_TARGET_DEFINITIONS Rymo.td)

tablegen(LLVM RymoGenAsmMatcher.inc -gen-asm-matcher)
tablegen(LLVM RymoGenAsmWriter.inc -gen-asm-writer)
tablegen(LLVM RymoGenCallingConv.inc -gen-callingconv)
tablegen(LLVM RymoGenDAGISel.inc -gen-dag-isel)
tablegen(LLVM RymoGenInstrInfo.inc -gen-instr-info)
tablegen(LLVM RymoGenMCCodeEmitter.inc -gen-emitter)
tablegen(LLVM RymoGenRegisterInfo.inc -gen-register-info)
tablegen(LLVM RymoGenSubtargetInfo.inc -gen-subtarget)
tablegen(LLVM RymoGenMCPseudoLowering.inc -gen-pseudo-lowering)
tablegen(LLVM RymoGenDisassemblerTables.inc -gen-disassembler)

add_public_tablegen_target(RymoCommonTableGen)

add_llvm_target(RymoCodeGen
        RymoAsmPrinter.cpp
        RymoFrameLowering.cpp
        RymoInstrInfo.cpp
        RymoISelDAGToDAG.cpp
        RymoISelLowering.cpp
        RymoMCInstLower.cpp
        RymoRegisterInfo.cpp
        RymoSubtarget.cpp
        RymoTargetMachine.cpp
        RymoMCInstLower.cpp

        LINK_COMPONENTS
        AsmPrinter
        CodeGen
        CodeGenTypes
        Core
        MC
        SelectionDAG
        RymoDesc
        RymoInfo
        Support
        Target
        TargetParser

        ADD_TO_COMPONENT
        Rymo
        )

add_subdirectory(AsmParser) 
add_subdirectory(Disassembler)       
add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)
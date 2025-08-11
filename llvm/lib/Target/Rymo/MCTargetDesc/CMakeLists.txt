add_llvm_component_library(LLVMRymoDesc
        RymoMCTargetDesc.cpp
        RymoInstPrinter.cpp
        RymoMCAsmInfo.cpp
        RymoAsmBackend.cpp
        RymoMCCodeEmitter.cpp
        RymoELFObjectWriter.cpp

        LINK_COMPONENTS
        MC
        RymoInfo
        Support
        TargetParser

        ADD_TO_COMPONENT
        Rymo
        )
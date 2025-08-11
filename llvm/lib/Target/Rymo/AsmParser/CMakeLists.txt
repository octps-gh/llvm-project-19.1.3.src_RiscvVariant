add_llvm_component_library(LLVMRymoAsmParser
        RymoAsmParser.cpp

        LINK_COMPONENTS
        MC
        MCParser
        RymoDesc
        RymoInfo
        Support

        ADD_TO_COMPONENT
        Rymo
        )
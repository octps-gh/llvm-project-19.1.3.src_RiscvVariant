/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register Enum Values                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM

namespace llvm {

class MCRegisterClass;
extern const MCRegisterClass RymoMCRegisterClasses[];

namespace Rymo {
enum {
  NoRegister,
  X0 = 1,
  X1 = 2,
  X2 = 3,
  X10 = 4,
  X11 = 5,
  NUM_TARGET_REGS // 6
};
} // end namespace Rymo

// Register classes

namespace Rymo {
enum {
  GPRRegClassID = 0,

};
} // end namespace Rymo


// Register alternate name indices

namespace Rymo {
enum {
  ABIRegAltName,	// 0
  NoRegAltName,	// 1
  NUM_TARGET_REG_ALT_NAMES = 2
};
} // end namespace Rymo

// Register pressure sets enum.
namespace Rymo {
enum RegisterPressureSets {
  GPR = 0,
};
} // end namespace Rymo

} // end namespace llvm

#endif // GET_REGINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* MC Register Information                                                    *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC

namespace llvm {

extern const int16_t RymoRegDiffLists[] = {
  /* 0 */ 0,
};

extern const LaneBitmask RymoLaneMaskLists[] = {
  /* 0 */ LaneBitmask(0xFFFFFFFFFFFFFFFF), LaneBitmask::getAll(),
};

extern const uint16_t RymoSubRegIdxLists[] = {
  /* 0 */ 0,
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char RymoRegStrings[] = {
  /* 0 */ "X10\0"
  /* 4 */ "X0\0"
  /* 7 */ "X11\0"
  /* 11 */ "X1\0"
  /* 14 */ "X2\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const MCRegisterDesc RymoRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0, 0, 0 },
  { 4, 0, 0, 0, 0, 0, 1 },
  { 11, 0, 0, 0, 1, 0, 0 },
  { 14, 0, 0, 0, 2, 0, 0 },
  { 0, 0, 0, 0, 3, 0, 0 },
  { 7, 0, 0, 0, 4, 0, 0 },
};

extern const MCPhysReg RymoRegUnitRoots[][2] = {
  { Rymo::X0 },
  { Rymo::X1 },
  { Rymo::X2 },
  { Rymo::X10 },
  { Rymo::X11 },
};

namespace {     // Register classes...
  // GPR Register Class...
  const MCPhysReg GPR[] = {
    Rymo::X0, Rymo::X1, Rymo::X2, Rymo::X10, Rymo::X11, 
  };

  // GPR Bit set.
  const uint8_t GPRBits[] = {
    0x3e, 
  };

} // end anonymous namespace


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char RymoRegClassStrings[] = {
  /* 0 */ "GPR\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const MCRegisterClass RymoMCRegisterClasses[] = {
  { GPR, GPRBits, 0, 5, sizeof(GPRBits), Rymo::GPRRegClassID, 32, 1, true, false },
};

extern const uint16_t RymoRegEncodingTable[] = {
  0,
  0,
  1,
  2,
  10,
  11,
};
static inline void InitRymoMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(RymoRegDesc, 6, RA, PC, RymoMCRegisterClasses, 1, RymoRegUnitRoots, 5, RymoRegDiffLists, RymoLaneMaskLists, RymoRegStrings, RymoRegClassStrings, RymoSubRegIdxLists, 1,
RymoRegEncodingTable);

}

} // end namespace llvm

#endif // GET_REGINFO_MC_DESC

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Register Information Header Fragment                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER

#include "llvm/CodeGen/TargetRegisterInfo.h"

namespace llvm {

class RymoFrameLowering;

struct RymoGenRegisterInfo : public TargetRegisterInfo {
  explicit RymoGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0,
      unsigned PC = 0, unsigned HwMode = 0);
  const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const override;
  unsigned getRegUnitWeight(unsigned RegUnit) const override;
  unsigned getNumRegPressureSets() const override;
  const char *getRegPressureSetName(unsigned Idx) const override;
  unsigned getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const override;
  const int *getRegClassPressureSets(const TargetRegisterClass *RC) const override;
  const int *getRegUnitPressureSets(unsigned RegUnit) const override;
  ArrayRef<const char *> getRegMaskNames() const override;
  ArrayRef<const uint32_t *> getRegMasks() const override;
  bool isGeneralPurposeRegister(const MachineFunction &, MCRegister) const override;
  bool isFixedRegister(const MachineFunction &, MCRegister) const override;
  bool isArgumentRegister(const MachineFunction &, MCRegister) const override;
  bool isConstantPhysReg(MCRegister PhysReg) const override final;
  /// Devirtualized TargetFrameLowering.
  static const RymoFrameLowering *getFrameLowering(
      const MachineFunction &MF);
};

namespace Rymo { // Register classes
  extern const TargetRegisterClass GPRRegClass;
} // end namespace Rymo

} // end namespace llvm

#endif // GET_REGINFO_HEADER

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register and Register Classes Information                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC

namespace llvm {

extern const MCRegisterClass RymoMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
};

static const char *SubRegIndexNameTable[] = { "" };

static const TargetRegisterInfo::SubRegCoveredBits SubRegIdxRangeTable[] = {
  { 65535, 65535 },
};


static const LaneBitmask SubRegIndexLaneMaskTable[] = {
  LaneBitmask::getAll(),
 };



static const TargetRegisterInfo::RegClassInfo RegClassInfos[] = {
  // Mode = 0 (Default)
  { 32, 32, 32, /*VTLists+*/0 },    // GPR
};

static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t GPRSubClassMask[] = {
  0x00000001, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 0,
};


namespace Rymo {   // Register class instances
  extern const TargetRegisterClass GPRRegClass = {
    &RymoMCRegisterClasses[GPRRegClassID],
    GPRSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false,
    0x00, /* TSFlags */
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

} // end namespace Rymo

namespace {
  const TargetRegisterClass *const RegisterClasses[] = {
    &Rymo::GPRRegClass,
  };
} // end anonymous namespace

static const uint8_t CostPerUseTable[] = { 
0, 0, 0, 0, 0, 0, };


static const bool InAllocatableClassTable[] = { 
false, true, true, true, true, true, };


static const TargetRegisterInfoDesc RymoRegInfoDesc = { // Extra Descriptors
CostPerUseTable, 1, InAllocatableClassTable};

/// Get the weight in units of pressure for this register class.
const RegClassWeight &RymoGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 5},  	// GPR
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned RymoGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 5 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned RymoGenRegisterInfo::getNumRegPressureSets() const {
  return 1;
}

// Get the name of this register unit pressure set.
const char *RymoGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *PressureNameTable[] = {
    "GPR",
  };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned RymoGenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    5,  	// 0: GPR
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 0, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int *RymoGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint8_t RCSetStartTable[] = {
    0,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int *RymoGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 5 && "invalid register unit");
  static const uint8_t RUSetStartTable[] = {
    0,0,0,0,0,};
  return &RCSetsTable[RUSetStartTable[RegUnit]];
}

extern const MCRegisterDesc RymoRegDesc[];
extern const int16_t RymoRegDiffLists[];
extern const LaneBitmask RymoLaneMaskLists[];
extern const char RymoRegStrings[];
extern const char RymoRegClassStrings[];
extern const MCPhysReg RymoRegUnitRoots[][2];
extern const uint16_t RymoSubRegIdxLists[];
extern const uint16_t RymoRegEncodingTable[];
RymoGenRegisterInfo::
RymoGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour,
      unsigned PC, unsigned HwMode)
  : TargetRegisterInfo(&RymoRegInfoDesc, RegisterClasses, RegisterClasses+1,
             SubRegIndexNameTable, SubRegIdxRangeTable, SubRegIndexLaneMaskTable,
             LaneBitmask(0xFFFFFFFFFFFFFFFF), RegClassInfos, VTLists, HwMode) {
  InitMCRegisterInfo(RymoRegDesc, 6, RA, PC,
                     RymoMCRegisterClasses, 1,
                     RymoRegUnitRoots,
                     5,
                     RymoRegDiffLists,
                     RymoLaneMaskLists,
                     RymoRegStrings,
                     RymoRegClassStrings,
                     RymoSubRegIdxLists,
                     1,
                     RymoRegEncodingTable);

}



ArrayRef<const uint32_t *> RymoGenRegisterInfo::getRegMasks() const {
  return std::nullopt;
}

bool RymoGenRegisterInfo::
isGeneralPurposeRegister(const MachineFunction &MF, MCRegister PhysReg) const {
  return
      false;
}

bool RymoGenRegisterInfo::
isFixedRegister(const MachineFunction &MF, MCRegister PhysReg) const {
  return
      false;
}

bool RymoGenRegisterInfo::
isArgumentRegister(const MachineFunction &MF, MCRegister PhysReg) const {
  return
      false;
}

bool RymoGenRegisterInfo::
isConstantPhysReg(MCRegister PhysReg) const {
  return
      PhysReg == Rymo::X0 ||
      false;
}

ArrayRef<const char *> RymoGenRegisterInfo::getRegMaskNames() const {
  return std::nullopt;
}

const RymoFrameLowering *
RymoGenRegisterInfo::getFrameLowering(const MachineFunction &MF) {
  return static_cast<const RymoFrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}

} // end namespace llvm

#endif // GET_REGINFO_TARGET_DESC


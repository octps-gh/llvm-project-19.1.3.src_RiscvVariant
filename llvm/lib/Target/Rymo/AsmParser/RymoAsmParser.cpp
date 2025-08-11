//===-- RISCVNAsmParser.cpp - Parse RISCVN assembly to MCInst instructions
//--===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "MCTargetDesc/RymoInstPrinter.h"
#include "MCTargetDesc/RymoMCTargetDesc.h"
#include "TargetInfo/RymoTargetInfo.h"
#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCExpr.h"
#include "llvm/MC/MCInst.h"
#include "llvm/MC/MCInstrInfo.h"
#include "llvm/MC/MCParser/MCAsmLexer.h"
#include "llvm/MC/MCParser/MCParsedAsmOperand.h"
#include "llvm/MC/MCParser/MCTargetAsmParser.h"
#include "llvm/MC/MCStreamer.h"
#include "llvm/MC/MCSubtargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Support/Casting.h"

using namespace llvm;

namespace {
struct RymoOperand;

class RymoAsmParser : public MCTargetAsmParser {
  SMLoc getLoc() const { return getParser().getTok().getLoc(); }

  bool MatchAndEmitInstruction(SMLoc IDLoc, unsigned &Opcode,
                               OperandVector &Operands, MCStreamer &Out,
                               uint64_t &ErrorInfo,
                               bool MatchingInlineAsm) override;

  bool parseRegister(MCRegister &RegNo, SMLoc &StartLoc,
                     SMLoc &EndLoc) override;

  ParseStatus tryParseRegister(MCRegister &RegNo, SMLoc &StartLoc,
                               SMLoc &EndLoc) override;

  bool ParseInstruction(ParseInstructionInfo &Info, StringRef Name,
                        SMLoc NameLoc, OperandVector &Operands) override;

#define GET_ASSEMBLER_HEADER
#include "RymoGenAsmMatcher.inc"

  ParseStatus parseImmediate(OperandVector &Operands);
  ParseStatus parseRegister(OperandVector &Operands);
  void parseMnemonic(StringRef Name, OperandVector &Operands);

public:
  enum RymoMatchResultTy {
    Match_Dummy = FIRST_TARGET_MATCH_RESULT_TY,
#define GET_OPERAND_DIAGNOSTIC_TYPES
#include "RymoGenAsmMatcher.inc"
#undef GET_OPERAND_DIAGNOSTIC_TYPES
  };

  RymoAsmParser(const MCSubtargetInfo &STI, MCAsmParser &Parser,
                  const MCInstrInfo &MII, const MCTargetOptions &Options)
      : MCTargetAsmParser(Options, STI, MII) {
    setAvailableFeatures(ComputeAvailableFeatures(STI.getFeatureBits()));
  }
};

/// RISCVNOperand - Instances of this class represent a parsed machine
/// instruction
struct RymoOperand : public MCParsedAsmOperand {

  enum KindTy { Token, Register, Immediate } Kind;

  SMLoc StartLoc, EndLoc;

  struct RegOp {
    unsigned RegNum;
  };

  struct ImmOp {
    const MCExpr *Val;
  };

  SmallVector<unsigned, 8> Registers;
  union {
    StringRef Tok;
    RegOp Reg;
    ImmOp Imm;
  };

  RymoOperand(KindTy K) : Kind(K) {}

public:
  RymoOperand(const RymoOperand &o) : MCParsedAsmOperand() {
    Kind = o.Kind;
    StartLoc = o.StartLoc;
    EndLoc = o.EndLoc;

    switch (Kind) {
    case Register:
      Reg = o.Reg;
      break;
    case Immediate:
      Imm = o.Imm;
      break;
    case Token:
      Tok = o.Tok;
      break;
    }
  }

  bool isToken() const override { return Kind == Token; }
  bool isReg() const override { return Kind == Register; }
  bool isImm() const override { return Kind == Immediate; }
  bool isMem() const override { return false; }

  /// getStartLoc - Get the location of the first token of this operand.
  SMLoc getStartLoc() const override { return StartLoc; }

  /// getEndLoc - Get the location of the last token of this operand.
  SMLoc getEndLoc() const override { return EndLoc; }

  MCRegister getReg() const override {
    assert(Kind == Register && "Invalid Register type!");
    return Reg.RegNum;
  }

  const MCExpr *getImm() const {
    assert(Kind == Immediate && "Invalid Immediate type!");
    return Imm.Val;
  }

  StringRef getToken() const {
    assert(Kind == Token && "Invalid Token type!");
    return Tok;
  }

  void print(raw_ostream &OS) const override {
    auto RegName = [](MCRegister Reg) {
      if (Reg)
        return RymoInstPrinter::getRegisterName(Reg);
      else
        return "noreg";
    };

    switch (Kind) {
    case Immediate:
      OS << *getImm();
      break;
    case Register:
      OS << "<register " << RegName(getReg()) << ">";
      break;
    case Token:
      OS << "'" << getToken() << "'";
      break;
    default:
      break;
    }
  }

  static std::unique_ptr<RymoOperand> createToken(StringRef Str, SMLoc S) {
    auto Op = std::make_unique<RymoOperand>(Token);
    Op->Tok = Str;
    Op->StartLoc = S;
    Op->EndLoc = S;
    return Op;
  }

  static std::unique_ptr<RymoOperand> createReg(unsigned RegNo, SMLoc S,
                                                  SMLoc E) {
    auto Op = std::make_unique<RymoOperand>(Register);
    Op->Reg.RegNum = RegNo;
    Op->StartLoc = S;
    Op->EndLoc = E;
    return Op;
  }

  static std::unique_ptr<RymoOperand> createImm(const MCExpr *Val, SMLoc S,
                                                  SMLoc E) {
    auto Op = std::make_unique<RymoOperand>(Immediate);
    Op->Imm.Val = Val;
    Op->StartLoc = S;
    Op->EndLoc = E;
    return Op;
  }

  void addExpr(MCInst &Inst, const MCExpr *Expr) const {
    assert(Expr && "Expr shouldn't be null!");

    if (auto *CE = dyn_cast<MCConstantExpr>(Expr))
      Inst.addOperand(MCOperand::createImm(CE->getValue()));
    else
      Inst.addOperand(MCOperand::createExpr(Expr));
  }

  void addRegOperands(MCInst &Inst, unsigned N) const {
    assert(N == 1 && "Invalid number of operands!");
    Inst.addOperand(MCOperand::createReg(getReg()));
  }

  void addImmOperands(MCInst &Inst, unsigned N) const {
    assert(N == 1 && "Invalid number of operands!");
    addExpr(Inst, getImm());
  }
};

} // end anonymous namespace.

#define GET_REGISTER_MATCHER
#define GET_MATCHER_IMPLEMENTATION
#include "RymoGenAsmMatcher.inc"

bool RymoAsmParser::MatchAndEmitInstruction(SMLoc IDLoc, unsigned &Opcode,
                                              OperandVector &Operands,
                                              MCStreamer &Out,
                                              uint64_t &ErrorInfo,
                                              bool MatchingInlineAsm) {
  MCInst Inst;
  SMLoc ErrorLoc;

  switch (MatchInstructionImpl(Operands, Inst, ErrorInfo, MatchingInlineAsm)) {
  default:
    break;
  case Match_Success:
    Inst.setLoc(IDLoc);
    Out.emitInstruction(Inst, getSTI());
    return false;
  case Match_MissingFeature:
    return Error(IDLoc, "instruction use requires an option to be enabled");
  case Match_MnemonicFail:
    return Error(IDLoc, "unrecognized instruction mnemonic");
  case Match_InvalidOperand:
    ErrorLoc = IDLoc;

    if (ErrorInfo != ~0U) {
      if (ErrorInfo >= Operands.size())
        return Error(ErrorLoc, "too few operands for instruction");

      ErrorLoc = ((RymoOperand &)*Operands[ErrorInfo]).getStartLoc();

      if (ErrorLoc == SMLoc())
        ErrorLoc = IDLoc;
    }
    return Error(ErrorLoc, "invalid operand for instruction");
  }

  llvm_unreachable("Unknown match type detected!");
}

bool RymoAsmParser::parseRegister(MCRegister &RegNo, SMLoc &StartLoc,
                                    SMLoc &EndLoc) {
  if (!tryParseRegister(RegNo, StartLoc, EndLoc).isSuccess())
    return Error(StartLoc, "invalid register name");
  return false;
}

ParseStatus RymoAsmParser::tryParseRegister(MCRegister &RegNo,
                                              SMLoc &StartLoc, SMLoc &EndLoc) {
  const AsmToken &Tok = getParser().getTok();
  StartLoc = Tok.getLoc();
  EndLoc = Tok.getEndLoc();
  RegNo = 0;
  StringRef Name = getLexer().getTok().getIdentifier();

  if (!MatchRegisterName(Name)) {
    getParser().Lex(); // Eat identifier token.
    return ParseStatus::Success;
  }

  return ParseStatus::NoMatch;
}

ParseStatus RymoAsmParser::parseRegister(OperandVector &Operands) {
  SMLoc S = getLoc();
  SMLoc E = SMLoc::getFromPointer(S.getPointer() - 1);

  switch (getLexer().getKind()) {
  default:
    return ParseStatus::NoMatch;
  case AsmToken::Identifier:
    std::string LowerCase = getLexer().getTok().getString().lower();
    unsigned RegNo = MatchRegisterName(LowerCase);
    if (RegNo == Rymo::NoRegister) {
      RegNo = MatchRegisterAltName(LowerCase);
    }

    if (RegNo == Rymo::NoRegister) {
      return ParseStatus::NoMatch;
    }

    getLexer().Lex();
    Operands.push_back(RymoOperand::createReg(RegNo, S, E));
  }
  return ParseStatus::Success;
}

ParseStatus RymoAsmParser::parseImmediate(OperandVector &Operands) {

  switch (getLexer().getKind()) {
  default:
    return ParseStatus::NoMatch;
  case AsmToken::Integer:
    break;
  }

  const MCExpr *IdVal;
  SMLoc S = getLoc();

  if (getParser().parseExpression(IdVal))
    return ParseStatus::Failure;

  SMLoc E = SMLoc::getFromPointer(S.getPointer() - 1);

  Operands.push_back(RymoOperand::createImm(IdVal, S, E));
  return ParseStatus::Success;
}

void RymoAsmParser::parseMnemonic(StringRef Name, OperandVector &Operands) {
  Operands.push_back(RymoOperand::createToken(Name, getLoc()));
}

/// ParseInstruction - Parse an RISCVN instruction which is in RISCVN verifier
/// format.
bool RymoAsmParser::ParseInstruction(ParseInstructionInfo &Info,
                                       StringRef Name, SMLoc NameLoc,
                                       OperandVector &Operands) {

  // Process the ASM mnemonic.
  parseMnemonic(Name, Operands);

  while (!getLexer().is(AsmToken::EndOfStatement)) {
    // Attempt to parse token as register
    if (parseRegister(Operands).isSuccess()) {
      if (getParser().getTok().is(AsmToken::Comma)) {
        getParser().Lex();
      }
      continue;
    }

    // Attempt to parse token as an immediate
    if (parseImmediate(Operands).isSuccess()) {
      if (getParser().getTok().is(AsmToken::Comma)) {
        getParser().Lex();
      }
    } else {
      SMLoc Loc = getLexer().getLoc();
      return Error(Loc, "unexpected token");
    }
  }

  if (getLexer().isNot(AsmToken::EndOfStatement)) {
    SMLoc Loc = getLexer().getLoc();

    getParser().eatToEndOfStatement();

    return Error(Loc, "unexpected token");
  }

  // Consume the EndOfStatement.
  getParser().Lex();
  return false;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeRymoAsmParser() {
  RegisterMCAsmParser<RymoAsmParser> X(getTheRymoTarget());
}

// Generated from compute.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "computeListener.h"


/**
 * This class provides an empty implementation of computeListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  computeBaseListener : public computeListener {
public:

  virtual void enterProg(computeParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(computeParser::ProgContext * /*ctx*/) override { }

  virtual void enterPrintExpr(computeParser::PrintExprContext * /*ctx*/) override { }
  virtual void exitPrintExpr(computeParser::PrintExprContext * /*ctx*/) override { }

  virtual void enterAssign(computeParser::AssignContext * /*ctx*/) override { }
  virtual void exitAssign(computeParser::AssignContext * /*ctx*/) override { }

  virtual void enterBlank(computeParser::BlankContext * /*ctx*/) override { }
  virtual void exitBlank(computeParser::BlankContext * /*ctx*/) override { }

  virtual void enterParens(computeParser::ParensContext * /*ctx*/) override { }
  virtual void exitParens(computeParser::ParensContext * /*ctx*/) override { }

  virtual void enterDecimalInt(computeParser::DecimalIntContext * /*ctx*/) override { }
  virtual void exitDecimalInt(computeParser::DecimalIntContext * /*ctx*/) override { }

  virtual void enterIdentifier(computeParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(computeParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterOctalInt(computeParser::OctalIntContext * /*ctx*/) override { }
  virtual void exitOctalInt(computeParser::OctalIntContext * /*ctx*/) override { }

  virtual void enterMulDiv(computeParser::MulDivContext * /*ctx*/) override { }
  virtual void exitMulDiv(computeParser::MulDivContext * /*ctx*/) override { }

  virtual void enterAddSub(computeParser::AddSubContext * /*ctx*/) override { }
  virtual void exitAddSub(computeParser::AddSubContext * /*ctx*/) override { }

  virtual void enterHexInt(computeParser::HexIntContext * /*ctx*/) override { }
  virtual void exitHexInt(computeParser::HexIntContext * /*ctx*/) override { }

  virtual void enterBindary(computeParser::BindaryContext * /*ctx*/) override { }
  virtual void exitBindary(computeParser::BindaryContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


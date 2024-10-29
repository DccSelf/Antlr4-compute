
// Generated from compute.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "computeParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by computeParser.
 */
class  computeListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(computeParser::ProgContext *ctx) = 0;
  virtual void exitProg(computeParser::ProgContext *ctx) = 0;

  virtual void enterPrintExpr(computeParser::PrintExprContext *ctx) = 0;
  virtual void exitPrintExpr(computeParser::PrintExprContext *ctx) = 0;

  virtual void enterAssign(computeParser::AssignContext *ctx) = 0;
  virtual void exitAssign(computeParser::AssignContext *ctx) = 0;

  virtual void enterBlank(computeParser::BlankContext *ctx) = 0;
  virtual void exitBlank(computeParser::BlankContext *ctx) = 0;

  virtual void enterParens(computeParser::ParensContext *ctx) = 0;
  virtual void exitParens(computeParser::ParensContext *ctx) = 0;

  virtual void enterDecimalInt(computeParser::DecimalIntContext *ctx) = 0;
  virtual void exitDecimalInt(computeParser::DecimalIntContext *ctx) = 0;

  virtual void enterIdentifier(computeParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(computeParser::IdentifierContext *ctx) = 0;

  virtual void enterOctalInt(computeParser::OctalIntContext *ctx) = 0;
  virtual void exitOctalInt(computeParser::OctalIntContext *ctx) = 0;

  virtual void enterMulDiv(computeParser::MulDivContext *ctx) = 0;
  virtual void exitMulDiv(computeParser::MulDivContext *ctx) = 0;

  virtual void enterAddSub(computeParser::AddSubContext *ctx) = 0;
  virtual void exitAddSub(computeParser::AddSubContext *ctx) = 0;

  virtual void enterHexInt(computeParser::HexIntContext *ctx) = 0;
  virtual void exitHexInt(computeParser::HexIntContext *ctx) = 0;

  virtual void enterBindary(computeParser::BindaryContext *ctx) = 0;
  virtual void exitBindary(computeParser::BindaryContext *ctx) = 0;


};


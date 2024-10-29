
// Generated from compute.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "computeVisitor.h"


/**
 * This class provides an empty implementation of computeVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  computeBaseVisitor : public computeVisitor {
public:

  virtual std::any visitProg(computeParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintExpr(computeParser::PrintExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign(computeParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlank(computeParser::BlankContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParens(computeParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecimalInt(computeParser::DecimalIntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(computeParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOctalInt(computeParser::OctalIntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDiv(computeParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSub(computeParser::AddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHexInt(computeParser::HexIntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBindary(computeParser::BindaryContext *ctx) override {
    return visitChildren(ctx);
  }


};


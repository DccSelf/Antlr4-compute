
// Generated from compute.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "computeParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by computeParser.
 */
class  computeVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by computeParser.
   */
    virtual std::any visitProg(computeParser::ProgContext *context) = 0;

    virtual std::any visitPrintExpr(computeParser::PrintExprContext *context) = 0;

    virtual std::any visitAssign(computeParser::AssignContext *context) = 0;

    virtual std::any visitBlank(computeParser::BlankContext *context) = 0;

    virtual std::any visitParens(computeParser::ParensContext *context) = 0;

    virtual std::any visitDecimalInt(computeParser::DecimalIntContext *context) = 0;

    virtual std::any visitIdentifier(computeParser::IdentifierContext *context) = 0;

    virtual std::any visitOctalInt(computeParser::OctalIntContext *context) = 0;

    virtual std::any visitMulDiv(computeParser::MulDivContext *context) = 0;

    virtual std::any visitAddSub(computeParser::AddSubContext *context) = 0;

    virtual std::any visitHexInt(computeParser::HexIntContext *context) = 0;

    virtual std::any visitBindary(computeParser::BindaryContext *context) = 0;


};



// Generated from compute.g4 by ANTLR 4.13.2


#include "computeListener.h"
#include "computeVisitor.h"

#include "computeParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ComputeParserStaticData final {
  ComputeParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ComputeParserStaticData(const ComputeParserStaticData&) = delete;
  ComputeParserStaticData(ComputeParserStaticData&&) = delete;
  ComputeParserStaticData& operator=(const ComputeParserStaticData&) = delete;
  ComputeParserStaticData& operator=(ComputeParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag computeParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<ComputeParserStaticData> computeParserStaticData = nullptr;

void computeParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (computeParserStaticData != nullptr) {
    return;
  }
#else
  assert(computeParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ComputeParserStaticData>(
    std::vector<std::string>{
      "prog", "stat", "expr"
    },
    std::vector<std::string>{
      "", "'='", "'('", "')'", "'-'", "'+'", "'*'", "'/'"
    },
    std::vector<std::string>{
      "", "", "", "", "Sub", "Add", "Mul", "Div", "DecimalInt", "OctalInt", 
      "Bindary", "HexInt", "Identifier", "NEWLINE", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,14,46,2,0,7,0,2,1,7,1,2,2,7,2,1,0,4,0,8,8,0,11,0,12,0,9,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,21,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,3,2,33,8,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,41,8,2,10,2,12,2,44,9,
  	2,1,2,0,1,4,3,0,2,4,0,2,1,0,6,7,1,0,4,5,52,0,7,1,0,0,0,2,20,1,0,0,0,4,
  	32,1,0,0,0,6,8,3,2,1,0,7,6,1,0,0,0,8,9,1,0,0,0,9,7,1,0,0,0,9,10,1,0,0,
  	0,10,1,1,0,0,0,11,12,3,4,2,0,12,13,5,13,0,0,13,21,1,0,0,0,14,15,5,12,
  	0,0,15,16,5,1,0,0,16,17,3,4,2,0,17,18,5,13,0,0,18,21,1,0,0,0,19,21,5,
  	13,0,0,20,11,1,0,0,0,20,14,1,0,0,0,20,19,1,0,0,0,21,3,1,0,0,0,22,23,6,
  	2,-1,0,23,33,5,8,0,0,24,33,5,10,0,0,25,33,5,9,0,0,26,33,5,11,0,0,27,33,
  	5,12,0,0,28,29,5,2,0,0,29,30,3,4,2,0,30,31,5,3,0,0,31,33,1,0,0,0,32,22,
  	1,0,0,0,32,24,1,0,0,0,32,25,1,0,0,0,32,26,1,0,0,0,32,27,1,0,0,0,32,28,
  	1,0,0,0,33,42,1,0,0,0,34,35,10,8,0,0,35,36,7,0,0,0,36,41,3,4,2,9,37,38,
  	10,7,0,0,38,39,7,1,0,0,39,41,3,4,2,8,40,34,1,0,0,0,40,37,1,0,0,0,41,44,
  	1,0,0,0,42,40,1,0,0,0,42,43,1,0,0,0,43,5,1,0,0,0,44,42,1,0,0,0,5,9,20,
  	32,40,42
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  computeParserStaticData = std::move(staticData);
}

}

computeParser::computeParser(TokenStream *input) : computeParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

computeParser::computeParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  computeParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *computeParserStaticData->atn, computeParserStaticData->decisionToDFA, computeParserStaticData->sharedContextCache, options);
}

computeParser::~computeParser() {
  delete _interpreter;
}

const atn::ATN& computeParser::getATN() const {
  return *computeParserStaticData->atn;
}

std::string computeParser::getGrammarFileName() const {
  return "compute.g4";
}

const std::vector<std::string>& computeParser::getRuleNames() const {
  return computeParserStaticData->ruleNames;
}

const dfa::Vocabulary& computeParser::getVocabulary() const {
  return computeParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView computeParser::getSerializedATN() const {
  return computeParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

computeParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<computeParser::StatContext *> computeParser::ProgContext::stat() {
  return getRuleContexts<computeParser::StatContext>();
}

computeParser::StatContext* computeParser::ProgContext::stat(size_t i) {
  return getRuleContext<computeParser::StatContext>(i);
}


size_t computeParser::ProgContext::getRuleIndex() const {
  return computeParser::RuleProg;
}

void computeParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void computeParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


std::any computeParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<computeVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

computeParser::ProgContext* computeParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, computeParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(7); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(6);
      stat();
      setState(9); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16132) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

computeParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t computeParser::StatContext::getRuleIndex() const {
  return computeParser::RuleStat;
}

void computeParser::StatContext::copyFrom(StatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BlankContext ------------------------------------------------------------------

tree::TerminalNode* computeParser::BlankContext::NEWLINE() {
  return getToken(computeParser::NEWLINE, 0);
}

computeParser::BlankContext::BlankContext(StatContext *ctx) { copyFrom(ctx); }

void computeParser::BlankContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlank(this);
}
void computeParser::BlankContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlank(this);
}

std::any computeParser::BlankContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<computeVisitor*>(visitor))
    return parserVisitor->visitBlank(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintExprContext ------------------------------------------------------------------

computeParser::ExprContext* computeParser::PrintExprContext::expr() {
  return getRuleContext<computeParser::ExprContext>(0);
}

tree::TerminalNode* computeParser::PrintExprContext::NEWLINE() {
  return getToken(computeParser::NEWLINE, 0);
}

computeParser::PrintExprContext::PrintExprContext(StatContext *ctx) { copyFrom(ctx); }

void computeParser::PrintExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintExpr(this);
}
void computeParser::PrintExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintExpr(this);
}

std::any computeParser::PrintExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<computeVisitor*>(visitor))
    return parserVisitor->visitPrintExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignContext ------------------------------------------------------------------

tree::TerminalNode* computeParser::AssignContext::Identifier() {
  return getToken(computeParser::Identifier, 0);
}

computeParser::ExprContext* computeParser::AssignContext::expr() {
  return getRuleContext<computeParser::ExprContext>(0);
}

tree::TerminalNode* computeParser::AssignContext::NEWLINE() {
  return getToken(computeParser::NEWLINE, 0);
}

computeParser::AssignContext::AssignContext(StatContext *ctx) { copyFrom(ctx); }

void computeParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}
void computeParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}

std::any computeParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<computeVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}
computeParser::StatContext* computeParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, computeParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(20);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<computeParser::PrintExprContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(11);
      expr(0);
      setState(12);
      match(computeParser::NEWLINE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<computeParser::AssignContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(14);
      match(computeParser::Identifier);
      setState(15);
      match(computeParser::T__0);
      setState(16);
      expr(0);
      setState(17);
      match(computeParser::NEWLINE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<computeParser::BlankContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(19);
      match(computeParser::NEWLINE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

computeParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t computeParser::ExprContext::getRuleIndex() const {
  return computeParser::RuleExpr;
}

void computeParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParensContext ------------------------------------------------------------------

computeParser::ExprContext* computeParser::ParensContext::expr() {
  return getRuleContext<computeParser::ExprContext>(0);
}

computeParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }

void computeParser::ParensContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParens(this);
}
void computeParser::ParensContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParens(this);
}

std::any computeParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<computeVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecimalIntContext ------------------------------------------------------------------

tree::TerminalNode* computeParser::DecimalIntContext::DecimalInt() {
  return getToken(computeParser::DecimalInt, 0);
}

computeParser::DecimalIntContext::DecimalIntContext(ExprContext *ctx) { copyFrom(ctx); }

void computeParser::DecimalIntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecimalInt(this);
}
void computeParser::DecimalIntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecimalInt(this);
}

std::any computeParser::DecimalIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<computeVisitor*>(visitor))
    return parserVisitor->visitDecimalInt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdentifierContext ------------------------------------------------------------------

tree::TerminalNode* computeParser::IdentifierContext::Identifier() {
  return getToken(computeParser::Identifier, 0);
}

computeParser::IdentifierContext::IdentifierContext(ExprContext *ctx) { copyFrom(ctx); }

void computeParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}
void computeParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}

std::any computeParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<computeVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OctalIntContext ------------------------------------------------------------------

tree::TerminalNode* computeParser::OctalIntContext::OctalInt() {
  return getToken(computeParser::OctalInt, 0);
}

computeParser::OctalIntContext::OctalIntContext(ExprContext *ctx) { copyFrom(ctx); }

void computeParser::OctalIntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOctalInt(this);
}
void computeParser::OctalIntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOctalInt(this);
}

std::any computeParser::OctalIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<computeVisitor*>(visitor))
    return parserVisitor->visitOctalInt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<computeParser::ExprContext *> computeParser::MulDivContext::expr() {
  return getRuleContexts<computeParser::ExprContext>();
}

computeParser::ExprContext* computeParser::MulDivContext::expr(size_t i) {
  return getRuleContext<computeParser::ExprContext>(i);
}

tree::TerminalNode* computeParser::MulDivContext::Mul() {
  return getToken(computeParser::Mul, 0);
}

tree::TerminalNode* computeParser::MulDivContext::Div() {
  return getToken(computeParser::Div, 0);
}

computeParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }

void computeParser::MulDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDiv(this);
}
void computeParser::MulDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDiv(this);
}

std::any computeParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<computeVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<computeParser::ExprContext *> computeParser::AddSubContext::expr() {
  return getRuleContexts<computeParser::ExprContext>();
}

computeParser::ExprContext* computeParser::AddSubContext::expr(size_t i) {
  return getRuleContext<computeParser::ExprContext>(i);
}

tree::TerminalNode* computeParser::AddSubContext::Add() {
  return getToken(computeParser::Add, 0);
}

tree::TerminalNode* computeParser::AddSubContext::Sub() {
  return getToken(computeParser::Sub, 0);
}

computeParser::AddSubContext::AddSubContext(ExprContext *ctx) { copyFrom(ctx); }

void computeParser::AddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSub(this);
}
void computeParser::AddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSub(this);
}

std::any computeParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<computeVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HexIntContext ------------------------------------------------------------------

tree::TerminalNode* computeParser::HexIntContext::HexInt() {
  return getToken(computeParser::HexInt, 0);
}

computeParser::HexIntContext::HexIntContext(ExprContext *ctx) { copyFrom(ctx); }

void computeParser::HexIntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHexInt(this);
}
void computeParser::HexIntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHexInt(this);
}

std::any computeParser::HexIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<computeVisitor*>(visitor))
    return parserVisitor->visitHexInt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BindaryContext ------------------------------------------------------------------

tree::TerminalNode* computeParser::BindaryContext::Bindary() {
  return getToken(computeParser::Bindary, 0);
}

computeParser::BindaryContext::BindaryContext(ExprContext *ctx) { copyFrom(ctx); }

void computeParser::BindaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBindary(this);
}
void computeParser::BindaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<computeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBindary(this);
}

std::any computeParser::BindaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<computeVisitor*>(visitor))
    return parserVisitor->visitBindary(this);
  else
    return visitor->visitChildren(this);
}

computeParser::ExprContext* computeParser::expr() {
   return expr(0);
}

computeParser::ExprContext* computeParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  computeParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  computeParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, computeParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(32);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case computeParser::DecimalInt: {
        _localctx = _tracker.createInstance<DecimalIntContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(23);
        match(computeParser::DecimalInt);
        break;
      }

      case computeParser::Bindary: {
        _localctx = _tracker.createInstance<BindaryContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(24);
        match(computeParser::Bindary);
        break;
      }

      case computeParser::OctalInt: {
        _localctx = _tracker.createInstance<OctalIntContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(25);
        match(computeParser::OctalInt);
        break;
      }

      case computeParser::HexInt: {
        _localctx = _tracker.createInstance<HexIntContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(26);
        match(computeParser::HexInt);
        break;
      }

      case computeParser::Identifier: {
        _localctx = _tracker.createInstance<IdentifierContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(27);
        match(computeParser::Identifier);
        break;
      }

      case computeParser::T__1: {
        _localctx = _tracker.createInstance<ParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(28);
        match(computeParser::T__1);
        setState(29);
        expr(0);
        setState(30);
        match(computeParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(42);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(40);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(34);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(35);
          antlrcpp::downCast<MulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == computeParser::Mul

          || _la == computeParser::Div)) {
            antlrcpp::downCast<MulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(36);
          expr(9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(37);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(38);
          antlrcpp::downCast<AddSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == computeParser::Sub

          || _la == computeParser::Add)) {
            antlrcpp::downCast<AddSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(39);
          expr(8);
          break;
        }

        default:
          break;
        } 
      }
      setState(44);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool computeParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool computeParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);

  default:
    break;
  }
  return true;
}

void computeParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  computeParserInitialize();
#else
  ::antlr4::internal::call_once(computeParserOnceFlag, computeParserInitialize);
#endif
}

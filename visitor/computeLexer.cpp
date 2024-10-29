
// Generated from compute.g4 by ANTLR 4.13.2


#include "computeLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ComputeLexerStaticData final {
  ComputeLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ComputeLexerStaticData(const ComputeLexerStaticData&) = delete;
  ComputeLexerStaticData(ComputeLexerStaticData&&) = delete;
  ComputeLexerStaticData& operator=(const ComputeLexerStaticData&) = delete;
  ComputeLexerStaticData& operator=(ComputeLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag computelexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<ComputeLexerStaticData> computelexerLexerStaticData = nullptr;

void computelexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (computelexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(computelexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ComputeLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "Sub", "Add", "Mul", "Div", "DecimalInt", 
      "OctalInt", "Bindary", "HexInt", "Identifier", "NEWLINE", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,14,85,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,
  	1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,4,7,45,8,7,11,
  	7,12,7,46,1,8,1,8,1,8,4,8,52,8,8,11,8,12,8,53,1,9,1,9,1,9,4,9,59,8,9,
  	11,9,12,9,60,1,10,1,10,1,10,4,10,66,8,10,11,10,12,10,67,1,11,1,11,5,11,
  	72,8,11,10,11,12,11,75,9,11,1,12,3,12,78,8,12,1,12,1,12,1,13,1,13,1,13,
  	1,13,0,0,14,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,
  	25,13,27,14,1,0,10,1,0,48,57,2,0,79,79,111,111,1,0,48,55,2,0,66,66,98,
  	98,1,0,48,49,2,0,88,88,120,120,3,0,48,57,65,70,97,102,3,0,65,90,95,95,
  	97,122,4,0,48,57,65,90,95,95,97,122,3,0,9,10,13,13,32,32,90,0,1,1,0,0,
  	0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,
  	0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,
  	0,0,25,1,0,0,0,0,27,1,0,0,0,1,29,1,0,0,0,3,31,1,0,0,0,5,33,1,0,0,0,7,
  	35,1,0,0,0,9,37,1,0,0,0,11,39,1,0,0,0,13,41,1,0,0,0,15,44,1,0,0,0,17,
  	48,1,0,0,0,19,55,1,0,0,0,21,62,1,0,0,0,23,69,1,0,0,0,25,77,1,0,0,0,27,
  	81,1,0,0,0,29,30,5,61,0,0,30,2,1,0,0,0,31,32,5,40,0,0,32,4,1,0,0,0,33,
  	34,5,41,0,0,34,6,1,0,0,0,35,36,5,45,0,0,36,8,1,0,0,0,37,38,5,43,0,0,38,
  	10,1,0,0,0,39,40,5,42,0,0,40,12,1,0,0,0,41,42,5,47,0,0,42,14,1,0,0,0,
  	43,45,7,0,0,0,44,43,1,0,0,0,45,46,1,0,0,0,46,44,1,0,0,0,46,47,1,0,0,0,
  	47,16,1,0,0,0,48,49,5,48,0,0,49,51,7,1,0,0,50,52,7,2,0,0,51,50,1,0,0,
  	0,52,53,1,0,0,0,53,51,1,0,0,0,53,54,1,0,0,0,54,18,1,0,0,0,55,56,5,48,
  	0,0,56,58,7,3,0,0,57,59,7,4,0,0,58,57,1,0,0,0,59,60,1,0,0,0,60,58,1,0,
  	0,0,60,61,1,0,0,0,61,20,1,0,0,0,62,63,5,48,0,0,63,65,7,5,0,0,64,66,7,
  	6,0,0,65,64,1,0,0,0,66,67,1,0,0,0,67,65,1,0,0,0,67,68,1,0,0,0,68,22,1,
  	0,0,0,69,73,7,7,0,0,70,72,7,8,0,0,71,70,1,0,0,0,72,75,1,0,0,0,73,71,1,
  	0,0,0,73,74,1,0,0,0,74,24,1,0,0,0,75,73,1,0,0,0,76,78,5,13,0,0,77,76,
  	1,0,0,0,77,78,1,0,0,0,78,79,1,0,0,0,79,80,5,10,0,0,80,26,1,0,0,0,81,82,
  	7,9,0,0,82,83,1,0,0,0,83,84,6,13,0,0,84,28,1,0,0,0,7,0,46,53,60,67,73,
  	77,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  computelexerLexerStaticData = std::move(staticData);
}

}

computeLexer::computeLexer(CharStream *input) : Lexer(input) {
  computeLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *computelexerLexerStaticData->atn, computelexerLexerStaticData->decisionToDFA, computelexerLexerStaticData->sharedContextCache);
}

computeLexer::~computeLexer() {
  delete _interpreter;
}

std::string computeLexer::getGrammarFileName() const {
  return "compute.g4";
}

const std::vector<std::string>& computeLexer::getRuleNames() const {
  return computelexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& computeLexer::getChannelNames() const {
  return computelexerLexerStaticData->channelNames;
}

const std::vector<std::string>& computeLexer::getModeNames() const {
  return computelexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& computeLexer::getVocabulary() const {
  return computelexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView computeLexer::getSerializedATN() const {
  return computelexerLexerStaticData->serializedATN;
}

const atn::ATN& computeLexer::getATN() const {
  return *computelexerLexerStaticData->atn;
}




void computeLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  computelexerLexerInitialize();
#else
  ::antlr4::internal::call_once(computelexerLexerOnceFlag, computelexerLexerInitialize);
#endif
}

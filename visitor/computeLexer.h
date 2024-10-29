
// Generated from compute.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  computeLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, Sub = 4, Add = 5, Mul = 6, Div = 7, DecimalInt = 8, 
    OctalInt = 9, Bindary = 10, HexInt = 11, Identifier = 12, NEWLINE = 13, 
    WS = 14
  };

  explicit computeLexer(antlr4::CharStream *input);

  ~computeLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};


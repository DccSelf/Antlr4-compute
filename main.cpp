#include <iostream>
#include <fstream>
#include <map>
#include <any>
#include <string>
#include "antlr4-runtime.h"
#include "computeLexer.h"
#include "computeParser.h"
#include "computeBaseVisitor.h"

using namespace std;

class EvalVisitor : public computeBaseVisitor {
public:
    // "memory" for our compute; variable/value pairs go here
    map<string, int> memory;

    virtual any visitProg(computeParser::ProgContext *ctx) override {
        // Visit each statement in the program
        for (auto stat : ctx->stat()) {
            visit(stat);
        }
        return nullptr; // or return any value based on your logic
    }

    virtual any visitPrintExpr(computeParser::PrintExprContext *ctx) override {
        int value = any_cast<int>(visit(ctx->expr())); // Evaluate the expression
        cout << "compute value = "<< value << endl; // Print the result
        return nullptr; // Print does not return a value
    }

    virtual any visitAssign(computeParser::AssignContext *ctx) override {
        string id = ctx->Identifier()->getText(); // Get the variable name
        int value = any_cast<int>(visit(ctx->expr())); // Compute value of the expression
        memory[id] = value; // Store it in memory
        return value; // Return the assigned value
    }

    virtual any visitBlank(computeParser::BlankContext *ctx) override {
        cout<<"\r"<<endl;;
        return nullptr; // No action needed for blank lines
    }

    virtual any visitParens(computeParser::ParensContext *ctx) override {
        return visit(ctx->expr()); // Return the value of the expression within parentheses
    }

    virtual any visitDecimalInt(computeParser::DecimalIntContext *ctx) override {
        return stoi(ctx->DecimalInt()->getText()); // Convert text to integer
    }

    virtual any visitIdentifier(computeParser::IdentifierContext *ctx) override {
        string id = ctx->Identifier()->getText();
        // Return the value from memory or 0 if not found
        if (memory.find(id) != memory.end()) {
            return memory[id];
        }
        return 0; // Return 0 for uninitialized variables
    }

    virtual any visitOctalInt(computeParser::OctalIntContext *ctx) override {
        string TempCtx = ctx->OctalInt()->getText();
        string Octal = TempCtx.substr(2); //#0O  0o
        return stoi(Octal, nullptr, 8); // Convert octal string to integer
    }

    virtual any visitHexInt(computeParser::HexIntContext *ctx) override {
        string TempCtx = ctx->HexInt()->getText();
        string Hex = TempCtx.substr(2); //#0X  0x
        return stoi(Hex, nullptr, 16); // Convert hex string to integer
    }

    virtual any visitBindary(computeParser::BindaryContext *ctx) override {
        string TempCtx = ctx->Bindary()->getText();
        string Bindary = TempCtx.substr(2); //#0b  0B
        return stoi(Bindary, nullptr, 2); // Convert binary string to integer
    }

    virtual any visitMulDiv(computeParser::MulDivContext *ctx) override {
        int left = any_cast<int>(visit(ctx->expr(0))); // Evaluate left expression
        int right = any_cast<int>(visit(ctx->expr(1))); // Evaluate right expression
        if (ctx->op->getType() == computeParser::Mul) {
            return left * right; // Return product
        }
        return left / right; // Return quotient
    }

    virtual any visitAddSub(computeParser::AddSubContext *ctx) override {
        int left = any_cast<int>(visit(ctx->expr(0))); // Evaluate left expression
        int right = any_cast<int>(visit(ctx->expr(1))); // Evaluate right expression
        if (ctx->op->getType() == computeParser::Add) {
            return left + right; // Return sum
        }
        return left - right; // Return difference
    }
};

int main(int argc, const char *argv[]) {
    // Create input stream
    ifstream stream;
    if (argc > 1) {
        stream.open(argv[1]);
        if (!stream) {
            cerr << "Could not open file: " << argv[1] << endl;
            return 1;
        }
    } else {
        stream.clear(); // Clear error state to use cin
        stream.basic_ios<char>::rdbuf(cin.rdbuf());
    }

    // Setup ANTLR components
    antlr4::ANTLRInputStream input(stream);
    computeLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    computeParser parser(&tokens);
    
    // Parse the input and create the parse tree
    auto tree = parser.prog();

    // Create the visitor and visit the parse tree
    EvalVisitor eval;
    eval.visit(tree);

    return 0;
}

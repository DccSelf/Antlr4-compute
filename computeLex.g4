lexer grammar computeLex;

Sub : '-';
Add : '+';
Mul : '*';
Div : '/';


DecimalInt
    : [0-9]+
    ;

OctalInt
    : '0'[oO][0-7]+
    ;

Bindary 
    : '0'[bB][01]+ ;

HexInt
    : '0'[xX][0-9a-fA-F]+
    ;

Identifier
    : [a-zA-Z_][a-zA-Z_0-9]*
    ;

NEWLINE : '\r'?'\n';

WS : [ \t\r\n] -> skip;

grammar compute;
import computeLex;

prog: stat+
    ;

stat: expr NEWLINE          # printExpr
    | Identifier '=' expr NEWLINE   # assign
    | NEWLINE               # blank
    ;

expr: expr op=(Mul | Div) expr        # MulDiv
    | expr op=(Add | Sub) expr        # AddSub
    | DecimalInt                    # DecimalInt
    | Bindary                       # Bindary
    | OctalInt                      # OctalInt  
    | HexInt                        # HexInt 
    | Identifier                    # Identifier
    | '(' expr ')'                  # parens
    ;

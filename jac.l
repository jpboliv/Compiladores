%%
BOOL = “boolean”
BOOLLIT = “true” | “false” CLASS = “class”
DO = “do”
DOTLENGTH = “.length” DOUBLE = “double”
ELSE = “else”
IF = “if”
INT = “int”
PARSEINT = “Integer.parseInt” PRINT = “System.out.println” PUBLIC = “public”
RETURN = “return”
STATIC = “static”
STRING = “String”
VOID = “void”
WHILE = “while”
OCURV = “(”
CCURV = “)”
OBRACE = “{”
CBRACE = “}”
OSQUARE = “[”
CSQUARE = “]”
AND = “&&”
OR = “||”
LT = “<”
GT = “>”
EQ = “==”
NEQ = “!=”
LEQ = “<=”
GEQ = “>=”
PLUS = “+”
MINUS = “−”
STAR = “*”
DIV = “/”
MOD = “%”
NOT = “!”
ASSIGN = “=”
SEMI = “;”
COMMA = “,”
RESERVED =
%%

%%
int main()
{
yylex();
return 0;
}

int yywrap()
{
return 1;
}

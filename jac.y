%{
  #include <stdio.h>
  int yylex(void);
  void yyerror(const char *s);
%}

%token BOOL
%token CLASS
%token DO
%token DOTLENGTH
%token DOUBLE
%token ELSE
%token IF
%token INT
%token PARSEINT
%token PRINT
%token PUBLIC
%token RETURN
%token STATIC
%token STRING
%token VOID
%token WHILE
%token OCURV
%token CCURV
%token OBRACE
%token CBRACE
%token OSQUARE
%token CSQUARE
%token AND
%token OR
%token LT
%token GT
%token EQ
%token NEQ
%token GEQ
%token LEQ
%token PLUS
%token MINUS
%token STAR
%token DIV
%token MOD
%token NOT
%token ASSIGN
%token SEMI
%token COMMA
%token RESERVED
%token REALLIT
%token DECLIT
%token BOOLLIT
%token ID
%token STRLIT

%%

Program : CLASS ID OBRACE {FieldDecl | MethodDecl | SEMI} CBRACE {;}

FieldDecl: PUBLIC STATIC Type ID { COMMA ID } SEMI {;}

MethodDecl:  PUBLIC STATIC MethodHeader MethodBody {;}

MethodHeader: ( Type | VOID ) ID OCURV [ FormalParams ] CCURV {;}

MethodBody: OBRACE { VarDecl | Statement } CBRACE {;}

FormalParams:  Type ID { COMMA Type ID }    {;}

FormalParams:  STRING OSQUARE CSQUARE ID    {;}

VarDecl: Type ID { COMMA ID } SEMI    {;}

Type: BOOL | INT | DOUBLE {;}

Statement: OBRACE { Statement } CBRACE    {;}

Statement: IF OCURV Expr CCURV Statement [ ELSE Statement ] {;}

Statement: WHILE OCURV Expr CCURV Statement {;}

Statement: DO Statement WHILE OCURV Expr CCURV SEMI  {;}

Statement: PRINT OCURV ( Expr | STRLIT ) CCURV SEMI  {;}

Statement: [ ( Assignment | MethodInvocation | ParseArgs ) ] SEMI  {;}

Statement: RETURN [ Expr ] SEMI   {;}

Assignment: ID ASSIGN Expr  {;}

MethodInvocation: ID OCURV [ Expr { COMMA Expr } ] CCURV   {;}

ParseArgs: PARSEINT OCURV ID OSQUARE Expr CSQUARE CCURV   {;}

Expr: Assignment | MethodInvocation | ParseArgs  {;}

Expr: Expr ( AND | OR ) Expr  {;}

Expr: Expr ( EQ | GEQ | GT | LEQ | LT | NEQ ) Expr  {;}

Expr: Expr ( PLUS | MINUS | STAR | DIV | MOD ) Expr  {;}

Expr: ( PLUS | MINUS | NOT ) Expr  {;}

Expr: ID [ DOTLENGTH ]  {;}

Expr: OCURV Expr CCURV  {;}

Expr: BOOLLIT | DECLIT | REALLIT  {;}

%%

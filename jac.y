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
calc : ID {;}

%%

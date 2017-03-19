%{
  #include <stdio.h>
  int yylex(void);
  void yyerror(const char *s);

extern int flagError;
extern int nline;
extern int ncolumn;
%}

%token BOOL CLASS DO DOTLENGTH DOUBLE ELSE IF INT PARSEINT PRINT PUBLIC RETURN STATIC STRING VOID WHILE OCURV CCURV OBRACE CBRACE OSQUARE CSQUARE AND OR LT GT EQ NEQ GEQ LEQ
%token PLUS MINUS STAR DIV MOD NOT ASSIGN SEMI COMMA RESERVED REALLIT DECLIT BOOLLIT ID STRLIT

%left COMMA
%right ASSIGN
%left OR
%left AND
%left EQ NEQ
%left LT LEQ GEQ GT
%left PLUS MINUS
%left STAR DIV MOD
%right NOT

%type <node> Program FieldDecl MethodDecl MethodHeader MethodBody FormalParams VarDecl Type Statement Assignment MethodInvocation ParseArgs Expr
%% 

Program : CLASS ID OBRACE {FieldDecl | MethodDecl | SEMI} CBRACE {;}

FieldDecl: PUBLIC STATIC Type ID { COMMA ID } SEMI {;}
 | error SEMI {;}
 ;

MethodDecl:  PUBLIC STATIC MethodHeader MethodBody {;}

MethodHeader:  Aux ID OCURV [ FormalParams ] CCURV  {;}
Aux: VOID | Type {;}

MethodBody: OBRACE { Aux2} CBRACE {;}
Aux2 : VarDecl | Statement {;}

FormalParams:  Type ID { COMMA Type ID }    {;}
	| STRING OSQUARE CSQUARE ID    {;}
	;

VarDecl: Type ID { COMMA ID } SEMI    {;}

Type: BOOL | INT | DOUBLE {;}

Statement: OBRACE { Statement } CBRACE    {;}
	| IF OCURV Expr CCURV Statement Aux10 {;}
	| WHILE OCURV Expr CCURV Statement {;}
	| DO Statement WHILE OCURV Expr CCURV SEMI  {;}
	| PRINT OCURV Aux8 CCURV SEMI  {;}
	| Aux3 SEMI  {;}
	| RETURN [ Expr ] SEMI   {;}
	| error SEMI {;}
	;
Aux3: Assignment | MethodInvocation | ParseArgs |  {;} 
Aux8: Expr | STRLIT {;}
Aux10: ELSE Statement {;}
  | 				  {;}
  ;

Assignment: ID ASSIGN Expr  {;}

MethodInvocation: ID OCURV Aux11 CCURV   {;}
Aux11: Expr { COMMA Expr } {;}
 	| 					   {;}
 	| ID OCURV error CCURV {;}
 	;

ParseArgs: PARSEINT OCURV ID OSQUARE Expr CSQUARE CCURV   {;}
	| PARSEINT OCURV error CCURV {;}
	;
Expr: Assignment | MethodInvocation | ParseArgs  {;}
	| Expr Aux4 Expr  {;}
	| Expr Aux5 Expr  {;}
	| Expr Aux6 Expr  {;}
	| Expr Aux7  {;}
	| ID [ DOTLENGTH ]  {;}
	| OCURV Expr CCURV  {;}
	| BOOLLIT | DECLIT | REALLIT  {;}
	| OCURV error CCURV {;}
	;
Aux4:  AND | OR  {;}
Aux5: EQ | GEQ | GT | LEQ | LT | NEQ {;}
Aux6:  PLUS | MINUS | STAR | DIV | MOD  {;}
Aux7:   PLUS | MINUS | NOT  {;}

%%
void yyerror (const char *s) {
	printf ("Line %d, col %d: %s: %s\n", nline, ncolumn, s, yytext);
}
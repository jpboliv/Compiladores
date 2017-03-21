%{
  #include <stdio.h>
  int yylex(void);
  void yyerror(const char *s);
 extern char *yytext;
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

 /* %type <node> Program FieldDecl MethodDecl MethodHeader MethodBody FormalParams VarDecl Type Statement Assignment MethodInvocation ParseArgs Expr */
%% 

Program : CLASS ID OBRACE auxProgram CBRACE {;}
auxProgram: FieldDecl auxProgram | MethodDecl auxProgram | SEMI auxProgram  {;}
	| %empty {;}
	;

FieldDecl: PUBLIC STATIC Type ID auxFieldDecl SEMI {;}
 	| error SEMI {;}
 	;
 auxFieldDecl: COMMA ID auxFieldDecl {;}
  | %empty {;}
  ;

MethodDecl:  PUBLIC STATIC MethodHeader MethodBody {;}

MethodHeader:  AuxMethodHelper1 ID OCURV auxMethodHelper2 CCURV  {;}
AuxMethodHelper1: VOID | Type {;}
auxMethodHelper2: FormalParams {;}
| %empty {;}

MethodBody: OBRACE AuxMethodBody CBRACE {;}
AuxMethodBody : VarDecl AuxMethodBody {;}
	| Statement AuxMethodBody {;}
	| %empty {;}
	;

FormalParams:  Type ID auxFormalParams    {;}
	| STRING OSQUARE CSQUARE ID    {;}
	;
auxFormalParams: COMMA Type ID auxFormalParams {;}
	| %empty {;}
	;

VarDecl: Type ID auxVarDecl SEMI    {;}
auxVarDecl :  COMMA ID auxVarDecl {;}
  | %empty {;}
  ;

Type: BOOL | INT | DOUBLE {;}

Statement: OBRACE auxStatement4 CBRACE    {;}
	| IF OCURV Expr CCURV Statement auxStatement3 {;}
	| WHILE OCURV Expr CCURV Statement {;}
	| DO Statement WHILE OCURV Expr CCURV SEMI  {;}
	| PRINT OCURV auxStatement2 CCURV SEMI  {;}
	| auxStatement1 SEMI  {;}
	| RETURN auxStatement5 SEMI   {;}
	| error SEMI {;}
	;
auxStatement1: Assignment | MethodInvocation | ParseArgs | %empty {;} 
auxStatement2: Expr | STRLIT {;}
auxStatement3: ELSE Statement {;}
  | %empty				  {;}
  ;
 auxStatement4: Statement auxStatement4{;}
  | %empty {;}
  ;
 auxStatement5: Expr {;}
 	| %empty{;}
 	;

Assignment: ID ASSIGN Expr  {;}

MethodInvocation: ID OCURV AuxMethodInvocation1 CCURV   {;}
 	| ID OCURV error CCURV {;}
 	;
AuxMethodInvocation1: Expr AuxMethodInvocation2 {;}
 	| 	%empty	     {;}
 	;
 AuxMethodInvocation2: COMMA Expr AuxMethodInvocation2 {;}
 	| %empty {;}
 	;


ParseArgs: PARSEINT OCURV ID OSQUARE Expr CSQUARE CCURV   {;}
	| PARSEINT OCURV error CCURV {;}
	;

Expr: Assignment | MethodInvocation | ParseArgs  {;}
	| Expr AuxExpr1 Expr  {;}
	| Expr AuxExpr2 Expr  {;}
	| Expr AuxExpr3 Expr  {;}
	| Expr AuxExpr4  {;}
	| ID [ DOTLENGTH ]  {;}
	| OCURV Expr CCURV  {;}
	| BOOLLIT | DECLIT | REALLIT  {;}
	| OCURV error CCURV {;}
	;
AuxExpr1:  AND | OR  {;}
AuxExpr2: EQ | GEQ | GT | LEQ | LT | NEQ {;}
Auxexpr3:  PLUS | MINUS | STAR | DIV | MOD  {;}
AuxExpr4:   PLUS | MINUS | NOT  {;}

%%
/*void yyerror (const char *s) {
	printf ("Line %d, col %d: %s: %s\n", nline, ncolumn, s, yytext);
}*/
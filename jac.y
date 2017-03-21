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
%right PRECEDENCE
%left OBRACE CBRACE LSQ CCURV RSQ
%nonassoc ELSE

 /* %type <node> Program FieldDecl MethodDecl MethodHeader MethodBody FormalParams VarDecl Type Statement Assignment MethodInvocation ParseArgs Expr */
%%

Program : CLASS ID OBRACE auxProgram CBRACE {;}
auxProgram: FieldDecl auxProgram | MethodDecl auxProgram | SEMI auxProgram  {;}
	| {;}
;

FieldDecl: PUBLIC STATIC Type ID auxFieldDecl SEMI {;}
 	| error SEMI {;}
;
auxFieldDecl: COMMA ID auxFieldDecl {;}
  | {;}
;

MethodDecl:  PUBLIC STATIC MethodHeader MethodBody {;}
;

MethodHeader:  VOID ID OCURV AuxMethodHelper2 CCURV  {;}
    | Type ID OCURV AuxMethodHelper2 CCURV
;

AuxMethodHelper2: FormalParams {;}
  | {;}
;
MethodBody: OBRACE AuxMethodBody CBRACE {;}
;
AuxMethodBody : VarDecl AuxMethodBody {;}
	| Statement AuxMethodBody {;}
	| {;}
;

FormalParams:  Type ID auxFormalParams    {;}
	| STRING OSQUARE CSQUARE ID    {;}
;
auxFormalParams: COMMA Type ID auxFormalParams {;}
	| {;}
;

VarDecl: Type ID auxVarDecl SEMI    {;}
auxVarDecl :  COMMA ID auxVarDecl {;}
  | {;}
;

Type: BOOL  {;}
  | INT     {;}
  | DOUBLE  {;}

Statement: OBRACE auxStatement4 CBRACE    {;}
  | IF OCURV Expr CCURV Statement ELSE Statement {;}
  | IF OCURV Expr CCURV Statement  {;}
	| WHILE OCURV Expr CCURV Statement {;}
	| DO Statement WHILE OCURV Expr CCURV SEMI  {;}
	| PRINT OCURV auxStatement2 CCURV SEMI  {;}
	| auxStatement1 SEMI  {;}
	| RETURN auxStatement5 SEMI   {;}
	| error SEMI {;}
	;
auxStatement1: Assignment | MethodInvocation | ParseArgs | {;}
auxStatement2: Expr | STRLIT {;}
 /*auxStatement3: ELSE Statement {;}
  |	{;}
;*/
auxStatement4: Statement auxStatement4{;}
  | {;}
  ;
auxStatement5: Expr {;}
 	| {;}
 	;

Assignment: ID ASSIGN Expr  {;}

MethodInvocation: ID OCURV AuxMethodInvocation1 CCURV   {;}
 	| ID OCURV error CCURV {;}
 	;
AuxMethodInvocation1: Expr AuxMethodInvocation2 {;}
 	| {;}
 	;
AuxMethodInvocation2: COMMA Expr AuxMethodInvocation2 {;}
 	| {;}
 	;


ParseArgs: PARSEINT OCURV ID OSQUARE Expr CSQUARE CCURV   {;}
	| PARSEINT OCURV error CCURV {;}
	;

Expr: Assignment | MethodInvocation | ParseArgs  {;}
  | Expr AND Expr  {;}
  | Expr OR Expr  {;}
  | Expr EQ Expr  {;}
  | Expr GEQ Expr  {;}
  | Expr GT Expr  {;}
  | Expr LEQ Expr  {;}
  | Expr LT Expr  {;}
  | Expr NEQ Expr  {;}
  | Expr PLUS Expr {;}
  | Expr MINUS Expr {;}
  | Expr STAR Expr {;}
  | Expr DIV Expr {;}
  | Expr MOD Expr {;}
	| Expr PLUS  {;}
  | Expr MINUS  {;}
  | Expr NOT  {;}
	| ID DOTLENGTH  {;}
  | ID {;}
	| OCURV Expr CCURV  {;}
	| BOOLLIT | DECLIT | REALLIT  {;}
	| OCURV error CCURV {;}
;
 /*AuxExpr1:   AND | OR  {;}
AuxExpr2:   EQ | GEQ | GT | LEQ | LT | NEQ {;}
AuxExpr3:   PLUS | MINUS | STAR | DIV | MOD  {;}
AuxExpr4:   PLUS | MINUS | NOT  {;}
Auxexpr5:   DOTLENGTH  {;}
  | {;}
;*/


%%
/*void yyerror (const char *s) {
	printf ("Line %d, col %d: %s: %s\n", nline, ncolumn, s, yytext);
}*/

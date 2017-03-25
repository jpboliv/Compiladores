%{
  #include <stdio.h>
  #include <string.h>
  #include "functions.h"

  extern int flagTreeErros;

  int yylex(void);
  void yyerror(const char *s);
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
%left OBRACE CBRACE CCURV OCURV
%right ELSE

  /*%type <node> Program FieldDecl MethodDecl MethodHeader MethodBody FormalParams VarDecl Type Statement Assignment MethodInvocation ParseArgs Expr */
%%

Program : CLASS ID OBRACE auxProgram CBRACE   {if(flagTreeErros ==1){};}
;
auxProgram: FieldDecl auxProgram              {if(flagTreeErros ==1){};}
  | MethodDecl auxProgram                     {if(flagTreeErros ==1){};}
  | SEMI auxProgram                           {if(flagTreeErros ==1){};}
  | %empty {;}
;

FieldDecl: PUBLIC STATIC auxFieldDecl SEMI     {if(flagTreeErros ==1){};}
  | error SEMI                                 {flagTreeErros = 0;}
;
auxFieldDecl: Type ID                           {if(flagTreeErros ==1){};}
  | auxFieldDecl COMMA ID                      {if(flagTreeErros ==1){};}
;

MethodDecl:  PUBLIC STATIC MethodHeader MethodBody {if(flagTreeErros ==1){};}
;

MethodHeader:  Type ID OCURV FormalParams CCURV  {if(flagTreeErros ==1){};}
  | VOID ID OCURV FormalParams CCURV {if(flagTreeErros ==1){};}
;

MethodBody: OBRACE AuxMethodBody CBRACE {if(flagTreeErros ==1){};}
;
AuxMethodBody : VarDecl AuxMethodBody {if(flagTreeErros ==1){};}
  | Statement AuxMethodBody {if(flagTreeErros ==1){};}
  | %empty{;}
;

FormalParams:  Type ID auxFormalParams    {if(flagTreeErros ==1){};}
  | STRING OSQUARE CSQUARE ID    {if(flagTreeErros ==1){};}
  | %empty {;}
;
auxFormalParams: COMMA Type ID auxFormalParams {if(flagTreeErros ==1){};}
  | %empty{;}
;


VarDecl: auxVarDecl SEMI    {;}
;
auxVarDecl : Type ID {;} 
  | auxVarDecl COMMA ID {;}
;

Type: BOOL  {if(flagTreeErros ==1){};}
  | INT     {if(flagTreeErros ==1){};}
  | DOUBLE  {if(flagTreeErros ==1){};}
;
Statement: OBRACE auxStatement4 CBRACE    {if(flagTreeErros ==1){};}
  | IF OCURV Expr CCURV Statement ELSE Statement {if(flagTreeErros ==1){};}
  | IF OCURV Expr CCURV Statement %prec ELSE {if(flagTreeErros ==1){};}
  | WHILE OCURV Expr CCURV Statement {if(flagTreeErros ==1){};}
  | DO Statement WHILE OCURV Expr CCURV SEMI  {if(flagTreeErros ==1){};}
  | PRINT OCURV auxStatement2 CCURV SEMI  {if(flagTreeErros ==1){};}
  | auxStatement1 SEMI  {if(flagTreeErros ==1){};}
  | RETURN auxStatement5 SEMI   {if(flagTreeErros ==1){};}
  | error SEMI {flagTreeErros = 0;}
;
auxStatement1: Assignment               {if(flagTreeErros ==1){};}
  | MethodInvocation                    {if(flagTreeErros ==1){};}
  | ParseArgs                           {if(flagTreeErros ==1){};}
  | %empty                              {;}
;
auxStatement2: Expr {if(flagTreeErros ==1){};}
  | STRLIT {if(flagTreeErros ==1){};}
;
auxStatement4: Statement auxStatement4      {if(flagTreeErros ==1){};}
  | %empty {;}
;
auxStatement5: Expr {if(flagTreeErros ==1){};}
  | %empty{;}
;

Assignment: ID ASSIGN Expr  {if(flagTreeErros ==1){};}
;
MethodInvocation: ID OCURV AuxMethodInvocation1 CCURV   {if(flagTreeErros ==1){};}
  | ID OCURV error CCURV {flagTreeErros = 0;}
;
AuxMethodInvocation1: Expr  {if(flagTreeErros ==1){};}
  | AuxMethodInvocation1 COMMA Expr{;}
;


ParseArgs: PARSEINT OCURV ID OSQUARE Expr CSQUARE CCURV   {if(flagTreeErros ==1){};}
  | PARSEINT OCURV error CCURV {flagTreeErros = 0;}
;

Expr: Assignment                    {if(flagTreeErros ==1){};}
  | MethodInvocation                {if(flagTreeErros ==1){};}
  | ParseArgs                       {if(flagTreeErros ==1){};}
  | Expr AND Expr                   {if(flagTreeErros ==1){};}
  | Expr OR Expr                    {if(flagTreeErros ==1){};}
  | Expr EQ Expr                    {if(flagTreeErros ==1){};}
  | Expr GEQ Expr                   {if(flagTreeErros ==1){};}
  | Expr GT Expr                    {if(flagTreeErros ==1){};}
  | Expr LEQ Expr  {if(flagTreeErros ==1){};}
  | Expr LT Expr  {if(flagTreeErros ==1){};}
  | Expr NEQ Expr  {if(flagTreeErros ==1){};}
  | Expr PLUS Expr {if(flagTreeErros ==1){};}
  | Expr MINUS Expr {if(flagTreeErros ==1){};}
  | Expr STAR Expr {if(flagTreeErros ==1){};}
  | Expr DIV Expr {if(flagTreeErros ==1){};}
  | Expr MOD Expr {if(flagTreeErros ==1){};}
  | PLUS  Expr{if(flagTreeErros ==1){};}
  | MINUS Expr  {if(flagTreeErros ==1){};}
  | NOT  Expr{if(flagTreeErros ==1){};}
  | ID DOTLENGTH  {if(flagTreeErros ==1){};}
  | ID {if(flagTreeErros ==1){};}
  | OCURV Expr CCURV  {if(flagTreeErros ==1){};}
  | BOOLLIT  {if(flagTreeErros ==1){};}
  | DECLIT   {if(flagTreeErros ==1){};}
  | REALLIT  {if(flagTreeErros ==1){};}
  | OCURV error CCURV {flagTreeErros = 0;}
;


%%


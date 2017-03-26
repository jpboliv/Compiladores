%{
  #include <stdio.h>
  #include <string.h>
  #include <stdarg.h>
  #include "functions.h"
  

  
  void yyerror(const char *s);
  int yylex();
  extern int flag;
  extern int n_line;
  extern int n_column;
  extern char* yytext;

  int flagTreeErros = 1;

  node* root;
  node* main_node;
  node* aux_node;
  node* present_node;
  node* value_node;
%}

%union{
  char *string;
  struct node *node;
}

%token BOOL CLASS DO DOTLENGTH DOUBLE ELSE IF INT PARSEINT PRINT PUBLIC RETURN STATIC STRING VOID WHILE OCURV CCURV OBRACE CBRACE OSQUARE CSQUARE AND OR LT GT EQ NEQ GEQ LEQ
%token PLUS MINUS STAR DIV MOD NOT ASSIGN SEMI COMMA RESERVED
%token <string>  REALLIT DECLIT BOOLLIT ID STRLIT

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

%type <node> Program FieldDecl MethodDecl MethodHeader MethodBody FormalParams VarDecl Type Statement Assignment MethodInvocation ParseArgs Expr
%type <node> auxProgram auxFieldDecl AuxMethodBody auxFormalParams auxVarDecl auxStatement1 auxStatement2 auxStatement4 auxStatement5 AuxMethodInvocation1
%%

Program: auxProgram CBRACE {if(flagTreeErros ==1){($$)=root=new_node("Program","Program");root->son=main_node;};}
;
auxProgram: CLASS ID OBRACE {if(flagTreeErros ==1){main_node=new_node("ID",$2);};}
  | auxProgram FieldDecl {if(flagTreeErros ==1){value_node=new_node("FieldDecl","FieldDecl"); aux_node = append_brother(main_node); aux_node->brother= value_node; };}
  | auxProgram MethodDecl  {if(flagTreeErros ==1){value_node=new_node("MethodDecl","MethodDecl");aux_node = append_brother(main_node); aux_node->brother= value_node; };}
  | auxProgram SEMI {if(flagTreeErros ==1){};}
;

FieldDecl: PUBLIC STATIC auxFieldDecl SEMI     {if(flagTreeErros ==1){printf("ola\n");};}
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

MethodBody: AuxMethodBody CBRACE {if(flagTreeErros ==1){};}
;
AuxMethodBody: OBRACE {if(flagTreeErros ==1){};}
  | AuxMethodBody VarDecl {if(flagTreeErros ==1){};}
  | AuxMethodBody Statement {if(flagTreeErros ==1){};}
;

FormalParams:  Type ID auxFormalParams    {if(flagTreeErros ==1){};}
  | STRING OSQUARE CSQUARE ID    {if(flagTreeErros ==1){};}
  | %empty {$$=NULL;}
;
auxFormalParams: COMMA Type ID auxFormalParams {if(flagTreeErros ==1){};}
  | %empty{$$=NULL;}
;

VarDecl: auxVarDecl SEMI    {if(flagTreeErros ==1){};}
;
auxVarDecl : Type ID {if(flagTreeErros ==1){};}
  | auxVarDecl COMMA ID {if(flagTreeErros ==1){};}
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
  | %empty                              {$$=NULL;}
;
auxStatement2: Expr {if(flagTreeErros ==1){};}
  | STRLIT {if(flagTreeErros ==1){};}
;
auxStatement4: Statement auxStatement4      {if(flagTreeErros ==1){};}
  | %empty {$$=NULL;}
;
auxStatement5: Expr {if(flagTreeErros ==1){};}
  | %empty{$$=NULL;}
;

Assignment: ID ASSIGN Expr  {if(flagTreeErros ==1){};}
;
MethodInvocation: ID OCURV AuxMethodInvocation1 CCURV   {if(flagTreeErros ==1){};}
  | ID OCURV error CCURV {flagTreeErros = 0;}
;
AuxMethodInvocation1: Expr  {if(flagTreeErros ==1){};}
  | AuxMethodInvocation1 COMMA Expr{if(flagTreeErros ==1){};}
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

void yyerror (const char *s) {
  printf ("Line %d, col %lu: %s: %s\n", n_line, n_column-strlen(yytext), s, yytext);
}

int main(int argv, char **argc){
  if(argv > 1){
    if(strcmp(argc[1], "-l")==0 || strcmp(argc[1], "-1")==0){
      if(strcmp(argc[1], "-l")==0){
        flag = 1;
      }
      yylex();
    }
    else if(strcmp(argc[1], "-t")==0){
      flag=2;
      yyparse();
      if(flagTreeErros == 1 && root!=NULL ){
        print_tree(root,0);
      }
    }
  }
  else{
    flag=2;
    yyparse();
  }
return 0;
}




%{
  #include <stdio.h>
  #include <string.h>
  #define NSYMS 100

 typedef struct _symtab{
  char *name;
  //nao pode ser so double(exemplo da aula)
  double value;
  }symtab;

  //arvore
 typedef struct node {
  char* type;
  char* value;
  char* type_print;
  struct node *son;
  struct node *brother;
  //faltam cenas COMEBACK HERE
} node;

  symtab tab[NSYMS];

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

 /* %type <node> Program FieldDecl MethodDecl MethodHeader MethodBody FormalParams VarDecl Type Statement Assignment MethodInvocation ParseArgs Expr */
%%

Program : CLASS ID OBRACE auxProgram CBRACE {;}
;
auxProgram: FieldDecl auxProgram | MethodDecl auxProgram | SEMI auxProgram  {;}
  | %empty {;}
;

FieldDecl: PUBLIC STATIC auxFieldDecl SEMI {;}
  | error SEMI {;}
;
auxFieldDecl: Type ID {;}
  | auxFieldDecl COMMA ID  {;}
;

MethodDecl:  PUBLIC STATIC MethodHeader MethodBody {;}
;

MethodHeader:  Type ID OCURV AuxMethodHelper2 CCURV  {;}
  | VOID ID OCURV AuxMethodHelper2 CCURV {;}
;

AuxMethodHelper2: FormalParams {;}
  | %empty{;}
;
MethodBody: OBRACE AuxMethodBody CBRACE {;}
;
AuxMethodBody : VarDecl AuxMethodBody {;}
  | Statement AuxMethodBody {;}
  | %empty{;}
;

FormalParams:  Type ID auxFormalParams    {;}
  | STRING OSQUARE CSQUARE ID    {;}
;
auxFormalParams: COMMA Type ID auxFormalParams {;}
  | %empty{;}
;

VarDecl: Type ID auxVarDecl SEMI    {;}
;
auxVarDecl :  COMMA ID auxVarDecl {;}
  | %empty{;}
;

Type: BOOL  {;}
  | INT     {;}
  | DOUBLE  {;}
;
Statement: OBRACE auxStatement4 CBRACE    {;}
  | IF OCURV Expr CCURV Statement ELSE Statement {;}
  | IF OCURV Expr CCURV Statement %prec ELSE {;}
  | WHILE OCURV Expr CCURV Statement {;}
  | DO Statement WHILE OCURV Expr CCURV SEMI  {;}
  | PRINT OCURV auxStatement2 CCURV SEMI  {;}
  | auxStatement1 SEMI  {;}
  | RETURN auxStatement5 SEMI   {;}
  | error SEMI {;}
;
auxStatement1: Assignment | MethodInvocation | ParseArgs {;}
  | %empty{;}
;
auxStatement2: Expr | STRLIT {;}
;
auxStatement4: Statement auxStatement4{;}
  | %empty {;}
;
auxStatement5: Expr {;}
  | %empty{;}
;

Assignment: ID ASSIGN Expr  {;}
;
MethodInvocation: ID OCURV AuxMethodInvocation1 CCURV   {;}
  | ID OCURV error CCURV {;}
;
AuxMethodInvocation1: Expr AuxMethodInvocation2 {;}
  | %empty{;}
;
AuxMethodInvocation2: COMMA Expr AuxMethodInvocation2 {;}
  | %empty{;}
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
  | PLUS  Expr{;}
  | MINUS Expr  {;}
  | NOT  Expr{;}
  | ID DOTLENGTH  {;}
  | ID {;}
  | OCURV Expr CCURV  {;}
  | BOOLLIT | DECLIT | REALLIT  {;}
  | OCURV error CCURV {;}
;


%%

/*symtab *symlook(char *varname){
  int i;
  for(i=0; i<NSYMS; i++){
    if(tab[i].name && strcmp(varname, tab[i].name)==0)
      return &tab[i];
      if(!tab[i].name){
        tab[i].name=varname;
        return &tab[i];
      }
  }
  yyerror("tamanha maximo ultrapassado");
 } */

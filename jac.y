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

  int flagTreeErros;

  node* root;
  node* main_node;
  node* main2_node;
  node* aux_node;
  node* aux2_node;
  node* present_node;
  node* value_node;
%}

%union{
  char *string;
  struct node *node;
}

%token BOOL CLASS DO DOTLENGTH DOUBLE ELSE IF INT PARSEINT PRINT PUBLIC RETURN STATIC STRING VOID WHILE OCURV CCURV OBRACE CBRACE OSQUARE CSQUARE AND OR LT GT EQ NEQ GEQ LEQ
%token PLUS MINUS STAR DIV MOD NOT ASSIGN SEMI COMMA 
%token <string>  REALLIT DECLIT BOOLLIT ID STRLIT RESERVED

%left COMMA
%right ASSIGN
%left OR
%left AND
%left EQ NEQ
%left LT LEQ GEQ GT
%left PLUS MINUS
%left STAR DIV MOD
%right NOT
%left OBRACE CBRACE CCURV OCURV OSQUARE CSQUARE
%right ELSE




%type <node> Program FieldDecl MethodDecl MethodHeader MethodBody FormalParams VarDecl Type Statement Assignment MethodInvocation ParseArgs Expr
%type <node> auxProgram auxFieldDecl AuxMethodBody auxFormalParams auxVarDecl auxStatement1 auxStatement2 auxStatement4 auxStatement5 AuxMethodInvocation1
%%

Program: auxProgram CBRACE {if(flagTreeErros ==1){($$)=root=new_node("Program","Program");add_son(root,$1);};}
;
auxProgram: CLASS ID OBRACE {if(flagTreeErros ==1){$$ = new_node("Id",$2);};}
  | auxProgram FieldDecl {if(flagTreeErros ==1){add_brother($1,$2);} ;}
  | auxProgram MethodDecl  {if(flagTreeErros ==1){add_brother($1, $2);};}
  | auxProgram SEMI {if(flagTreeErros ==1){};}
;

FieldDecl: PUBLIC STATIC auxFieldDecl SEMI     {if(flagTreeErros ==1){$$ = $3;};}
  | error SEMI                                 {flagTreeErros = 0;}
;
auxFieldDecl: Type ID                           {if(flagTreeErros ==1){$$  = new_node("FieldDecl","FieldDecl");add_son($$,$1);
                                                                      add_brother($$->son, new_node("Id",$2));};}
  | auxFieldDecl COMMA ID                      {if(flagTreeErros ==1){$1= new_node("FieldDecl","FieldDecl");
                                                                        add_son($1,new_node($$->son->type,$$->son->type));
                                                                        add_brother($1->son,new_node("Id",$3)); add_brother($$,$1);};}
;

MethodDecl:  PUBLIC STATIC MethodHeader MethodBody {if(flagTreeErros ==1){$$ = new_node("MethodDecl","MethodDecl");add_son($$,$3);add_brother($3,$4);};}
;

MethodHeader:  Type ID OCURV FormalParams CCURV  {if(flagTreeErros ==1){$$= new_node("MethodHeader","MethodHeader");
                                                                            add_son($$,$1); 
                                                                          add_brother($1,new_node("Id",$2));  
                                                                          add_brother($1,$4);};}
  | VOID ID OCURV FormalParams CCURV {if(flagTreeErros ==1)               {$$= new_node("MethodHeader","MethodHeader");
                                                                            add_son($$,aux_node=new_node("Void","Void"));
                                                                            add_brother(aux_node,new_node("Id",$2));
                                                                            add_brother(aux_node,$4);};}
;

MethodBody: AuxMethodBody CBRACE {if(flagTreeErros ==1){$$= $1;};}
;
AuxMethodBody: OBRACE                                   {if(flagTreeErros ==1){$$=new_node("MethodBody","MethodBody");};}
  | AuxMethodBody VarDecl                               {if(flagTreeErros ==1){$$= new_node("MethodBody","MethodBody");add_son($$,$2);};}
  | AuxMethodBody Statement                             {if(flagTreeErros ==1){$$= new_node("MethodBody","MethodBody");add_son($$,$2);};}
;

FormalParams:  Type ID auxFormalParams                  {if(flagTreeErros ==1){$$= new_node("MethodParams","MethodParams");
                                                                                  aux2_node=new_node("ParamDecl","ParamDecl");
                                                                                  add_son(aux2_node,$1); 
                                                                                  add_brother($1,new_node("Id",$2)); 
                                                                                  add_brother(aux2_node,$3); 
                                                                                  add_son($$,aux2_node);
                                                                                  };}
  | STRING OSQUARE CSQUARE ID                           {if(flagTreeErros ==1){ $$= new_node("MethodParams","MethodParams");
                                                                                aux2_node = new_node("ParamDecl","ParamDecl");
                                                                                main_node = new_node("StringArray","StringArray");
                                                                                add_son($$,aux2_node);
                                                                                add_brother(main_node,new_node("Id",$4));
                                                                                add_son(aux2_node,main_node);
                                                                                };}
  | %empty                                              {$$= new_node("MethodParams","MethodParams");}
;
auxFormalParams: COMMA Type ID auxFormalParams {if(flagTreeErros ==1){$$ = new_node("ParamDecl","ParamDecl");
                                                                        add_son($$,$2);
                                                                        add_brother($2,new_node("Id",$3)); 
                                                                        add_brother($$,$4);};}
  | %empty                                                            {$$=NULL;}
;

VarDecl: auxVarDecl SEMI      {if(flagTreeErros ==1){$$ = $1;};}
;
auxVarDecl : Type ID          {if(flagTreeErros ==1){$$  = new_node("VarDecl","VarDecl");add_son($$,$1);
                                                                      add_brother($$->son, new_node("Id",$2));};}
  | auxVarDecl COMMA ID       {if(flagTreeErros ==1){$1= new_node("VarDecl","VarDecl");
                                                                        add_son($1,new_node($$->son->type,$$->son->type));
                                                                        add_brother($1->son,new_node("Id",$3)); add_brother($$,$1);};}
;

Type: BOOL  {if(flagTreeErros ==1){$$=new_node("Bool","Bool");};}
  | INT     {if(flagTreeErros ==1){$$=new_node("Int","Int");};}
  | DOUBLE  {if(flagTreeErros ==1){$$=new_node("Double","Double");};}
;
Statement: OBRACE auxStatement4 CBRACE                  {if(flagTreeErros ==1){$$=NULL;};}
  | IF OCURV Expr CCURV Statement ELSE Statement        {if(flagTreeErros ==1){$$=NULL;};}
  | IF OCURV Expr CCURV Statement %prec ELSE            {if(flagTreeErros ==1){$$=NULL;};}
  | WHILE OCURV Expr CCURV Statement                    {if(flagTreeErros ==1){$$=NULL;};}
  | DO Statement WHILE OCURV Expr CCURV SEMI            {if(flagTreeErros ==1){$$=NULL;};}
  | PRINT OCURV auxStatement2 CCURV SEMI                {if(flagTreeErros ==1){$$=NULL;};}
  | auxStatement1 SEMI                                  {if(flagTreeErros ==1){$$=NULL;};}
  | RETURN auxStatement5 SEMI                           {if(flagTreeErros ==1){$$=NULL;};}
  | error SEMI                                          {flagTreeErros = 0;}
;
auxStatement1: Assignment               {if(flagTreeErros ==1){$$=NULL;};}
  | MethodInvocation                    {if(flagTreeErros ==1){$$=NULL;};}
  | ParseArgs                           {if(flagTreeErros ==1){$$=NULL;};}
  | %empty                              {$$=NULL;}
;
auxStatement2: Expr                     {if(flagTreeErros ==1){$$=NULL;};}
  | STRLIT                              {if(flagTreeErros ==1){$$=NULL;};}
;
auxStatement4: Statement auxStatement4      {if(flagTreeErros ==1){$$=NULL;};}
  | %empty                                  {$$=NULL;}
;
auxStatement5: Expr                      {if(flagTreeErros ==1){$$=NULL;};}
  |%empty                                {$$=NULL;}
;

Assignment: ID ASSIGN Expr  {if(flagTreeErros ==1){$$=NULL;};}
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


ParseArgs: PARSEINT OCURV ID OSQUARE Expr CSQUARE CCURV   {if(flagTreeErros ==1){$$=NULL;};}
  | PARSEINT OCURV error CCURV                            {flagTreeErros = 0;}
;

Expr: Assignment                    {if(flagTreeErros ==1){$$=NULL;};}
  | MethodInvocation                {if(flagTreeErros ==1){$$=NULL;};}
  | ParseArgs                       {if(flagTreeErros ==1){$$=NULL;};}
  | Expr AND Expr                   {if(flagTreeErros ==1){$$=NULL;};}
  | Expr OR Expr                    {if(flagTreeErros ==1){$$=NULL;};}
  | Expr EQ Expr                    {if(flagTreeErros ==1){$$=NULL;};}
  | Expr GEQ Expr                   {if(flagTreeErros ==1){$$=NULL;};}
  | Expr GT Expr                    {if(flagTreeErros ==1){$$=NULL;};}
  | Expr LEQ Expr                   {if(flagTreeErros ==1){$$=NULL;};}
  | Expr LT Expr                    {if(flagTreeErros ==1){$$=NULL;};}
  | Expr NEQ Expr                   {if(flagTreeErros ==1){$$=NULL;};}
  | Expr PLUS Expr                  {if(flagTreeErros ==1){$$=NULL;};}
  | Expr MINUS Expr                 {if(flagTreeErros ==1){$$=NULL;};}
  | Expr STAR Expr                  {if(flagTreeErros ==1){$$=NULL;};}
  | Expr DIV Expr                   {if(flagTreeErros ==1){$$=NULL;};}
  | Expr MOD Expr                   {if(flagTreeErros ==1){$$=NULL;};}
  | PLUS  Expr %prec NOT            {if(flagTreeErros ==1){$$=NULL;};}
  | MINUS Expr %prec NOT            {if(flagTreeErros ==1){$$=NULL;};}
  | NOT  Expr %prec NOT             {if(flagTreeErros ==1){$$=NULL;};}
  | ID DOTLENGTH                    {if(flagTreeErros ==1){$$=NULL;};}
  | ID                              {if(flagTreeErros ==1){$$=NULL;};}
  | OCURV Expr CCURV                {if(flagTreeErros ==1){$$=NULL;};}
  | BOOLLIT                         {if(flagTreeErros ==1){$$=NULL;};}
  | DECLIT                          {if(flagTreeErros ==1){$$=NULL;};}
  | REALLIT                         {if(flagTreeErros ==1){$$=NULL;};}
  | OCURV error CCURV               {flagTreeErros = 0;}
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
      flagTreeErros = 1;
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




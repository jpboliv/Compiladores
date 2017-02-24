%X JAVAC
%{
  int flag =0;

%}

letters[a-zA-Z]
numbers[0-9]
boollit("true" | "false")
RESERVED
DECLIT
REALLIT
STRLIT

%%
bool                {if(flag==1)printf("BOOL\n”);}
{boollit}           {if(flag==1)printf("BOOLLIT\n");}
"class"             {if(flag==1)printf("CLASS\n”);}
"do"                {if(flag==1)printf(“DO\n");}
“.length”           {if(flag==1)printf("DOTLENGTH\n");}
“double”            {if(flag==1)printf("DOUBLE\n");}
“else”              {if(flag==1)printf("ELSE\n");}
“if”                {if(flag==1)printf("IF\n");}
“int”               {if(flag==1)printf("INT\n");}
PARSEINT = “Integer.parseInt”
PRINT = “System.out.println”
PUBLIC = “public”
“return”            {if(flag==1)printf("RETURN\n");}
“static”            {if(flag==1)printf("STATIC\n");}
“String”            {if(flag==1)printf("STRING\n");}
“void”              {if(flag==1)printf("VOID\n");}
“while”             {if(flag==1)printf("WHILE\n");}
“(”                 {if(flag==1)printf("OCURV\n");}
“)”                 {if(flag==1)printf("CCURV\n");}
"{"                 {if(flag==1)printf("OBRACE\n");}
“}”                 {if(flag==1)printf("CBRACE\n");}
"["                 {if(flag==1)printf("OSQUARE\n");}
“]”                 {if(flag==1)printf("CSQUARE\n");}
“&&”                {if(flag==1)printf("AND\n");}
“||”                {if(flag==1)printf("OR\n");}
“<”                 {if(flag==1)printf("LT\n");}
“>”                 {if(flag==1)printf("GT\n");}
“==”                {if(flag==1)printf("EQ\n");}
“!=”                {if(flag==1)printf("NEQ\n");}
“<=”                {if(flag==1)printf("LEQ\n");}
“>=”                {if(flag==1)printf("GEQ\n");}
"+"                 {if(flag==1)printf("PLUS\n");}
“−”                 {if(flag==1)printf("MINUS\n");}
"*"                 {if(flag==1)printf("STAR\n");}
"/"                 {if(flag==1)printf("DIV\n");}
“%”                 {if(flag==1)printf("MOD\n");}
“!”                 {if(flag==1)printf("NOT\n");}
“=”                 {if(flag==1)printf("ASSIGN\n");}
“;”                 {if(flag==1)printf("SEMI\n");}
“,”                 {if(flag==1)printf("COMMA\n");}
{RESERVED}
%%

%%
int main(int argv, char **argc){
if(argv>1){
    if(strcmp(argc[1],"-l")==0){
        flag = 1;
    }
}
yylex();
return 0;
}

int yywrap(){
return 1;
}

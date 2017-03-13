%X JAVAC JCOMMENT LINECOMMENT STRERROR
%{
  #include "y.tab.h"
  int flag =0;
  int n_column =1;
  int n_line =1;
  int comment_line;
  int aux_line;
  int comment_column;
  int aux_column;
  char* aux;
%}

letters[a-zA-Z]
numbers[0-9]
boolit("true"|"false")
exponential         "e"|"E"|"e+"|"e-"|"E+"|"E-"
line_terminator     "\n"|"\r"|("\r")+"\n"
esc_sequence        \\n|\\f|\\r|\\\\|\\\"|\\t
repeater            {numbers}+(("_")*{numbers}+)*


STRLIT              \"([^\n\r\\"]|{esc_sequence})*\"
INVALIDSTR          \"([^\n\r\\"])*\"
UNTERMINATEDSTR     ([^\n\r\\"]|{esc_sequence})*

DECLIT              0|([1-9]+(("_")*{numbers}+)*)
ID                  (("_")|{letters}|("$"))(("_")|{letters}|{numbers}|("$"))*
REALLIT             {repeater}"."({repeater})?({exponential}{repeater})?|"."({repeater})({exponential}{repeater})?|({repeater})({exponential}({repeater}))



%%

"boolean"           {if(flag==1)printf("BOOL\n");n_column+=yyleng;if(flag==2)if(flag==2)return BOOL;}
"class"             {if(flag==1)printf("CLASS\n");n_column+=yyleng;if(flag==2)return CLASS;}
"do"                {if(flag==1)printf("DO\n");n_column+=yyleng;if(flag==2)return DO;}
".length"           {if(flag==1)printf("DOTLENGTH\n");n_column+=yyleng;if(flag==2)return DOTLENGTH;}
"double"            {if(flag==1)printf("DOUBLE\n");n_column+=yyleng;if(flag==2)return DOUBLE;}
"else"              {if(flag==1)printf("ELSE\n");n_column+=yyleng;if(flag==2)return ELSE;}
"if"                {if(flag==1)printf("IF\n");n_column+=yyleng;if(flag==2)return IF;}
"int"               {if(flag==1)printf("INT\n");n_column+=yyleng;if(flag==2)return INT;}
"Integer.parseInt"  {if(flag==1)printf("PARSEINT\n");n_column+=yyleng;if(flag==2)return PARSEINT;}
"System.out.println" {if(flag==1)printf("PRINT\n");n_column+=yyleng;if(flag==2)return PRINT;}
"public"            {if(flag==1)printf("PUBLIC\n");n_column+=yyleng;if(flag==2)return PUBLIC;}
"return"            {if(flag==1)printf("RETURN\n");n_column+=yyleng;if(flag==2)return RETURN;}
"static"            {if(flag==1)printf("STATIC\n");n_column+=yyleng;if(flag==2)return STATIC;}
"String"            {if(flag==1)printf("STRING\n");n_column+=yyleng;if(flag==2)return STRING;}
"void"              {if(flag==1)printf("VOID\n");n_column+=yyleng;if(flag==2)return VOID;}
"while"             {if(flag==1)printf("WHILE\n");n_column+=yyleng;if(flag==2)return WHILE;}
"("                 {if(flag==1)printf("OCURV\n");n_column+=yyleng;if(flag==2)return OCURV;}
")"                 {if(flag==1)printf("CCURV\n");n_column+=yyleng;if(flag==2)return CCURV;}
"{"                 {if(flag==1)printf("OBRACE\n");n_column+=yyleng;if(flag==2)return OBRACE;}
"}"                 {if(flag==1)printf("CBRACE\n");n_column+=yyleng;if(flag==2)return CBRACE;}
"["                 {if(flag==1)printf("OSQUARE\n");n_column+=yyleng;if(flag==2)return OSQUARE;}
"]"                 {if(flag==1)printf("CSQUARE\n");n_column+=yyleng;if(flag==2)return CSQUARE;}
"&&"                {if(flag==1)printf("AND\n");n_column+=yyleng;if(flag==2)return AND;}
"||"                {if(flag==1)printf("OR\n");n_column+=yyleng;if(flag==2)return OR;}
"<"                 {if(flag==1)printf("LT\n");n_column+=yyleng;if(flag==2)return LT;}
">"                 {if(flag==1)printf("GT\n");n_column+=yyleng;if(flag==2)return GT;}
"=="                {if(flag==1)printf("EQ\n");n_column+=yyleng;if(flag==2)return EQ;}
"!="                {if(flag==1)printf("NEQ\n");n_column+=yyleng;if(flag==2)return NEQ;}
"<="                {if(flag==1)printf("LEQ\n");n_column+=yyleng;if(flag==2)return LEQ;}
">="                {if(flag==1)printf("GEQ\n");n_column+=yyleng;if(flag==2)return GEQ;}
"+"                 {if(flag==1)printf("PLUS\n");n_column+=yyleng;if(flag==2)return PLUS;}
"-"                 {if(flag==1)printf("MINUS\n");n_column+=yyleng;if(flag==2)return MINUS;}
"*"                 {if(flag==1)printf("STAR\n");n_column+=yyleng;if(flag==2)return STAR;}
"/"                 {if(flag==1)printf("DIV\n");n_column+=yyleng;if(flag==2)return DIV;}
"%"                 {if(flag==1)printf("MOD\n");n_column+=yyleng;if(flag==2)return MOD;}
"!"                 {if(flag==1)printf("NOT\n");n_column+=yyleng;if(flag==2)return NOT;}
"="                 {if(flag==1)printf("ASSIGN\n");n_column+=yyleng;if(flag==2)return ASSIGN;}
";"                 {if(flag==1)printf("SEMI\n");n_column+=yyleng;if(flag==2)return SEMI;}
","                 {if(flag==1)printf("COMMA\n");n_column+=yyleng;if(flag==2)return COMMA;}
"\n"                {n_column=1;n_line+=1;}
"\t"                {n_column+=yyleng;}
"\r\n"              {n_column=1;n_line+=1;}
"\r"                {n_column=1;n_line+=1;}
"\f"                {n_column+=yyleng;}
" "                 {n_column+=yyleng;}

"++"|"null"|"--"|"abstract"|"assert"|"break"|"byte"|"case"|"catch"|"char"|"const"|"continue"|"default"|"enum"|"extends"|"final"|"finally"|"float"|"for"|"goto"|"implements"|"import"|"instanceof"|"interface"|"long"|"native"|"new"|"package"|"private"|"protected"|"short"|"strictfp"|"super"|"switch"|"synchronized"|"this"|"throw"|"throws"|"transient"|"try"|"volatile"|"Integer"|"System"        {if(flag==1)printf("RESERVED(%s)\n", &yytext[0]);n_column+=yyleng;if(flag==2)return RESERVED;}

{REALLIT}           {if(flag==1)printf("REALLIT(%s)\n",yytext);n_column+=yyleng;if(flag==2)return REALLIT;}
{DECLIT}            {if(flag==1)printf("DECLIT(%s)\n", yytext);n_column+=yyleng;if(flag==2)return DECLIT;}
{boolit}            {if(flag==1)printf("BOOLLIT(%s)\n", yytext);n_column+=yyleng;if(flag==2)return BOOLLIT;}
{ID}                {if(flag==1)printf("ID(%s)\n", yytext);n_column+=yyleng;if(flag==2)return ID;}

{STRLIT}            {if(flag==1)printf("STRLIT(%s)\n", yytext);n_column+=yyleng;if(flag==2)return STRLIT;}

"\""                                                      {aux_column=n_column;n_column+=1;BEGIN STRERROR;}
<STRERROR>"\\"[^\r\nnr"ft\\]?                             {printf("Line %d, col %d: invalid escape sequence (%s)\n",n_line,n_column,yytext);n_column+=yyleng;}
<STRERROR>"\\"[nr"ft\\]                                   {n_column+=yyleng;}
<STRERROR>"\""                                            {BEGIN 0;n_column+=1;}
<STRERROR>"\r\n"                                          {printf("Line %d, col %d: unterminated string literal\n",n_line,aux_column);BEGIN 0;n_line+=1;n_column=1;}
<STRERROR>"\r"                                            {printf("Line %d, col %d: unterminated string literal\n",n_line,aux_column);BEGIN 0;n_line+=1;n_column=1;}
<STRERROR>"\n"                                            {printf("Line %d, col %d: unterminated string literal\n",n_line,aux_column);BEGIN 0;n_column=1;n_line+=1;}
<STRERROR><<EOF>>                                         {printf("Line %d, col %d: unterminated string literal\n",n_line,aux_column);BEGIN 0;}
<STRERROR>.                                               {n_column+=yyleng;}




"/*"                              {BEGIN JCOMMENT;comment_line=n_line;comment_column=n_column;n_column+=yyleng;}
<JCOMMENT>"*/"                    {BEGIN 0;n_column+=yyleng;}
<JCOMMENT><<EOF>>                 {printf("Line %d, col %d: unterminated comment\n",comment_line,comment_column);BEGIN 0;}
<JCOMMENT>{line_terminator}       {n_line+=1;n_column =1;}
<JCOMMENT>.                       {n_column += yyleng;}



"//"                              {BEGIN LINECOMMENT;comment_column = n_column; n_column+=yyleng;}
<LINECOMMENT><<EOF>>              {BEGIN 0;};
<LINECOMMENT>{line_terminator}    {n_line+=1;n_column=1;BEGIN 0;}
<LINECOMMENT>.                    {n_column+=yyleng;}


.                                 {printf("Line %d, col %d: illegal character (%s)\n",n_line,n_column,yytext);n_column+=yyleng;}




%%
int main(int argv, char **argc){
  if(argv > 1){
    if(strcmp(argc[1], "-l")==0 || strcmp(argc[1], "-1")==0){
      if(strcmp(argc[1], "-l")==0){
        flag = 1;
      }
      yylex();
    }
  }
  else{
    flag=2;
    yyparse();
  }
return 0;
}

int yywrap(){
return 1;
}

void yyerror (const char *s){

}

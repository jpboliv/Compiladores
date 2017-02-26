%X JAVAC CCOMMENT LINECOMMENT
%{
  int flag =0;
  int n_column =1;
  int n_line =1;
  int comment_line;
  int comment_column;
%}

letters[a-zA-Z]
numbers[0-9]
boolit("true"|"false")
numbersanddigits([0-9]+|"_")
exponential         "e"|"E"|"."|"e+"|"e-"|"E+"|"E-"
esc_sequence        \\n|\\f|\\r|\\\\|\\\"|\\t


STRLIT              \"([^\n\r]|{esc_sequence})*\"
DECLIT              0|{numbers}+|([1-9]+(("_")+{numbers}+)*)
ID                  (("_")|{letters}|("$"))(("_")|{letters}|{numbers}|("$"))*
REALLIT             {numbers}+("_")*{exponential}("_")*{numbers}+
%%

"boolean"           {if(flag==1)printf("BOOL\n");n_column+=yyleng;}
"class"             {if(flag==1)printf("CLASS\n");n_column+=yyleng;}
"do"                {if(flag==1)printf("DO\n");n_column+=yyleng;}
".length"           {if(flag==1)printf("DOTLENGTH\n");n_column+=yyleng;}
"double"            {if(flag==1)printf("DOUBLE\n");n_column+=yyleng;}
"else"              {if(flag==1)printf("ELSE\n");n_column+=yyleng;}
"if"                {if(flag==1)printf("IF\n");n_column+=yyleng;}
"int"               {if(flag==1)printf("INT\n");n_column+=yyleng;}
"Integer.parseInt"  {if(flag==1)printf("PARSEINT\n");n_column+=yyleng;}
"System.out.println" {if(flag==1)printf("PRINT\n");n_column+=yyleng;}
"public"            {if(flag==1)printf("PUBLIC\n");n_column+=yyleng;}
"return"            {if(flag==1)printf("RETURN\n");n_column+=yyleng;}
"static"            {if(flag==1)printf("STATIC\n");n_column+=yyleng;}
"String"            {if(flag==1)printf("STRING\n");n_column+=yyleng;}
"void"              {if(flag==1)printf("VOID\n");n_column+=yyleng;}
"while"             {if(flag==1)printf("WHILE\n");n_column+=yyleng;}
"("                 {if(flag==1)printf("OCURV\n");n_column+=yyleng;}
")"                 {if(flag==1)printf("CCURV\n");n_column+=yyleng;}
"{"                 {if(flag==1)printf("OBRACE\n");n_column+=yyleng;}
"}"                 {if(flag==1)printf("CBRACE\n");n_column+=yyleng;}
"["                 {if(flag==1)printf("OSQUARE\n");n_column+=yyleng;}
"]"                 {if(flag==1)printf("CSQUARE\n");n_column+=yyleng;}
"&&"                {if(flag==1)printf("AND\n");n_column+=yyleng;}
"||"                {if(flag==1)printf("OR\n");n_column+=yyleng;}
"<"                 {if(flag==1)printf("LT\n");n_column+=yyleng;}
">"                 {if(flag==1)printf("GT\n");n_column+=yyleng;}
"=="                {if(flag==1)printf("EQ\n");n_column+=yyleng;}
"!="                {if(flag==1)printf("NEQ\n");n_column+=yyleng;}
"<="                {if(flag==1)printf("LEQ\n");n_column+=yyleng;}
">="                {if(flag==1)printf("GEQ\n");n_column+=yyleng;}
"+"                 {if(flag==1)printf("PLUS\n");n_column+=yyleng;}
"-"                 {if(flag==1)printf("MINUS\n");n_column+=yyleng;}
"*"                 {if(flag==1)printf("STAR\n");n_column+=yyleng;}
"/"                 {if(flag==1)printf("DIV\n");n_column+=yyleng;}
"%"                 {if(flag==1)printf("MOD\n");n_column+=yyleng;}
"!"                 {if(flag==1)printf("NOT\n");n_column+=yyleng;}
"="                 {if(flag==1)printf("ASSIGN\n");n_column+=yyleng;}
";"                 {if(flag==1)printf("SEMI\n");n_column+=yyleng;}
","                 {if(flag==1)printf("COMMA\n");n_column+=yyleng;}
"\n"                {n_column=1;n_line+=1;}
"\t"                {n_column+=yyleng;}
"\r"                {n_column=1;}
"\f"                {n_column+=yyleng;}
" "                 {n_column+=yyleng;}

"++"|"null"|"--"|"abstract"|"assert"|"break"|"byte"|"case"|"catch"|"char"|"const"|"continue"|"default"|"enum"|"extends"|"final"|"finally"|"float"|"for"|"goto"|"implements"|"import"|"instanceof"|"interface"|"long"|"native"|"new"|"package"|"private"|"protected"|"short"|"strictfp"|"super"|"switch"|"synchronized"|"this"|"throw"|"throws"|"transient"|"try"|"volatile"|"Integer"|"System"        {if(flag==1){printf("RESERVED(%s)\n", &yytext[0]);}}
{numbers}+          {if(flag==1)printf("INTLIT(%s)\n", yytext);n_column+=yyleng;}
{boolit}            {if(flag==1)printf("BOOLLIT(%s)\n", yytext);n_column+=yyleng;}
{ID}                {if(flag==1)printf("ID(%s)\n", yytext);n_column+=yyleng;}
{DECLIT}            {if(flag==1)printf("DECLIT(%s)\n", yytext);n_column+=yyleng;}
{STRLIT}            {if(flag==1)printf("STRLIT(%s)\n", yytext);n_column+=yyleng;}
{REALLIT}           {if(flag==1)printf("REALLIT(%s)\n",yytext);n_column+=yyleng;}
.                   {printf("Line %d, col %d: illegal character (%s)\n",n_line,n_column,yytext);n_column+=yyleng;}


"//"                        {BEGIN LINECOMMENT;comment_line=n_line; comment_column = n_column; n_column+=yyleng;}
<LINECOMMENT><<EOF>>		    {BEGIN 0;};
<LINECOMMENT>(\n)|(\r\n)    {BEGIN 0;};
<LINECOMMENT>(\r)			      {BEGIN 0;};
<LINECOMMENT>.				      ;



"/*"               {BEGIN CCOMMENT;comment_line=yylineno;comment_column=n_column;n_column+=yyleng;}
<CCOMMENT>"*/"     {BEGIN 0;n_column+=yyleng;}
<CCOMMENT><<EOF>>  {printf("Line %d, col %d: unterminated comment\n",comment_line,comment_column);BEGIN 0;}
<CCOMMENT>.        {n_column += yyleng;}
<CCOMMENT>"\n"     {n_line+=1;n_column =1;}




%%
int main(int argv, char **argc){
  flag = argv >= 1 && (!strcmp(argc[1], "-1") || !strcmp(argc[1], "-l"));
  if(!flag)
    flag=1;
yylex();
return 0;
}

int yywrap(){
return 1;
}

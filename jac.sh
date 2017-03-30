clear
clear
lex jac.l
yacc -d -v jac.y
zip jac.zip jac.l jac.y functions.c functions.h
clang-3.8 functions.c -g -o jac y.tab.c lex.yy.c
./jac -t < teste.java

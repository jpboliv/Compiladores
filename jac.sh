clear
clear
lex jac.l
yacc -d -v jac.y
zip jac.zip jac.l jac.y functions.c functions.h
clang-3.8 -Wall functions.c -g -o jac y.tab.c lex.yy.c
valgrind --leak-check=yes --track-origins=yes -v ./jac -s < teste.java

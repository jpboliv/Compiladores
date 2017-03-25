clear
clear
lex jac.l
yacc -d -v jac.y
zip jac.zip jac.l jac.y functions.c functions.h
cc functions.c -o jac y.tab.c lex.yy.c
./jac < teste.java

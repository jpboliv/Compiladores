clear
lex jac.l
yacc -d -v jac.y
zip jac.zip jac.l jac.y
cc -o jac y.tab.c lex.yy.c
./jac  < teste.java

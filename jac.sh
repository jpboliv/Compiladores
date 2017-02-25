lex jac.l
zip jac.zip jac.l
cc -o jac lex.yy.c
./jac -l < teste.java

#ifndef _functions_h
#define _functions_h
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
 //arvore
 typedef struct node {
  char* type;
  char* value;
  char* type_print;
  struct node *son;
  struct node *brother;
  //faltam cenas COMEBACK HERE
} node;

typedef struct symbol{
	char* name;
	char* param;
	char* type;
	char* flag;
	struct symbol* brother;
}symbol;



typedef struct table{
	char* name;
	char* type;
	int activated;
	struct symbol* child;
	struct table* brother;
}table;

node* new_node(char* type, char* value);
void print_tree(node* aux, int tabs);
node* append_brother(node* first);
node* add_son(node* parent, node* new_son);
node* add_brother(node* brother, node* new_brother);
int cntbrothers(node* root);

//tabela de simbolos
void printTable();
symbol* addSymbol(table* aux, char* _name, char* _type, char* _param,char* _flag, int _line, int _col);
table* addTable(table* tab, char* _name, char* _type, int _activated);
void initTable();
void analiseSemantica(node* aux);
void table_anotation(node *aux,table* tab);
void addFieldDecl(table* tab, node* aux);
void addMethodDecl(table* tab, node* aux);
char* myCat(char* str1, char* str2);
char* getIdType(char* str, table* tab);
char* getIdParamType(char* str);
char* lowerCase(char* str);
int count_method(char* str);
void checkCall(node* aux, table* tab);
char* getIdTableType(char* str);
int split (char *str, char c, char ***arr);
char *newStr(const char *string);
char *newStr2(const char *string);

//tabela simbolos
  table* semanticTable;


#endif

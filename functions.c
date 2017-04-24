#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "functions.h"




//arvore
node* new_node(char* type, char* value) {
	//printf("NEW NODE %s AND %s\n",type,value);
	node* n = (node*)malloc(sizeof(node));
	n->type = (char*)malloc(sizeof(char)*strlen(type) +1);
	n->value = (char*)malloc(sizeof(char)*strlen(value) +1);
	n->type_print = (char*)malloc(sizeof(char)*10);
	strcpy(n->type,type);
	strcpy(n->value,value);
	n->son = NULL;
	n->brother = NULL;

	return n;
}

node* add_son(node* parent, node* new_son){
	if (parent == NULL){
		return parent;
	}
	node* aux = parent;
	for(;aux->son!=NULL;aux=aux->son){}
	aux->son = new_son;
	return aux;
}

int cntbrothers(node* root){
	int cnt = 0;
	node *aux;
	aux=root;
	while(aux!=NULL){
		aux=aux->brother;
		cnt++;
	}
	return cnt;
}

node* add_brother(node* brother, node* new_brother){
	if (brother == NULL){
		return brother;
	}
	node* aux = brother;
	for(;aux->brother!=NULL;aux=aux->brother){}
		aux->brother = new_brother;
	return aux;
}
//
node* append_brother(node* first){
	if (first == NULL){
		return first;
	}
	node* aux = first;
	for(;aux->brother!=NULL;aux=aux->brother){}
	return aux;
}


void print_tree(node* aux, int tabs){
	int i;


	node *son;

	for(i = 0; i < tabs; i++){
		printf(".");
	}
	if (strcmp(aux->value, aux->type) != 0){
		printf("%s(%s)\n", aux->type, aux->value);
	}
	else{
		printf("%s\n", aux->value);
	}

	for(son = aux->son; son != NULL; son = son->brother){
		print_tree(son, tabs + 2);
	}

}


/*--------tabela de simbolos-----------------------------*/
void printTable(){
	table* hold = semanticTable;
	symbol* holdChild;
	int flag = 1;
	for(; hold; hold = hold->brother){
		if(hold->activated){
			if(flag){ printf("===== %s Symbol Table =====\n", hold->name); flag = 0;} else printf("\n===== Function %s Symbol Table =====\n", hold->name);
			for(holdChild = hold->child; holdChild; holdChild = holdChild->brother){
				printf("%s\t%s", holdChild->name, holdChild->type);
				if(holdChild->param) printf("\t%s\n", holdChild->param); else printf("\n");
			}
		}
	}
}



void initTable(){
	semanticTable = (table*)malloc(sizeof(table));
	semanticTable->name = (char*)malloc(1+strlen("Class")*sizeof(char));
	strcpy(semanticTable->name, "Class");
	semanticTable->activated = 1;
	semanticTable->child = NULL;
	semanticTable->brother = NULL;
}

symbol* addSymbol(table* aux, char* _name, char* _type, char* _param, int _line, int _col){
	symbol* hold;
	if(!aux->child){
		aux->child = (symbol*)malloc(sizeof(symbol));
		hold = aux->child;
	}else{
		hold = aux->child;
		while(hold){
			//printf("--%s\n", aux->name);
			//printf("\t(%s) - (%s)\n", hold->name, _name);
			if(strcmp(hold->name, _name) == 0){
				//printf("+++%s\n", aux->name);
				if(strcmp(aux->name, "Global") == 0){
					//printf("WELELELE\n");
					if(strcmp(hold->type, _type) != 0){
						printf("Line %d, col %d: Conflicting types (got %s, expected %s)\n", _line, _col, _type, hold->type);
					}
					return NULL;
				}
				else{
					printf("Line %d, col %d: Symbol %s already defined\n", _line, _col, _name);
					return NULL;1
				}
			}
			if(hold->brother)
				hold = hold->brother;
			else
				break;
		}
		hold->brother = (symbol*)malloc(sizeof(symbol));
		hold = hold->brother;
	}
	hold->brother = NULL;
	hold->name = (char*)malloc(1+strlen(_name)*sizeof(char));
	strcpy(hold->name, _name);
	hold->type = (char*)malloc(1+strlen(_type)*sizeof(char));
	strcpy(hold->type, _type);
	if(_param){
		hold->param = (char*)malloc(1+strlen(_param)*sizeof(char));
		strcpy(hold->param, _param);
	}else
		hold->param = NULL;
	return hold;
}

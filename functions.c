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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <ctype.h>
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
	for(; hold; hold = hold->brother){
		if(hold->activated){
			if(strcmp(hold->type,"Class")==0){
				printf("===== Class %s Symbol Table =====\n", hold->name);
			} 
			else 
				printf("\n===== Method %s Symbol Table =====\n",hold->name);
			for(holdChild = hold->child; holdChild; holdChild = holdChild->brother){
				printf("%s\t", holdChild->name);
				if(holdChild->param) printf("%s", holdChild->param);
				printf("\t%s", holdChild->type);
				if(holdChild->flag) printf("\t%s\n",holdChild->flag); else printf("\n");
			}
		}
	}
}


symbol* addSymbol(table* aux, char* _name, char* _type, char* _param,char* _flag, int _line, int _col){
	symbol* hold;
	if(!aux->child){
		aux->child = (symbol*)malloc(sizeof(symbol));
		hold = aux->child;
	}else{
		hold = aux->child;
		while(hold){
			//printf("--%s\n", aux->name);
			//printf("\t(%s) - (%s)\n", hold->name, _name);
			/*if(strcmp(hold->name, _name) == 0){
				//printf("+++%s\n", aux->name);
				if(strcmp(aux->type, "Class") == 0){
					//printf("WELELELE\n");
					if(strcmp(hold->type, _type) != 0){
						printf("Line %d, col %d: Conflicting types (got %s, expected %s)\n", _line, _col, _type, hold->type);
					}
					return NULL;
				}
				else{
					printf("Line %d, col %d: Symbol %s already defined\n", _line, _col, _name);
					return NULL;
				}
			}*/
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
	if(_flag){
		hold->flag = (char*)malloc(1+strlen(_flag)*sizeof(char));
		strcpy(hold->flag, _flag);
	}else
		hold->flag = NULL;
	return hold;
}


table* addTable(table* tab, char* _name, char* _type, int _activated){
	while(tab){
		if(strcmp(tab->type, "Class") == 0){
			if(tab->brother)
				tab = tab->brother;
			else
				break;
		}else
			break;
	}
	for(; tab->brother; tab = tab->brother){
		if(strcmp(tab->name, _name) == 0){
			tab->activated = 1;
			return tab;
		}
	}
	if(strcmp(tab->name, _name) == 0){
		tab->activated = 1;
		return tab;
	}
	//printf("%s\n", tab->name);
	table* ret = (table*)malloc(sizeof(table));
	ret->name = (char*)malloc(1+strlen(_name)*sizeof(char));
	strcpy(ret->name, _name);
	ret->type = (char*)malloc(1+strlen("Method")*sizeof(char));
	strcpy(ret->type, "Method");
	ret->activated = _activated;
	ret->child = NULL;
	ret->brother = NULL;
	tab->brother = ret;
	addSymbol(ret, "return", lowerCase(_type), NULL,NULL, -1, -1);
	return ret;
}

void initTable(char* _name){
	semanticTable = (table*)malloc(sizeof(table));
	semanticTable->name = (char*)malloc(1+strlen(_name)*sizeof(char));
	strcpy(semanticTable->name, _name);
	semanticTable->type = (char*)malloc(1+strlen("Class")*sizeof(char));
	strcpy(semanticTable->type, "Class");
	semanticTable->activated = 1;
	semanticTable->child = NULL;
	semanticTable->brother = NULL;
}

void addFieldDecl(table* tab, node* aux){
	node* son;
	for(son = aux; son != NULL; son = son->brother){
		if(strcmp("FieldDecl", son->type) == 0){
			char aux[50];

			if(strcmp("Bool",son->son->value)==0){
			sprintf(aux,"%s%s",lowerCase(son->son->value),"ean");
			addSymbol(tab,son->son->brother->value,aux ,NULL,NULL,0,0);}
			else{
				addSymbol(tab,son->son->brother->value,lowerCase(son->son->value) ,NULL,NULL,0,0);
			}
		}
	}

	//				symbol* addSymbol(table* aux, char* _name, char* _type, char* _param,char* _flag, int _line, int _col);
}

void addMethodDecl(table* tab, node* aux){
	int i;
	node* p;
	node*p2;
	node* p3;
	node* p4;
	char _type[50]; 
	char _name[50];
	char arr[20000] = {0};
	p=aux->son;
	p2=p->son; 
	strcpy(_type,p2->value); //tipo de retorno
	strcpy(_name,p2->brother->value); // nome da funçao

	i = 0;
	for( p4 = p2->brother->brother->son ; p4 != NULL;	p4 = p4->brother){
		if(strcmp("ParamDecl", p4->value) == 0){
			arr[i] = ',';
			i++;
		}
	}
	arr[i] = '\0';
	char* tmp = (char*)malloc(50+(10+strlen(arr))*sizeof(char));

	//get parametros da funçao
	for(p3 = p2->brother->brother->son; p3 != NULL; p3 = p3->brother){
		char* tmp2 = (char*)malloc(strlen(p3->son->value)+strlen(tmp));
		sprintf(tmp2, "%s%s",p3->son->value , arr);
		strcat(tmp,tmp2);
	}

	addSymbol(tab, _name, _type, tmp, NULL,0,0);
	sprintf(tmp,"%s(%s)",_name,tmp);
	//strcat(_name,tmp2);
	addTable(tab, tmp, _type, 1);

	


	// addSymbol(table* aux, char* _name, char* _type, char* _param,char* _flag, int _line, int _col)
}


void analiseSemantica(node* aux){
	if(!aux)
		return;
	node* son;
	if(strcmp("Id", aux->son->type) == 0){
			initTable(aux->son->value);
		}
	table* tab = semanticTable;
	for(son = aux->son; son != NULL; son = son->brother){
		if(strcmp("FieldDecl", son->type) == 0){
			addFieldDecl(tab, son);
		}
		else if(strcmp("MethodDecl", son->type) == 0){
			addMethodDecl(tab,son);
		}
	}
}

char* lowerCase(char* str){
	int i;
	char* ret = strdup(str);
	for(i = 0; i < strlen(str); i++){
		ret[i] = tolower(str[i]);
	}
	return ret;
}
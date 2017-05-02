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
	n->type_print = (char*)malloc(sizeof(char)*100);
	strcpy(n->type,type);
	strcpy(n->value,value);
	n->type_print=NULL;
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
		printf("%s(%s)", aux->type, aux->value);
	}
	else{
		printf("%s", aux->value);
	}
	if(aux->type_print!=NULL)
		printf(" - %s\n", aux->type_print);
	else
		printf("\n");
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
			if(strcmp(hold->name, _name) == 0){
				//printf("+++%s\n", aux->name);
				if(strcmp(aux->name, "Global") == 0){
					//printf("WELELELE\n");
					if(strcmp(hold->type, _type) != 0){
						//printf("Line %d, col %d: Conflicting types (got %s, expected %s)\n", _line, _col, _type, hold->type);
					}
					//return NULL;
				}
				else{
					//printf("Line %d, col %d: Symbol %s already defined\n", _line, _col, _name);
					//return NULL;
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
		}
	}
	if(strcmp(tab->name, _name) == 0){
		tab->activated = 1;
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
	if(strcmp(_type,"Bool")==0){
		addSymbol(ret, "return", "boolean", NULL,NULL, -1, -1);
	}
	else{
		addSymbol(ret, "return", lowerCase(_type), NULL,NULL, -1, -1);
	}

	//symbol* addSymbol(table* aux, char* _name, char* _type, char* _param,char* _flag, int _line, int _col)
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
			char aux2[50];
			if(strcmp("Bool",aux->son->value)==0){
				sprintf(aux2,"%s%s",lowerCase(aux->son->value),"ean");
				addSymbol(tab,aux->son->brother->value,aux2 ,NULL,NULL,0,0);
			}
			else{
				addSymbol(tab,aux->son->brother->value,lowerCase(aux->son->value) ,NULL,NULL,0,0);
			}
}

void addMethodDecl(table* tab, node* aux){
	int i;
	node* p;
	node*p2;
	node* p3;
	node* p4;
	char _type[50];
	char arr[20000] = {0};
	p=aux->son; //method header
	p2=p->son; //type da funçao
	p3 = p2->brother->brother->son; // params decl


	//--------------------------------------BEGIN-METHODHEADER---------------------------//
	//--------------------------INICIO adicionar as funçoes como simbolos da TABelas da CLASS--///////////////////////////////////////
	i = 0;
	for( p4 = p2->brother->brother->son ; p4 != NULL;	p4 = p4->brother){ //saber onumero de params decle!
		if(strcmp("ParamDecl", p4->value) == 0){
			arr[i] = ',';
			i++;
		}
	}
	arr[i] = '\0';

	char* tmp = (char*)malloc(50+(strlen("boolean")*strlen(arr))*sizeof(char));
	char* _name = (char*)malloc(50+(strlen(tmp)+50)*sizeof(char));
	strcpy(_type,p2->value); //tipo de retorno
	//strcpy(_name,p2->brother->value);
	sprintf(_name,"%s",p2->brother->value);// nome da funçao


	if(p3!=NULL){
		if(strcmp(p3->son->value,"StringArray")==0){

			sprintf(tmp,"(%s[]","String");
		}
		else{
			if(p3!=NULL){
				char* aux2 = (char*)malloc(strlen("boolean")*sizeof(char));
				if(strcmp("Bool",p3->son->value)==0){
						sprintf(aux2,"%s%s",lowerCase(p3->son->value),"ean");
						sprintf(tmp,"(%s",aux2);
						free(aux2);
				}
				else{
					sprintf(tmp, "(%s",lowerCase(p3->son->value));
				}
			}
			//get parametros da funçao
			for(p3=p3->brother; p3 != NULL; p3 = p3->brother){
				char* tmp2 = (char*)malloc(strlen(p3->son->value)+strlen(tmp));

				if(strcmp("Bool",p3->son->value)==0){
					char* aux3 = (char*)malloc(strlen("boolean")*sizeof(char));
					sprintf(aux3,"%s%s",lowerCase(p3->son->value),"ean");
					sprintf(tmp2,",%s",aux3);
					free(aux3);
				}
				else{
					sprintf(tmp2, ",%s", lowerCase(p3->son->value));
				}
				strcat(tmp,tmp2);
				free(tmp2);
			}
		}
		sprintf(tmp,"%s)",tmp);
	}
	else{
		sprintf(tmp,"()");
	}

	if(strcmp("Bool",_type)==0){
		addSymbol(tab, _name,"boolean", tmp, NULL,0,0);
	}
	else{
		addSymbol(tab, _name,lowerCase(_type), tmp, NULL,0,0);
	}

	sprintf(_name,"%s%s",_name,tmp);
	//strcat(_name,tmp2);
	table* actTable = addTable(tab, _name, _type, 1); //cria uma nova tabela method
	free(tmp);
	free(_name);
	//--------------------------fim adicionar as funçoes como simbolos da TABelas da CLASS--///////////////////////////////////////

	//--------------------------INICIO adicionar os parametros como simbolos daS TABelas METHOD--///////////////////////////////////////
	p3 = p2->brother->brother->son;
	if(p3!=NULL){

		if(strcmp(p3->son->value,"StringArray")==0){

				sprintf(tmp,"String[]");
				addSymbol(actTable, p3->son->brother->value, tmp, NULL, "param",0,0);
			}
			else{
				if(p3!=NULL){
					char* aux2 = (char*)malloc(strlen("boolean")*sizeof(char));
					if(strcmp("Bool",p3->son->value)==0){
							sprintf(aux2,"%s%s",lowerCase(p3->son->value),"ean");

							addSymbol(actTable, p3->son->brother->value, aux2, NULL, "param",0,0);
							free(aux2);
					}
					else{
						sprintf(aux2, "%s",lowerCase(p3->son->value));
						addSymbol(actTable, p3->son->brother->value, aux2, NULL, "param",0,0);
						free(aux2);
					}
				}
				for(p3=p3->brother; p3 != NULL; p3 = p3->brother){
					char* aux3 = (char*)malloc(strlen("boolean")*sizeof(char));
					if(strcmp("Bool",p3->son->value)==0){
							sprintf(aux3,"%s%s",lowerCase(p3->son->value),"ean");

							addSymbol(actTable, p3->son->brother->value, aux3, NULL, "param",0,0);

							free(aux3);
					}
					else{
						sprintf(aux3, "%s",lowerCase(p3->son->value));
						addSymbol(actTable, p3->son->brother->value, aux3, NULL, "param",0,0);
						free(aux3);
					}
				}

		}
	}
	//--------------------------FIM --- adicionar os parametros como simbolos daS TABelas METHOD--------------------////

	//--------------------------------------FIM-METHODHEADER---------------------------//

	//--------------------------------------INICIO-METHODBODY---------------------------//

	//node* v_decl = aux->son->brother->son;
	aux = aux->son->brother->son;
	if(aux!=NULL){
		for(;aux != NULL; aux = aux->brother){
			if(strcmp(aux->value,"VarDecl")==0){
				char aux2[50];
				if(strcmp("Bool",aux->son->value)==0){
					sprintf(aux2,"%s%s",lowerCase(aux->son->value),"ean");
					addSymbol(actTable,aux->son->brother->value,aux2 ,NULL,NULL,0,0);
				}
				else{
					addSymbol(actTable,aux->son->brother->value,lowerCase(aux->son->value) ,NULL,NULL,0,0);
				}
			}
			else{
				table_anotation(aux, actTable);}
		}
	}



	//--------------------------------------FIM-METHODBODY---------------------------//
	//
	// addSymbol(table* aux, char* _name, char* _type, char* _param,char* _flag, int _line, int _col)
}



void table_anotation(node *aux,table* tab){
	node* p3;
	node* p4;
	char arr2[20000] = {0};
	int i;
	if(!aux)
		return;
	node* hold;
	for(hold = aux->son; hold; hold = hold->brother){
		if(strcmp("VarDecl",hold->type)==0){
			continue;
		}
		else{
			table_anotation(hold, tab);
		}
	}
	char* string;
	char* undef = myCat(NULL, "undef");
	if(aux->type){
		if(strcmp("Id", aux->type) == 0){
			string = getIdType(aux->value, tab);

			if(string){
				aux->type_print = myCat(NULL, getIdType(aux->value, tab));
			}
			else{
				aux->type_print = undef; // ERROR
			}
		}
		else if(strcmp("BoolLit", aux->type) == 0){
			aux->type_print = myCat(NULL, "boolean");
		}
		else if(strcmp("DecLit", aux->type) == 0){
			aux->type_print = myCat(NULL, "int");
		}
		else if(strcmp("Realit", aux->type) == 0){
			aux->type_print = myCat(NULL, "int");
		}
		else if(strcmp("StrLit", aux->type) == 0){
			string = myCat(NULL, "String");
			aux->type_print = myCat(NULL,string);
		}
		else if(strcmp("And", aux->value) == 0 || strcmp("Or", aux->value) == 0 || strcmp("Eq", aux->value) == 0
			|| strcmp("Geq", aux->value) == 0 || strcmp("Gt", aux->value) == 0  || strcmp("Leq", aux->value) == 0
			|| strcmp("Lt", aux->value) == 0 || strcmp("Neq", aux->value) == 0 || strcmp("Not", aux->value) == 0){
			string = myCat(NULL, "boolean");
			aux->type_print = myCat(NULL,string);
		}
		else if (strcmp("Length", aux->value)==0 || strcmp("ParseArgs",aux->value)==0){
			string = myCat(NULL, "int");
			aux->type_print = myCat(NULL,string);
		}
		else if(strcmp("Assign",aux->value)==0){
			if(aux->son->brother->type_print!=NULL){
				if(strcmp(aux->son->type_print,"undef")==0 || strcmp(aux->son->brother->type_print,"undef")==0){
					aux->type_print = undef;
				}
				else if(strcmp(aux->son->type_print,"boolean")==0 || strcmp(aux->son->brother->type_print,"boolean")==0){
					aux->type_print = undef;
				}
				else{
					aux->type_print = myCat(NULL, getIdType(aux->son->value, tab));
				}
			}
			else{
				aux->type_print = myCat(NULL, getIdType(aux->son->value, tab));
			}
		}
		else if(strcmp("Add",aux->value)==0 || strcmp("Sub",aux->value)==0 || strcmp("Div",aux->value)==0 || strcmp("Mul",aux->value)==0 || strcmp("Mod",aux->value)==0){
			if(strcmp(aux->son->type_print,"undef")==0 || strcmp(aux->son->brother->type_print,"undef")==0){
				aux->type_print = undef;
			}else{
				if(strcmp(aux->son->type_print,"int")==0 && strcmp(aux->son->brother->type_print,"int")==0){
					aux->type_print = myCat(NULL,"int");
				}
				else if((strcmp(aux->son->type_print,"double")==0 && strcmp(aux->son->brother->type_print,"int")==0) ||(strcmp(aux->son->type_print,"int")==0 && strcmp(aux->son->brother->type_print,"double")==0)){
					aux->type_print = myCat(NULL,"double");
				}
				else if(strcmp(aux->son->type_print,"double")==0 && strcmp(aux->son->brother->type_print,"double")==0){
					aux->type_print = myCat(NULL,"double");
				}
				else{
					aux->type_print = undef;
				}
			}

		}
		else if((strcmp("Minus",aux->value)==0 || strcmp("Plus",aux->value)==0)){
			if(strcmp(aux->son->type_print,"int")==0 ||strcmp(aux->son->type_print,"double")==0 ){
				aux->type_print = myCat(NULL, getIdType(aux->son->value, tab));
			}
			else{
				aux->type_print = undef;
			}
		}
		else if(strcmp("Call",aux->value)==0){
		// 	string = myCat(NULL, getIdType(aux->son->value, tab));
		// 	if(string)
		// 		aux->type_print = myCat(NULL, getIdType(aux->son->value, tab));
		// 	//get parametros da funçao
		// 	i = 0;
		// 		for( p4 = aux->son->brother; p4 != NULL;	p4 = p4->brother){ //saber
		// 			if(strcmp("Id", p4->value) == 0){
		// 				arr2[i] = ',';
		// 				i++;
		// 			}
		// 		}
		// 		arr2[i] = '\0';
		//
		//
		// 	char* tmp = (char*)malloc(50+(strlen("boolean")*strlen(arr2))*sizeof(char));
		//
		// 	if(aux->son->brother!=NULL){
		//
		// 		sprintf(tmp, "(%s",getIdType(aux->son->brother->value, tab));
		//
		// 		if(aux->son->brother->brother!=NULL){
		// 			for(p3=aux->son->brother->brother; p3 != NULL; p3 = p3->brother){
		// 			sprintf(tmp, "%s,%s",tmp,getIdType(p3->value, tab));
		// 			}
		// 		}
		//
		// 		sprintf(tmp,"%s)",tmp);
		// 		aux->son->type_print = tmp;
		// 	}
		// 	else{
		// 		sprintf(tmp,"()");
		// 		aux->son->type_print = tmp;
		// 	}
		// }

		checkCall(aux);

		}
	}
}
//função para contar metodos c o mesmo nome, retorna 0 senão existir
int count_method(char* str){
	symbol* child;
	int count=0;
	for(child = semanticTable->child; child; child = child->brother){
		if(strcmp(str, child->name) == 0 && child->param!=NULL){
			count+=1;
			}
	}
	return count;
}
void checkCall(node* aux){
	//verificar se existe função
	int n_func=0;
	if(n_func=count_method(aux->son->value)!=0){
		if(n_func==1){
			//se só existe uma, verificar params
			if(getIdParamType(aux->son->value)){
				
			}

		}
	}
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


char* getIdParamType(char* str){
	symbol* child;
	for(child = semanticTable->child; child; child = child->brother){
		if(strcmp(str, child->name) == 0 && child->param!=NULL)
			return child->param;
	}
	return NULL;
}

char* getIdType(char* str, table* tab){
	symbol* child;
	for(child = tab->child; child; child = child->brother){
		if(strcmp(str, child->name) == 0)
			return child->type;
	}
	for(child = semanticTable->child; child; child = child->brother){
		if(strcmp(str, child->name) == 0)
			return child->type;
	}
	return NULL;
}

char* myCat(char* str1, char* str2){
	int size1, size2;
	if(str1)
		size1 = strlen(str1);
	else
		size1 = 0;
	if(str2)
		size2 = strlen(str2);
	else
		size2 = 0;
	str1 = realloc(str1, (1+size1+size2)*sizeof(char));
	str1[size1] = '\0';
	sprintf(str1, "%s%s", str1, str2);
	return str1;
}


char* lowerCase(char* str){
	int i;
	char* ret = strdup(str);
	for(i = 0; i < strlen(str); i++){
		ret[i] = tolower(str[i]);
	}
	return ret;
}

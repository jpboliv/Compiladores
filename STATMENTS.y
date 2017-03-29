Statement: OBRACE auxStatement4 CBRACE                  {if(flagTreeErros ==1){
                                                          printf("ola1\n");
                                                          if((cntbrothers($2->son)+1)>1 || ($2->son)==NULL){
                                                          aux2_node= new_node("Block","Block");
                                                          add_son(aux2_node,$2);
                                                          add_brother($$,aux2_node);
                                                        }
                                                        else{
                                                          add_brother($$,$2);
                                                        }}
                                                        ;}
  | IF OCURV Expr CCURV Statement ELSE Statement        {if(flagTreeErros ==1){printf("ola2\n");
                                                        aux_node = new_node("If","If");
                                                        add_son(aux_node,$3);
                                                        add_brother($3,$5);
                                                        add_brother($3,$7);
                                                        add_son($$,aux_node);};}
  | IF OCURV Expr CCURV Statement %prec ELSE            {if(flagTreeErros ==1){
                                                        printf("ola3\n");
                                                        aux_node = new_node("If","If");
                                                        add_son(aux_node,$3);
                                                        add_brother ($3,$5);
                                                        add_son($$,aux_node);
                                                        };}
  | WHILE OCURV Expr CCURV Statement                    {if(flagTreeErros ==1){printf("ola4\n");
                                                          aux_node= new_node("While","While");
                                                          add_son(aux_node,$3);
                                                          add_brother($3,$5);
                                                          add_son($$,aux_node);
                                                          };}
  | DO Statement WHILE OCURV Expr CCURV SEMI            {if(flagTreeErros ==1){
                                                          printf("ola5\n");
                                                          aux_node= new_node("DoWhile","DoWhile");
                                                          add_son(aux_node,$2);
                                                          add_brother($2,$5);
                                                          add_son($$,aux_node);
                                                          };}
  | PRINT OCURV auxStatement2 CCURV SEMI                {if(flagTreeErros ==1){
                                                          printf("ola6\n");
                                                          aux_node=new_node("Print","Print");
                                                          add_son(aux_node,$3);
                                                          add_son($$,aux_node);
                                                          };}
  | auxStatement1 SEMI                                  {if(flagTreeErros ==1){printf("ola7\n");add_son($$,$1);};}
  | RETURN auxStatement5 SEMI                           {if(flagTreeErros ==1){ printf("ola8\n");
                                                                                aux_node = new_node("Return","Return");
                                                                                if($2 == NULL);
                                                                                  add_son($$,aux_node);
                                                                                }
                                                                                else{
                                                                                  add_son(aux_node,$2);
                                                                                  add_son($$,aux_node);
                                                                                };}
  | error SEMI                                          {flagTreeErros = 0;}
;
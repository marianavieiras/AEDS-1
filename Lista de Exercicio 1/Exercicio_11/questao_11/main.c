#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
int main (){
TLista list;
TItem item1;
TItem item2;
TItem item3;
TItem item4;
FLvazia (&list);

item1.chave = 10;
item2.chave = 20;
item3.chave = 30;
item4.chave = 40;

LInsere (&list, &item1);
LInsere (&list, &item2);
LInsere (&list, &item3);
LInsere (&list, &item4);

printf ("Lista:\n");
LImprime(&list);

printf ("Troca i e j: \n");
troca (&list, 1, 2);
LImprime(&list);
return 0;
}

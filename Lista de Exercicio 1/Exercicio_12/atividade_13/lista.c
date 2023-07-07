#include <stdio.h>
#include <stdlib.h>
#include "lista.h";

void FLVazia (TLista *pLista){
    pLista->primeiro = (struct TCelula *)malloc(sizeof( struct TCelula));
    pLista->ultimo = pLista->primeiro;
    pLista->primeiro->pProx = NULL;
}
void LInsere (TLista *pLista, TItem *item){

pLista->ultimo->pProx = (struct TCelula *)malloc(sizeof(struct TCelula));
pLista->ultimo = pLista->ultimo->pProx;
pLista->ultimo->item = *item;
pLista->ultimo->pProx = NULL;
}
int LRetira (TLista *pLista, TItem *item){
    struct TCelula *aux;
    *item = pLista->primeiro->pProx->item;
    aux = pLista->primeiro;
    pLista->primeiro = pLista->primeiro->pProx;
    free(aux);
    return 1;

}
void LImprime (TLista *pLista){
    struct TCelula *aux;
    aux = pLista->primeiro->pProx;
    while (aux != NULL){

        printf ("%d\n", aux->item.chave);
        aux= aux->pProx;
    }
}

int tam (TLista *pLista){
int i = 0;
struct TCelula *aux = pLista->primeiro->pProx;
while (aux != NULL){
    i++;
    aux = aux->pProx;

}
return i;
}
void Troca (TLista *pLista, struct TCelula *p){
    if (p == NULL){
        printf ("ERRO!!!");
        return;
    }
    struct TCelula *aux = pLista->primeiro->pProx;
    struct TCelula *ax = NULL;
    while (aux->pProx != p){
        ax = aux;
        aux = aux->pProx;
    }
    if (ax != NULL){
    struct TCelula *pont;
    ax->pProx = p->pProx;
    pont = p->pProx->pProx;
    p->pProx->pProx = p;
    p->pProx = p->pProx;
}  else {
   ax->pProx = p->pProx;
   p->pProx = ax;
   pLista->primeiro = p;
}
}

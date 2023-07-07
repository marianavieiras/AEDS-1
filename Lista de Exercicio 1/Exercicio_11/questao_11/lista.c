#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void FLvazia (TLista *pLista){
pLista->primeiro = (struct TCelula *)malloc(sizeof(struct TCelula));
pLista->ultimo = pLista->primeiro;
pLista->primeiro->pProx = NULL;
}
int LVazia(TLista* pLista) {
	return(pLista->ultimo == pLista->primeiro);
}
void LInsere (TLista *pLista, TItem *item){
    pLista->ultimo->pProx = (struct TCelula *)malloc(sizeof( struct TCelula));
    pLista->ultimo = pLista->ultimo->pProx;
    pLista->ultimo->item = *item;
    pLista->ultimo->pProx = NULL;
}
void LImprime (TLista *pLista){
    struct TCelula *aux;
    aux = pLista->primeiro->pProx;
    while (aux != NULL){
        printf ("%d\n ", aux->item.chave);
        aux = aux->pProx;
    }
}

int tam(TLista *pLista){
int i = 0;
struct TCelula *aux = pLista->primeiro->pProx;
while (aux != NULL){
    i++;
    aux = aux->pProx;
}
return i;
}

void troca (TLista *pLista, int i, int j){
if(i > tam(pLista) || j> tam(pLista)){
    printf ("ERRO");
    return;
}
struct TCelula *aux;
struct TCelula *pI = NULL;
struct TCelula *pJ = NULL;
struct TCelula *auxI = NULL;
struct TCelula *auxJ = NULL;

aux = pLista->primeiro;
int cont= 0;
while (aux->pProx != NULL){
    if (cont == i){
        auxI = aux->pProx;
        pI = aux;
    }
    if (cont == j){
        auxJ = aux->pProx;
        pJ = aux;
    }
    cont++;
    aux = aux->pProx;
    }
if (auxI == NULL || auxJ == NULL){
    printf ("ERRO");
    return;
}
if (pI != NULL){
    pI->pProx = auxJ;
}
if (pJ != NULL){
    pJ->pProx = auxI;
}

aux = auxJ->pProx;
auxJ->pProx = auxI->pProx;
auxI->pProx = aux;
}

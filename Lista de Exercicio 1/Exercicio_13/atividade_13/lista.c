#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void FLVazia (TLista *pLista){
    pLista->pFirst = (struct TCelula *)malloc(sizeof(TCelula));
    pLista->pLast = pLista->pFirst;
    pLista->pFirst->pProx = NULL;
}

void Linsere(TLista *pLista, struct TItem *pItem)
{
    pLista->pLast->pProx = (struct TCelula *)malloc(sizeof(TCelula));
    pLista->pLast = pLista->pLast->pProx;
    pLista->pLast->item = *pItem;
    pLista->pLast->pProx = NULL;
}

int Lretira(TLista *pLista, struct TItem *pItem)
{
    struct TCelula *pAux;
    *pItem = pLista->pFirst->pProx->item;
    pAux = pLista->pFirst;
    pLista->pFirst = pLista->pFirst->pProx;
    free(pAux);
    return 1;
}

void Limprime(TLista *pLista){

    struct TCelula *pAux;
    pAux = pLista->pFirst->pProx;

    while (pAux != NULL){

        printf("%d\n", pAux->item.key);
        pAux = pAux->pProx;

    }
}

int tamanho(TLista *lista){

    int i = 0;
    struct TCelula *pAux = lista->pFirst->pProx;
    while (pAux != NULL){

        i++;
        pAux = pAux->pProx;

    }
    return i;

}

void Troca(TLista *lista, struct TCelula *p){

    if (p == NULL){

        printf("Valor invalido!\n");
        return;
    }

    struct TCelula *aux = lista->pFirst->pProx;
    struct TCelula *ant = NULL;

    while (aux->pProx != p){

        ant = aux;
        aux = aux->pProx;

    }
    if (ant != NULL){

        struct TCelula *temp;
        ant->pProx = p->pProx;
        temp = p->pProx->pProx;
        p->pProx->pProx = p;
        p->pProx = temp->pProx;

    }else{

        ant->pProx = p->pProx;
        p->pProx = ant;
        lista->pFirst = p;

    }
}


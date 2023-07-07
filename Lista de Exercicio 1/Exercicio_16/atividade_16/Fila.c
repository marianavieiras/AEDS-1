#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

void FVazia (TFila* pFila) {
    pFila->primeiro = (TCelula*)malloc(sizeof(TCelula));
    pFila->ultimo = pFila->primeiro;
    pFila->primeiro->pProx = NULL;
}
int vazia (TFila* pFila) {
    return (pFila->primeiro == pFila->ultimo);
}

int Enfileira (TFila *pFila, TItem *pItem) {
    TCelula* aux;
    aux = (TCelula*) malloc(sizeof(TCelula));
    if(aux == NULL){
        return 0;
        }
        else {
    pFila->ultimo->pProx = aux;
    pFila->ultimo = aux;
    aux->item = *pItem;
    aux->pProx = NULL;
    return 1;
    }
}

int Desenfileira (TFila *pFila, TItem *pItem) {
    TCelula* pAux;
    if(vazia(pFila)){
        return 0;}
        else {
    pAux = pFila->primeiro;
    pFila->primeiro = pFila->primeiro->pProx;
    *pItem = pFila->primeiro->item;
    free(pAux);
    return 1;
        }
}

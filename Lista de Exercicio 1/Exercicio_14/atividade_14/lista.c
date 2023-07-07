#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void FFVazia (TFila* pFila) {
    pFila->pFrente = (Celula*)malloc(sizeof(Celula));
    pFila->pTras = pFila->pFrente;
    pFila->pFrente->pProx = NULL;
}
int Fvazia (TFila* pFila) {
    return (pFila->pFrente == pFila->pTras);
}

int Enfileira (TFila *pFila, TItem* pItem) {
    Celula* pNovo;
    pNovo = (Celula*) malloc(sizeof(Celula));
    if(pNovo     == NULL)
        return 0;
    pFila->pTras->pProx = pNovo;
    pFila->pTras = pNovo;
    pNovo->item = *pItem;
    pNovo->pProx = NULL;
    return 1;
}

int Desenfileira (TFila* pFila, TItem* pItem) {
    Celula* pAux;
    if(Fvazia(pFila))
        return 0;
    pAux = pFila->pFrente;
    pFila->pFrente = pFila->pFrente->pProx;
    *pItem = pFila->pFrente->item;
    free(pAux);
    return 1;
}


void imprime(TFila* fila){
    Celula* aux = fila->pFrente->pProx;
    while(aux!=NULL){
        printf("ID: %d -> ",aux->item.id);
        aux=aux->pProx;
    }
    printf("#\n");
}


int comprimento(TFila* fila){
    Celula* aux = fila->pFrente->pProx;
    int cont = 0;
    while(aux!=NULL){
        cont++;
        aux=aux->pProx;
    }
    return cont;
}

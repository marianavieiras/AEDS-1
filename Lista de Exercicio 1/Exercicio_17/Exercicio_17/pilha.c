#include <stdio.h>
#include "pilha.h"


void PVazia (TPilha *pPilha) {

    pPilha->primeiro = (TCelula*)malloc(sizeof(TCelula));
    pPilha->ultimo = pPilha->primeiro;
    pPilha->ultimo->pProx = NULL;
    pPilha->tamanho = 0;
}

int vazia (TPilha *pPilha) {
    return (pPilha->primeiro == pPilha->ultimo);
}

int PTamanho (TPilha *pPilha) {
    return (pPilha->tamanho);
}

int Empilha (TPilha *pPilha, TItem *pItem) {

    TCelula* aux;
    aux = (TCelula*)malloc(sizeof(TCelula));
    pPilha->primeiro->item = *pItem;
    aux->pProx = pPilha->primeiro;
    pPilha->primeiro = aux;
    pPilha->tamanho++;

    return 1;
}

int Desempilha (TPilha *pPilha, TItem *pItem, TChave c) {
    TCelula* pAux;
    if (vazia(pPilha)){
        return 0;
    }else{
    pAux = pPilha->primeiro;
    pPilha->primeiro = pAux->pProx;
    *pItem = pAux->pProx->item;
    free(pAux);
    }
    if(pItem->chave == c){
        free(pItem);
        printf("Removido\n");
    }
    pPilha->tamanho--;
    return 1;
}



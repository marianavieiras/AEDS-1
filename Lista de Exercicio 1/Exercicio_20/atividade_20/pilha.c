#include <stdio.h>
#include "pilha.h"


void FPVazia (TPilha* pPilha) {
    pPilha->pTopo = (TCelula*)malloc(sizeof(TCelula));
    pPilha->pFundo = pPilha->pTopo;
    pPilha->pTopo->pProx = NULL;
    pPilha->tamanho = 0;
}


int PTamanho (TPilha* pPilha) {
    return (pPilha->tamanho);
}

int Empilha (TPilha* pPilha, TItem* pItem) {

    TCelula* pNovo;
    pNovo = (TCelula*)malloc(sizeof(TCelula));
    pPilha->pTopo->item = *pItem;
    pNovo->pProx = pPilha->pTopo;
    pPilha->pTopo = pNovo;
    pPilha->tamanho++;

    return 1;
}

int PVazia (TPilha* pPilha) {
    return (pPilha->pTopo == pPilha->pFundo);
}

int Desempilha (TPilha* pPilha, TItem* pItem) {

    TCelula* pAux;
    if (PVazia (pPilha)){
        return 0;
    }

    pAux = pPilha->pTopo;
    pPilha->pTopo = pAux->pProx;
    *pItem = pAux->pProx->item;
    free(pAux);
    pPilha->tamanho--;

    return 1;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Operacoes.h"

Node* FNodeVazio(int numero){
    Node *pAux = (Node*)malloc(sizeof(Node));
    pAux->info = numero;
    pAux->dir = NULL;
    pAux->esq = NULL;
    return pAux;
}

int insere(Node** raiz, int numero){
    if (*raiz == NULL){
        *raiz = FNodeVazio(numero);
        return 1;
    }
    if (numero < (*raiz)->info){
        return insere(&((*raiz)->esq), numero);
    }
    if (numero > (*raiz)->info){
        return insere(&((*raiz)->dir), numero);
    }
    return 0;
}

int numNos(Arvore raiz){
    if(raiz!=NULL){
        return 1 + numNos(raiz->esq) + numNos(raiz->dir);
    } else{
        return 0;
    }
}

int numFolhas(Arvore pRaiz){
    if(pRaiz->esq == NULL && pRaiz->dir == NULL) {
        return 1;
    } else if(pRaiz->esq == NULL && pRaiz->dir == NULL){
        return numFolhas(pRaiz->esq)+numFolhas(pRaiz->dir);
    } else if(pRaiz->esq != NULL){
        return numFolhas(pRaiz->esq);
    } else{
        return numFolhas(pRaiz->dir);
    }
}

int Folhas(Arvore pRaiz){
    return numNos(pRaiz) - numFolhas(pRaiz);
}

#include <stdio.h>
#include <stdlib.h>
#include "operacao.h"


NO* criar(TItem x){
    NO *pAux = (NO*)malloc(sizeof(NO));
    pAux->item =x;
    pAux->pEsq = NULL;
    pAux->pDir = NULL;
    return pAux;
}

int insere (NO** ppRaiz, TItem x){
    if (*ppRaiz == NULL) {
        *ppRaiz = criar(x);
        return 1;
    }
    if (x.cod < (*ppRaiz)->item.cod)
        return insere(&((*ppRaiz)->pEsq), x);
    if (x.cod > (*ppRaiz)->item.cod)
        return insere(&((*ppRaiz)->pDir), x);
    return 0;
}

int pesquisa (Arvore pRaiz, int cod, TItem *pX) {
    if (pRaiz == NULL)
        return 0;
    if (cod < pRaiz->item.cod)
        return pesquisa(pRaiz->pEsq, cod, pX);
    if (cod > pRaiz->item.cod)
        return pesquisa(pRaiz->pDir, cod, pX);

    *pX = pRaiz->item;
    return 1;
}

void adicionar(NO** raiz){
    TItem produto;
    printf("Digite o codigo do produto: ");
    scanf("%d",&produto.cod);
    printf("Digite o preco do produto: ");
    scanf("%f",&produto.preco);

    insere (raiz,produto);
}

void sucessor (NO* q, NO** r){
    NO *pAux;
    if ((*r)->pEsq != NULL){
        sucessor(q, &(*r)->pEsq);
        return;
        }
    q->item = (*r)->item;
    pAux = *r;
    *r = (*r)->pDir;
    free (pAux);
}

int retirar (TItem x, NO** p){
    NO *pAux;

    if (*p == NULL)
        return 0;
    if (x.cod < (*p)->item.cod)
        return retirar(x, &((*p)->pEsq));
    if (x.cod > (*p)->item.cod)
        return retirar(x, &((*p)->pDir));

    if ((*p)->pEsq == NULL && (*p)->pDir == NULL){
        free(*p);
        *p = NULL;
        return 1;
    }
    if ((*p)->pEsq != NULL && (*p)->pDir == NULL){
        pAux = *p;
        *p = (*p)->pEsq;
        free(pAux);
        return 1;
    }
    if ((*p)->pDir != NULL && (*p)->pEsq == NULL){
        pAux = *p;
        *p = (*p)->pDir;
        free(pAux);
        return 1;
    }

    sucessor(*p, &((*p)->pDir));
    return 1;
}

void central(NO *pRaiz ){
    if (pRaiz != NULL){

    central(pRaiz->pEsq);
    printf("%d ", pRaiz->item.cod);
    central(pRaiz->pDir);
}
}

#include <stdio.h>
#include <stdlib.h>
#include "Operacoes.h"

NO* criar(TItem x){
    NO *pAux = (NO*)malloc(sizeof(NO));
    pAux->item =x;
    pAux->pEsq = NULL;
    pAux->pDir = NULL;
    return pAux;
}

int insere (NO ** pRaiz, TItem x){
    if (*pRaiz == NULL){
        *pRaiz = criar(x);
        return 1;
    }
    if (x.cod < (*pRaiz)->item.cod)
        return insere(&((*pRaiz)->pEsq), x);
    if (x.cod > (*pRaiz)->item.cod)
        return insere(&((*pRaiz)->pDir), x);
    return 0;
}

void Central(NO *p){
    if (p == NULL)
        return;
    Central(p->pEsq);
    printf("%d ", p->item.cod);
    Central(p->pDir);
}

void maximo (NO *p){
    if (p->pDir == NULL)
        printf("%d\n", p->item.cod);
    Central(p->pDir);
}

void minimo (NO *p){
    if (p->pEsq == NULL)
        printf("%d\n", p->item.cod);
    Central(p->pEsq);
}



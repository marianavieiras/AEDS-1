#include <stdio.h>
#include "pilha.h"
#define MAXTAM 1000

void FPVazia (TPilha* pPilha) {
    pPilha->iTopo = 0;
}

int PVazia (TPilha* pPilha) {
    return (pPilha->iTopo == 0);
}

int PTamanho (TPilha* pPilha) {
    return (pPilha->iTopo);
}


int Empilha (TPilha* pPilha, TItem* pItem) {

    if (pPilha->iTopo == MAXTAM){
        return 0;
    }

    pPilha->vItem[pPilha->iTopo] = *pItem;
    printf("%d", pItem->Chave);
    pPilha->iTopo++;

    return 1;
}

int Desempilha (TPilha* pPilha, TItem* pItem, TItem* pItem1, TItem* pItem2) {

    if (PVazia(pPilha)){
        return 0;
    }
    pPilha->iTopo--;
    *pItem = pPilha->vItem[pPilha->iTopo];

    if(pItem->Chave == pItem1->Chave || pItem->Chave == pItem2->Chave){
        return pPilha->iTopo;
    }
    return -1;

}
void PImprime (TPilha *pPilha){
 for (int i= 0; i<pPilha->iTopo; i++){
    printf ("%d\n", pPilha->vItem[i].Chave);
 }

}


void trocaposicao (TPilha* pPilha, TItem pItem1, TItem pItem2) {

        for (int i = 0; i< pPilha->iTopo; i++){
           if(pPilha->vItem[i].Chave == pItem1.Chave){
            pPilha->vItem[i] = pItem2;
               } else if (pPilha->vItem[i].Chave == pItem2.Chave){
            pPilha->vItem[i] = pItem1;

}
        }

}

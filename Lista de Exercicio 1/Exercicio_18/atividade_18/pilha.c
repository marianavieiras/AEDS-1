#include <stdio.h>
#include "pilha.h"
#define MAX 1000

void PVazia (TPilha *pPilha) {
    pPilha->primeiro = 0;
}

int vazia (TPilha *pPilha) {
    return (pPilha->primeiro == 0);
}

int PTamanho (TPilha *pPilha) {
    return (pPilha->primeiro);
}
char Desempilha (TPilha *pPilha, TItem *pItem) {

    if (vazia(pPilha)){
        return '\0';
    }
    pPilha->primeiro--;
    *pItem = pPilha->item[pPilha->primeiro];
    return pItem->chave;


}
int Empilha (TPilha *pPilha, TItem *pItem) {
    if (pPilha->primeiro == MAX){
        return 0;
    } else {
    pPilha->item[pPilha->primeiro] = *pItem;
    pPilha->primeiro++;
    return 1;
    }
}

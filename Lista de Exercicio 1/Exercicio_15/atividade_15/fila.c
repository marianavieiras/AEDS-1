#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void FFVazia(TFila* fila){
    fila->queue[0].id = 0;
    fila->queue[1].id = 2;
}

int Fvazia(TFila* fila){
    return fila->queue[0].id == fila->queue[1].id;
}

int Enfileira (TFila* pFila, TItem* pItem) {
    if(pFila->queue[1].id == 99) {
        return 0;} else{
            printf("Insere em: %d", pFila->queue[1].id );
    pFila->queue[pFila->queue[1].id].id = pItem->id;
    printf(" ITEM = %d\n", pItem->id);
    pFila->queue[1].id = pFila->queue[1].id + 1;
    return 1;}
}

int Desenfileira (TFila* pFila, TItem* pItem) {
    if (Fvazia(pFila))
        return 0;
    *pItem = pFila->queue[pFila->queue[0].id];
    pFila->queue[0].id = pFila->queue[0].id+1;
    return 1;
}

void imprime(TFila* fila){
    int inicio = fila->queue[0].id;
    int fim = fila->queue[1].id;
    for(int i = 2; i<fim;i++){
        printf("%d\n ",fila->queue[i].id);
    }
}



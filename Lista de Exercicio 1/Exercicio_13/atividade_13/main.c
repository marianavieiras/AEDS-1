#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main (){
    TLista *lista;

    FLVazia(&lista);
    TItem i1, i2, i3, i4;

    i1.key = 54;
    i2.key = 37;
    i3.key = 23;
    i4.key = 12;

    Linsere(&lista, &i1);
    Linsere(&lista, &i2);
    Linsere(&lista, &i3);
    Linsere(&lista, &i4);

    struct TCelula *aux = lista.pFirst->pProx->pProx;
    printf("Antes:\n");
    Limprime(&lista);

    Troca(&lista, aux);

    printf("Depois:\n");
    Limprime(&lista);
    return 1;

}


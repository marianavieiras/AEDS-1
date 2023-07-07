#include <stdio.h>
#include <stdlib.h>
#include "lista.h";

// vazio, inserir, imprimir

void Flvazia(TLista *pLista){

    pLista->primeiro = INICIO;
    pLista->ultimo = pLista->primeiro;

}

int LInsere(TLista *pLista, TItem x)
{
    if (pLista->ultimo == TMAXIMO){
        return 0;
    }
    pLista->item[pLista->ultimo++] = x;
    return 1;
}

void LImprime(TLista *pLista){

    int i = pLista->primeiro;

    while(i < pLista->ultimo){

        printf("%d, ", pLista->item[i].key);
        i++;

    }
}

void inssub(TLista *l1, int i1, TLista *l2, int i2, int len){

    int novoFim = l1->ultimo + len;
    int aux = i1;

    while (aux != l1->ultimo){

        l1->item[aux + len] = l1->item[aux];
        aux++;

    }

    int cont = 0;

    while (cont < len){
        l1->item[i1] = l2->item[i2];
        i1++;
        i2++;
        cont++;
    }
    l1->ultimo += len;
}




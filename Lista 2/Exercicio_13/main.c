#include <stdio.h>
#include <stdlib.h>
#include "Operacoes.h"


int main()
{
    Arvore* raiz = (Arvore*)malloc(sizeof(Arvore));

    *raiz= NULL;
    TItem a;

    a.cod = 3;
    insere(raiz,a);
    a.cod = 6;
    insere(raiz,a);
    a.cod = 5;


    printf("Maior: ");
    maximo (*raiz);
    printf("Menor: ");
    minimo (*raiz);

    return 0;
}

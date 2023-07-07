#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Operacoes.h"

int main()
{
    Arvore* arvore = (Arvore*)malloc(sizeof(Arvore));
    *arvore = NULL;

    insere(arvore,5);
    insere(arvore,2);
    insere(arvore,1);
    insere(arvore,4);

    printf("Nos folhas: %d\n",numFolhas(*arvore));

    return 0;
}


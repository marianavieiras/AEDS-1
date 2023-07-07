#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "operacao.h"

int main()
{
   Tree* arvore = (Tree*)malloc(sizeof(Tree));
    *arvore = NULL;

    insere(arvore,2);
    insere(arvore,1);
    insere(arvore,3);
    int n = numNos(*arvore);
    printf("Completa: %d\n",Completa(*arvore,0,n));
    printf("Balanceada: %d\n",Balanceada(*arvore));
    printf("Perfeitamente balanceada: %d\n",PerfeitamenteBalanceada(*arvore));


    return 0;
}

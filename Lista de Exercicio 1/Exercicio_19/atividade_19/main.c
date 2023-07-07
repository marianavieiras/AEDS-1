#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
int main()
{
    TPilha pilha;
    TItem item1, item2, item3, item4;
   FPVazia (&pilha);

   item1.Chave= 1;
   item2.Chave= 2;
   item3.Chave= 3;
   item4.Chave= 4;

   Empilha (&pilha, &item1);
   Empilha (&pilha, &item2);
   Empilha (&pilha, &item3);
   Empilha (&pilha, &item4);

   printf ("\nTroca:\n");
   trocaposicao (&pilha, item2, item3);

    PImprime (&pilha);




}

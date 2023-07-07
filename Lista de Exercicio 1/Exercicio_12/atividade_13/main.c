#include <stdio.h>
#include <stdlib.h>
#include "lista.h";

int main()
{

   TLista lista;
   FLVazia (&lista);
   TItem item1;
   TItem item2;
   TItem item3;
   TItem item4;

   item1.chave = 10;
   item2.chave = 20;
   item3.chave = 30;
   item4.chave = 40;


   LInsere( &lista, &item1);
   LInsere (&lista, &item2);
   LInsere (&lista, &item3);
   LInsere (&lista, &item4);
   printf ("Lista:\n");
   LImprime (&lista);

   struct TCelula *aux = lista.primeiro->pProx->pProx;
   Troca (&lista, aux);
   printf("Troca:\n");
   LImprime(&lista);

       return 0;
}

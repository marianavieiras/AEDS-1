#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
int main()
{
    int op;
    TPilha pilha1, pilha2;
    TItem item1, item2, item3;
    FPVazia(&pilha1);
    FPVazia(&pilha2);
    item1.Chave = 230;
    item2.Chave = 220;
    item3.Chave = 12;
    Empilha (&pilha1, &item1);
    Empilha (&pilha2, &item2);
    Empilha (&pilha2, &item3);
    int iguais =0;

    if(PTamanho(&pilha1) == PTamanho(&pilha2)){
        printf("Pilhas iguais");
    }else{
        printf("Nao sao iguais...");
    }
    }



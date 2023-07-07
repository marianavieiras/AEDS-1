#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    int op;
    TPilha pilha;
    TItem item;
    TChave c;
    PVazia(&pilha);
    do{
            printf("-----------------------------\n");
    printf("1-Inserir a pilha\n2-Retirar da pilha\n0-Sair\n");
    scanf("%d",&op);

    switch(op){
        case 1:
             printf("-----------------------------\n");
            printf("Informe o ID: ");
            scanf("%d",&item.chave);
            Empilha(&pilha, &item);
        break;

        case 2:
            do{
            printf("-----------------------------\n");
            printf("Informe o ID que deseja desempilhar: ");
            scanf("%d",& c);
            }
            while(Desempilha(&pilha, &item, c) == 2);
    }

    }while(op!=0);
    return 0;
}


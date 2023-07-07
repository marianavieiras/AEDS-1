#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

int main()
{
    int op = 1;
    TFila fila;
    TItem item;
    FVazia(&fila);

    do{
        printf("-----------------------------\n");
        printf("1-Inserir contato\n\n2-Proximo contato\n\n0-Sair\n");
        scanf("%d",&op);

        switch(op){
            case 0:
                printf("FINALIZADO");
                break;

            case 1:
                printf("-----------------------------\n");
                printf("Adicione o nome do cliente: ");
                fflush(stdin);
                gets(item.nome);
                printf("Adicione o ID: ");
                scanf("%d",&item.id);
                printf("Adicione o telefone: ");
                scanf("%d",&item.telefone);
                Enfileira(&fila,&item);

                break;

            case 2:
                if(Desenfileira(&fila,&item) == 1){
                        printf("-----------------------------\n");
                    printf("Nome: %s\nID: %d\nTelefone: %d\n\n",item.nome, item.id, item.telefone);
                        printf("-----------------------------\n");
                }else{
                    printf("Fila se encontra vazia\n");
                }
                break;
            default:
                printf("ERRO");
                break;

        }
    }while(op!=0);

    return 0;
}


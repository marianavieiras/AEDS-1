#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){

    char op = 1;
    TFila fila;
    TItem item;
    FFVazia(&fila);

    do{
        printf("Menu:\na-Inserir: \nb-Proxima: \nc-Sair\n");
        scanf("%c",&op);

        switch(op){
            case 'a':
                printf("Entre com o id do processo: ");
                scanf("%d",&item.id);
                printf("Informe o conteudo: ");
                fgets(item.nome,50,stdin);
                fflush(stdin);
                Enfileira(&fila,&item);
                break;

            case 'b':
                if(Desenfileira(&fila,&item) == 1){
                    printf(" ID: %d",item.id);
                    printf(" Capacidade do conteudo: %d",item.id);

                }else{
                    printf("Fila vazia\n");
                }
                break;

            case 'c':
                printf("Finalizado\n");
                break;

        }
    }while(op!=0);

    return 0;
}


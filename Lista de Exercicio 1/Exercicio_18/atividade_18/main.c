#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#define MAX 1000

int main()
{
    TPilha pilha;
    TItem item;
    vazia(&pilha);
    char frase[MAX];

    printf("Digite a frase desejada: ");
    fflush(stdin);
    fgets(frase,MAX,stdin);

    int i = 0;
    do{
            item.chave = frase[i];
            Empilha(&pilha, &item);
            i++;
    }while(frase[i]!= '\n');

    i=0;
    char c;
    do{
        c = Desempilha(&pilha,&item);
        printf("%c",c);
        if(c == '\0'){
            break;
        }
    }while(i<PTamanho);
}


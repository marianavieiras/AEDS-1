#include <stdio.h>
#include <stdlib.h>
#include "Operacao.h"

int main()
{

   Item a[5];
    int n = 5;
    a[0].chave = 2;
    a[1].chave = 1;
    a[2].chave = 5;
    a[3].chave = 3;
    a[4].chave = 4;
    printf("Posicao:\n");
    printf("%d,%d,%d,%d,%d\n",a[0].chave,a[1].chave,a[2].chave,a[3].chave,a[4].chave);
    printf ("\n_________________________________");
    printf("\nBubbleSort:\n");

    Bubblesort(&a, 5);
     for(int i = 0; i< n; i++ ){
        printf("%d,",a[i].chave);
    }
    printf ("\n_________________________________");

    printf("\nSelectionsort:\n");
    Selectionsort(&a, 5);
     for(int i = 0; i< n; i++ ){
        printf("%d,",a[i].chave);
    }
    printf ("\n_________________________________");

    printf("\nInsertionsort:\n");
    Insertionsort (&a, 5);
     for(int i = 0; i< n; i++ ){
        printf("%d,",a[i].chave);
    }
}

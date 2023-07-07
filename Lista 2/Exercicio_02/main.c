#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"

int main(){
    int n;

    printf("Numero de registros: \n");
    scanf("%d",&n);
    Item registros[n];
    Item aux[n];


    for(int i = 0;i < n;i ++){
        printf("Informe a chave: ");
        scanf("%d",&registros[i].chave);
        aux[i] = registros[i];
    }

    Bubblesort(&registros, n);

    int result = 1;
    for(int i = 0;i < n;i ++){
        if(aux[i].chave != registros[i].chave){
            result = 0;
            }
        }

    if(result == 1){
        printf("Ordenado");
    } else{
    printf ("Nao ordenado");
    }
    return 0;
}

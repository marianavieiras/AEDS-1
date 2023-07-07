#include "Operacao.h"

void Bubblesort (Item *v, int n) {
    int i, j;
    Item aux;
    for (i = 0; i < n - 1; i++){
    for (j = n - 1; j > i; j--){
        if (v[j].chave > v[j-1].chave) {
            aux = v[j];
            v[j] = v[j-1];
            v[j-1] = aux;
            }
        }
    }
}



void Selectionsort (Item *v, int n) {
    int i, j, min;
    Item aux;
        for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i+1; j < n; j++){
            if (v[j].chave > v[min].chave)
            min = j;
            aux = v[min];
            v[min] = v[i];
            v[i] = aux;
        }
    }

}

void Insertionsort (Item *v, int n) {
    int i, j;
    Item aux;
    for( i = 1; i < n; i++ ) {
        aux = v[i];
        j = i;
        while( (j > 0) &&(aux.chave > v[j-1].chave) ){
            v[j] = v[j-1];
            j--;
        }
        v[j] = aux;
    }
}

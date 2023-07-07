#include "ordenacao.h"

void Bubblesort (Item *v, int n) {
    int i, j;
    Item aux;
    for (i = 0; i < n - 1; i++){
    for (j = n - 1; j > i; j--){
        if (v[j].chave < v[j-1].chave) {
            aux = v[j];
            v[j] = v[j-1];
            v[j-1] = aux;
            }
        }
    }
}

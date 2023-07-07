#include "BubbleSort.h"

    void bubblesort (Item *v, int n){
    int i, j, troca;
    Item aux;
    for (i=0; i<n-1; i++){
        //troca=0;
    for (j=n-1; j>i; j--){
        if (v[j].chave<v[j-1].chave){
            aux = v[j];
            v[j]= v[j-1];
            v[j-1] = aux;
           // troca = 1;
        }
   // if (troca == 0){
   // break;
//}
}
}
}

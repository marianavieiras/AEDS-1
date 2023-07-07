#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){

    TFila fila;
    TItem item1, item2, item3, item4;
    FFVazia(&fila);

    item1.id = 10;
    item2.id = 20;
    item3.id = 30;
    item4.id = 40;

    Enfileira (&fila, &item1);
    Enfileira (&fila, &item2);
    Enfileira (&fila, &item3);
    Enfileira (&fila, &item4);


    imprime (&fila);

    //Desenfileira (&fila, &item1);

}

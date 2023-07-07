#include <stdio.h>
#include <stdlib.h>
#include "lista.h";

int main()
{TLista lista1, lista2;
    TItem i1,i2,i3,i4,i5,i6,i7,i8,i9;

    i1.key = 1;
    i2.key = 2;
    i3.key = 3;
    i4.key = 4;

    Flvazia(&lista1);
    LInsere(&lista1, i1);
    LInsere(&lista1, i2);
    LInsere(&lista1, i3);
    LInsere(&lista1, i4);

    printf("Antes:\n");
    LImprime(&lista1);
    printf("\n\n");

    i5.key = 10;
    i6.key = 20;
    i7.key = 30;
    LInsere(&lista2,i5);
    LInsere(&lista2,i6);
    LInsere(&lista2,i7);


    inssub(&lista1,2,&lista2,2,4);
    printf("Depois:\n");
    LImprime(&lista1);

    return 0;
}



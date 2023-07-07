#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"

int main()
{
    Circulo * c1,* c2;


    c1 = circ_cria(5, 4, 10);
    c2 = circ_cria(5, 4, 20);



    if (circ_concentricos(c1, c2) == 1){

        float r1 = circ_raio(c1),r2 = circ_raio(c2);
        if (r1 > r2){
            printf ("%f", r1);
        } else {
            printf ("%f", r2);
        }
    }
    printf ("\n\nArea 1 = %f", circ_area(c1));
    printf ("\nArea 2 = %f\n", circ_area(c2));
    circ_libera(c1);
    circ_libera(c2);

    return 0;
}

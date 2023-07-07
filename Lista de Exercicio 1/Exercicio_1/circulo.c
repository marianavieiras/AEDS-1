#include "circulo.h"
#include <stdio.h>

Circulo * circ_cria (float x, float y, float r){
    Circulo * circulo = (Circulo *) malloc (sizeof (Circulo));
    circulo->r = r;
    circulo->x = x;
    circulo->y = y;

    return circulo;

}
void circ_libera (Circulo * c){
  free(c);

}
float circ_area (Circulo * c) {
float raio = c->r;
float area = 3.14*2*raio;
return area;
}

int circ_concentricos (Circulo * c1, Circulo * c2) {
if (c1->x == c2->x && c1->y == c2->y){
    return 1;
}
return 0;
}
float circ_raio (Circulo * c) {
return c->r;
}

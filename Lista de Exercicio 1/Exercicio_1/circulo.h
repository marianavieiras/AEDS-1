#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

typedef struct Circulo_Est {
 float x;
 float y;
 float r;
}Circulo;
/* Cria um circulo com centro (x,y) e raio r */
Circulo * circ_cria (float x, float y, float r);
/* Libera a memoria de um Circulo */
void circ_libera (Circulo * c);
/* Calcula a area de um circulo */
float circ_area (Circulo * c);
/* Verifica se dois circulos tem o mesmo centro */
int circ_concentricos (Circulo * c1, Circulo * c2);
/* Obtem o raio de um circulo */
float circ_raio (Circulo * c);


#endif // CIRCULO_H_INCLUDED

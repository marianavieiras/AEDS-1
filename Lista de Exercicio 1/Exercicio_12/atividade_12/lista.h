#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#define INICIO 0
#define TMAXIMO 1000

typedef int TChave;
typedef int TApontador;
typedef struct
{
    TChave key;
} TItem;
typedef struct
{
    TItem item[TMAXIMO];
    TApontador primeiro, ultimo;
} TLista;

void Flvazia(TLista *pLista);
int LInsere(TLista *pLista, TItem x);
void LImprime(TLista *pLista);
void inssub(TLista *l1, int i1, TLista *l2, int i2, int len);
#endif // LISTA_H_INCLUDED

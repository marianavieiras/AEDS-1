#ifndef OPERACAO_H_INCLUDED
#define OPERACAO_H_INCLUDED
typedef int TChave;
typedef struct {
    TChave chave;
}Item;

void Bubblesort (Item *v, int n);
void Selectionsort (Item *v, int n);
void Insertionsort (Item *v, int n);


#endif // OPERACAO_H_INCLUDED

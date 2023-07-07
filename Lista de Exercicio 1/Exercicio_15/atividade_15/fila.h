#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#define MAX 100

typedef struct {
    int id;
} TItem;

typedef struct {
    TItem queue[MAX];
} TFila;

void FFVazia(TFila* fila);
int Fvazia(TFila* fila);
int Enfileira (TFila* pFila, TItem* pItem);
int Desenfileira (TFila* pFila, TItem* pItem);
void imprime(TFila* fila);

#endif // FILA_H_INCLUDED

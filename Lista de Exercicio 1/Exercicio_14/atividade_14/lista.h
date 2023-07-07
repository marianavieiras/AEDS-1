#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

typedef struct TItemEst {
    int id;
    char nome[50];
} TItem;
typedef struct TCelulaEst {
    TItem item;
    struct TCelulaEst* pProx;
} Celula;

typedef struct TfilaEst {
    Celula* pFrente;
    Celula* pTras;
} TFila;

void FFVazia (TFila* pFila);
int Fvazia (TFila* pFila);
int Enfileira (TFila *pFila, TItem* pItem);
int Desenfileira (TFila* pFila, TItem* pItem);
void imprime(TFila* fila);
int comprimento(TFila* fila);

#endif // FILA_H_INCLUDED

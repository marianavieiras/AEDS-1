#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

typedef struct{
    int id;
    char nome[100];
    int telefone;
} TItem;
typedef struct TCelula_est {
    TItem item;
    struct TCelula_est* pProx;
} TCelula;

typedef struct {
    TCelula* primeiro;
    TCelula* ultimo;
} TFila;

void FVazia (TFila* pFila);
int vazia (TFila* pFila);
int Enfileira (TFila *pFila, TItem* pItem);
int Desenfileira (TFila* pFila, TItem* pItem);

#endif // FILA_H_INCLUDED

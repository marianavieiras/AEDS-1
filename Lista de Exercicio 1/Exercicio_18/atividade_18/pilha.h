#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#define MAX 1000

typedef char TChave;

typedef struct {
    TChave chave;
}TItem;

typedef struct {
TItem item[MAX];
int primeiro;
}TPilha;

void PVazia (TPilha* pPilha);
int vazia (TPilha* pPilha);
int PTamanho (TPilha* pPilha);
int Empilha (TPilha* pPilha, TItem* pItem);
char Desempilha (TPilha* pPilha, TItem* pItem);
int removeItem(TPilha* pPilha, TChave chave);
#endif // PILHA_H_INCLUDED

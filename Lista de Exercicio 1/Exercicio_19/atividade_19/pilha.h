#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#define MAX 1000

typedef int TChave;

typedef struct {
    TChave Chave;
}TItem;

typedef struct {
    TItem vItem[MAX];
    int iTopo;
}TPilha;

void FPVazia (TPilha* pPilha);
int PVazia (TPilha* pPilha);
int PTamanho (TPilha* pPilha);
int Empilha (TPilha* pPilha, TItem *pItem);
int Desempilha (TPilha* pPilha, TItem* pItem , TItem* pItem1, TItem* pItem2);
void trocaposicao (TPilha* pPilha, TItem pItem1, TItem pItem2);


#endif // PILHA_H_INCLUDED

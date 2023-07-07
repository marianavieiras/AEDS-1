#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef int TChave;

typedef struct {
TChave Chave;
}TItem;

typedef struct TCelulaEst {
TItem item;
struct TCelulaEst* pProx;
}TCelula;

typedef struct {
TCelula* pFundo;
TCelula* pTopo;
int tamanho;
}TPilha;

void FPVazia (TPilha* pPilha);
int PTamanho (TPilha* pPilha);
int Empilha (TPilha* pPilha, TItem* pItem);
int PVazia (TPilha* pPilha);
int Desempilha (TPilha* pPilha, TItem* pItem);
int removeItem(TPilha* pPilha, TChave chave);
#endif // PILHA_H_INCLUDED

#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef int TChave;

typedef struct {
TChave chave;
}TItem;

typedef struct TCelulaEst {
TItem item;
struct TCelulaEst* pProx;
}TCelula;

typedef struct {
TCelula* primeiro;
TCelula* ultimo;
int tamanho;
}TPilha;

void PVazia (TPilha* pPilha);
int vazia (TPilha* pPilha);
int PTamanho (TPilha* pPilha);
int Empilha (TPilha* pPilha, TItem* pItem);
int Desempilha (TPilha* pPilha, TItem* pItem, TChave c);

#endif // PILHA_H_INCLUDED

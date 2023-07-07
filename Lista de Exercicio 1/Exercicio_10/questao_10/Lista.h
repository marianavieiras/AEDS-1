#pragma once

#define INICIO 0
#define MAXTAM 1000 // tamanho maximo da lista

typedef int TChave;
typedef int TApontador;

typedef struct {
	TChave chave;
} TItem;

typedef struct {
	TItem item[MAXTAM];
	TApontador primeiro;
	TApontador ultimo;
} TLista;


void FLVazia(TLista* pLista);
int LVazia(TLista* pLista);
int LInsere(TLista* pLista, TItem x);
void LImprime(TLista* pLista);
void troca (TLista* pLista, TItem m, TItem n);
// LISTA_H_INCLUDED

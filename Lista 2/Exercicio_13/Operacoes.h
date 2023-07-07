#ifndef OPERACOES_H_INCLUDED
#define OPERACOES_H_INCLUDED

typedef int TChave;
typedef struct {
    int cod;
} TItem;

struct no{
    TItem item;
    struct no *pEsq, *pDir;
};

typedef struct no NO;
typedef NO* Arvore;

struct TipoCelula {
    NO* info;
    struct TipoCelula* prox;
};
typedef struct TipoCelula celula;

int insere(NO ** pRaiz, TItem x);
NO* criar(TItem x);
void maximo (NO *p);
void mininmo (NO *p);

#endif // OPERACOES_H_INCLUDED

#ifndef OPERACAO_H_INCLUDED
#define OPERACAO_H_INCLUDED

typedef int TChave;

typedef struct {
    int cod;
    float preco;
} TItem;

struct no {
    TItem item;
    struct no *pEsq, *pDir;
};
typedef struct no NO;
typedef NO* Arvore;

struct TipoCelula{
    NO* info;
    struct TipoCelula* prox;
};
typedef struct TipoCelula celula;

int insere (NO** ppRaiz, TItem x);
int pesquisa (Arvore pRaiz, int c, TItem *pX);
void adicionar(NO** raiz);
void sucessor(NO *q, NO **r);
int retirar (TItem x, NO** p);
NO* criar(TItem x);
void central(NO *p);



#endif // OPERACAO_H_INCLUDED

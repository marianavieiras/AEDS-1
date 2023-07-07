#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#define INICIO 0
#define MAX 1000

typedef int TChave;

typedef struct {
    TChave chave;
}TItem;
typedef struct TCelula{
    TItem item;
    struct TCelula *pProx;
};
typedef struct {
struct TCelula *primeiro;
struct TCelula *ultimo;
}TLista;

void FLvazia (TLista *pLista);
int LVazia(TLista* pLista);
void LInsere (TLista *pLista, TItem *item);
void LImprime (TLista *pLista);
int tam(TLista *pLista);
void troca (TLista *pLista, int i, int j);



#endif // LISTA_H_INCLUDED

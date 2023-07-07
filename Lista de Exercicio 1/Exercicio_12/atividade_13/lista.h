#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef int TChave;
typedef struct {
TChave chave;
}TItem;
 struct TCelula{
TItem item;
struct TCelula *pProx;
};
typedef struct {
struct TCelula *primeiro;
struct TCelula *ultimo;
}TLista;

void Troca (TLista *pLista, struct TCelula *p);
void LImprime (TLista *pLista);
int LRetira (TLista *pLista, TItem *item);
void LInsere (TLista *pLista, TItem *item);
void FLVazia (TLista *pLista);
int tam (TLista *pLista);



#endif // LISTA_H_INCLUDED

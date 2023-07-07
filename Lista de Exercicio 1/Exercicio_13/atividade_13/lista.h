#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef int TKey;

typedef struct {
    int key;
}TItem;

typedef struct TCelulaESt{
    TItem item;
    struct TCelulaESt *pProx;
}TCelula;

typedef struct
{
    struct TCelula *pFirst;
    struct TCelula *pLast;
} TLista;

void FLVazia(TLista *pLista);
void LImprime (TLista *pLista);
int Lretira(TLista *pLista, struct TItem *pItem);
void Linsere(TLista *pLista, struct TItem *pItem);
void Troca(TLista *lista, struct TCelula *p)
int tamanho(TLista *lista);



#endif // LISTA_H_INCLUDED

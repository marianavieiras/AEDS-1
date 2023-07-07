#ifndef OPERACOES_H_INCLUDED
#define OPERACOES_H_INCLUDED

struct TNode
{
    int info;
    struct TNode *esq, *dir;
};
typedef struct TNode Node;

typedef Node* Arvore;



#endif // OPERACOES_H_INCLUDED

#ifndef OPERACAO_H_INCLUDED
#define OPERACAO_H_INCLUDED
struct TNode
{
    int info;
    struct TNode *left, *right;
};
typedef struct TNode Node;

typedef Node* Tree;

#endif // OPERACAO_H_INCLUDED

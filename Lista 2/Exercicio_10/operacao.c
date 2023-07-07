#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "operacao.h"

Node* FNodeVazio(int numero) {
    Node *pAux = (Node*)malloc(sizeof(Node));
    pAux->info = numero;
    pAux->left = NULL;
    pAux->right = NULL;
    return pAux;
}

int insere(Node ** raiz, int numero){
    if (*raiz == NULL){
        *raiz = FNodeVazio(numero);
        return 1;
    }
    if (numero < (*raiz)->info){
        return insere(&((*raiz)->left), numero);
    }
    if (numero > (*raiz)->info){
        return insere(&((*raiz)->right), numero);
    }
    return 0;
}

int numNos(Tree raiz){
    if(raiz!=NULL)
    {
        return 1 + numNos(raiz->left) + numNos(raiz->right);
    }
    else{
        return 0;
    }
}

int Completa(Node* root, int filho, int num){
    if (root == NULL)
        return 1;

    if (filho >= num)
        return 0;

    return (Completa(root->left, 2*filho + 1, num) &&  Completa(root->right, 2*filho + 2, num));
}

int altura(Tree arvore){
    if( arvore == NULL)
        return 0 ;
    else
    {
        int alturaDir = altura(arvore->right);
        int alturaEsq = altura(arvore->left);
        if(alturaEsq < alturaDir )
            return alturaDir +1 ;
        else
            return alturaEsq + 1;
    }


}

int Balanceada(Tree root){
    int h1,h2;

    if(root != NULL){
        h1 = altura(root->left);
        h2 = altura(root->right);

        if (abs(h1 - h2) <= 1 && Balanceada(root->left) && Balanceada(root->right))
            return 1;

        return 0;

    }
    return 1;

}

int PerfeitamenteBalanceada(Tree root){
    int h1, h2;

    if (root == NULL)
        return 1;

    h1 = numNos(root->left);
    h2 = numNos(root->right);

    if (abs(h1 - h2) <= 1 && PerfeitamenteBalanceada(root->left) && PerfeitamenteBalanceada(root->right))
        return 1;

    return 0;
}

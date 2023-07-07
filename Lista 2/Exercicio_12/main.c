#include <stdio.h>
#include <stdlib.h>
#include "operacao.h"

int main(){
    Arvore* raiz = (Arvore*)malloc(sizeof(Arvore));

    *raiz= NULL;
    adicionar(raiz);
    adicionar(raiz);
    adicionar(raiz);
    central(*raiz);

    int codigo;
    printf("\nDigite o codigo do produto: ");
    scanf("%d",&codigo);

    TItem item;
    int pesquisar = pesquisa(*raiz,codigo,&item);
    if(pesquisar==0){
        printf("Nao encontrado");
    } else {
        printf("Produto: %d \n Valor: R$ %.2f\n",item.cod,item.preco);
    }

    printf("\nDigite o codigo do produto: ");
    scanf("%d",&item.cod);

    int removido = retirar(item, raiz);
    if(pesquisa==0){
        printf("Nao encontrado");
    }
    else{
        printf("Produto removido");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

void FLVazia(TLista* pLista) {
	pLista->primeiro = INICIO;
	pLista->ultimo = pLista->primeiro;
}

int LVazia(TLista* pLista) {
	return(pLista->ultimo == pLista->primeiro);
}

int LInsere(TLista* pLista, TItem x) {
	if (pLista->ultimo == MAXTAM) {
				return -1;
	}

	pLista->item[pLista->ultimo] = x;
	pLista->ultimo++;
	return pLista->ultimo;
}


void LImprime(TLista* pLista) {
	for (int i = pLista->primeiro; i < pLista->ultimo; i++)
	{
		printf("%d\n", pLista->item[i].chave);
	}
}
void troca (TLista* pLista, TItem m, TItem n){

   for (int i= pLista->primeiro; i<pLista->ultimo; i++){
    if (pLista->item[i].chave == m.chave){
        pLista->item[i] = n;
    } else if (pLista->item[i].chave == n.chave){
        pLista->item[i] = m;
    }

   }

}


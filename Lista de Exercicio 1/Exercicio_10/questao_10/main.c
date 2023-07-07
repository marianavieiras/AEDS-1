#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int main() {
	TLista lista;
	TItem item1;
	TItem item2;
	TItem item3;
	TItem item4;

	FLVazia(&lista);
	item1.chave = 1;
	item2.chave = 2;
	item3.chave = 3;
	item4.chave = 4;

	LInsere(&lista, item1);
	LInsere(&lista, item2);
	LInsere(&lista, item3);
	LInsere(&lista, item4);

	LImprime(&lista);

	printf("Troca de posicao:\n");
	TItem itemTroca;
	troca (&lista, item2, item3);
	LImprime(&lista);



	return 0;
}

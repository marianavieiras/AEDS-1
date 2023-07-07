#include <stdio.h>
#include <stdlib.h>
#include "livro.h"

int main()
{
    Livro* livro = malloc (5*sizeof(Livro));
    cria_livro (5, livro);


	for (int i = 0; i < 5; i++) {
		printf("Titulo: %s\n", livro[i].titulo);
		printf("Autor: %s\n", livro[i].autor);
	}

	printf("Preco medio: \n");
	media_livro(5, livro);
	printf("Preco maior: \n");
	maior(5, livro);
	printf("Preco menor: \n");
	menor(5, livro);

	return 0;
}

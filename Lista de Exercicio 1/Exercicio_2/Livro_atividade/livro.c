#include <stdio.h>
#include <stdlib.h>
#include "livro.h"

void cria_livro (int tam, Livro* livros){
    for (int i=0; i<tam; i++){
        printf ("Digite o titulo do livro: \n");
        fflush;
        fgets (livros[i].autor, 150, stdin);
        printf ("Digite o autor: \n");
        fflush;
        fgets (livros[i].titulo, 150, stdin);

        for (int j=0; j<6; j++){
         printf ("Digite o preco do livro no ultimo: \n");
         scanf ("%f", &livros[i].preco[j]);
        }

    }
}

void media_livro (int tam, Livro* livros){
    float preco_medio;
    int soma = 0;
	for (int i = 0; i < tam; i++) {
		for (int j = 0; j < 6; j++) {
			soma = soma + livros[i].preco[j];
		}
		preco_medio = soma / 6;
		printf("O preco medio do livro %d e: %.2f \n", i + 1, preco_medio);
		soma = 0;
	}

}

void maior (int tam, Livro* livros){
int maior = 0;
	int ultimo = 5;
	for (int i = 1; i < tam; i++) {
		if (livros[i].preco[ultimo] > livros[maior].preco[ultimo]) {
			maior = i;
		}
    printf("Titulo: %s\n", livros[maior].titulo);
	printf("Autor: %s\n", livros[maior].autor);
}
}

void menor (int tam, Livro* livros) {
	int menor = 0;
	int ultimo = 5;
	for (int i = 1; i < tam; i++) {
		if (livros[i].preco[ultimo] < livros[menor].preco[ultimo]) {
			menor = i;
		}
	}

	printf("Titulo: %s\n", livros[menor].titulo);
	printf("Autor: %s\n", livros[menor].autor);

}


#ifndef LIVRO_H_INCLUDED
#define LIVRO_H_INCLUDED
typedef struct construtor{
char autor [150];
char titulo [150];
float preco [6]
}Livro;

void cria_livro (int tam, Livro* livros);
void media_livro (int tam, Livro* livros);
void imprime_maior (int tam, Livro* livros);
void menor (int tam, Livro* livros);

#endif // LIVRO_H_INCLUDED

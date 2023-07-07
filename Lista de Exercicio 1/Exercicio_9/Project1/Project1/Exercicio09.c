#include <stdio.h>
#include <stdlib.h>

int procedimento(int i, int vetor[], int soma ) {
      if (i < 5 ) {
        soma = soma + vetor[i];
       procedimento (i+1, vetor, soma);
    }    else  {
          return soma;
    }



}
int main() {
        int vet[5] = { 2, 4, 5, 6, 7 };
        printf("%d", procedimento(0, vet, 0));

}
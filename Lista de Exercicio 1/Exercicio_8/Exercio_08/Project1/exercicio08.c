#include <stdio.h>
#include <stdlib.h>

int procedimento(int n, int i, int vetor []) {
           if (n == vetor[i]) {
             return i;
         }
        if (i > 4) {
             return -1;
         } else {
            procedimento(n, i + 1, vetor);
     }
 
        
    
}
int main() {
    int num;
    printf("Adicione um numero inteiro: ");
    scanf_s("%d", &num);
    int vet[5] = { 2, 4, 5, 6, 7 };
        printf("%d", procedimento(num, 0, vet));
 
}

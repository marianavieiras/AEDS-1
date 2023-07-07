#include <stdio.h>
#include <stdlib.h>
void procedimennto (int n, int soma){
if (n == 1){
    printf ("Soma do numero de 1 a N: %d \n", n+soma);
} else {
soma = n + soma;
procedimennto (n-1, soma);
}
}

int main()
{
    int num;
    printf("Adicione um numero:\n");
    scanf ("%d", &num);
    procedimennto (num, 0);
    return 0;
}

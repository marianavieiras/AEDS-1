#include <stdio.h>
#include <stdlib.h>

void procedimento (int n, int div){
     div = n%10;
    n = n/10;
       if (n == 0){
        printf ("%d", div);
       } else {
        printf ("%d", div);
  procedimento (n, div);
      }
}
int main (){
    int num;
printf ("Adicione um numero inteiro: ");
scanf ("%d", &num);
  procedimento(num, 0);
}

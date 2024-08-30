#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Escreva um algoritmo que recebe dois numeros inteiros informados pelo usuario, calula e imprime a soma deles
  int num1, num2, soma;

  printf("Informe o primeiro numero:");
  scanf("%d", &num1);

  printf("Informe o segundo numero:");
  scanf("%d", &num2);

  soma=  num1 + num2;
  printf("soma dos numeros: %d\n", soma);

  return 0;

}

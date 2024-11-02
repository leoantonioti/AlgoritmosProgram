#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Escrever um algoritmo que recebe um número inteiro
positivo do usuário e escreve todos os valores da série de
Fibonacci, desde 1 até o valor lido
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 */

int main()
{
    int num, n1 = 1, n2 = 1, soma;


    printf("Digite um numero:\n");
    scanf("%d", &num);

    if(num < 1){
        printf("Digite outro numero positivo");
        return 1;
    }

    printf("Serie de %d:\t", num);

    while (n1 <= num){
        printf("%d ", n1);
        soma = n1 + n2;
        n1 = n2;
        n2 = soma;
    }

    return 0;
}

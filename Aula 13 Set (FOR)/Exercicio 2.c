#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/*Escrever um algoritmo que recebe do usuário um número
inteiro positivo e que escreve todos os números múltiplos
de 3, desde 0 até o valor lido.*/

int main()
{

    int num;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    for(int i = 0; i<=num; i+=3){
        printf("%d\n", i);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/* Escreva um algoritmo que escreve o quadrado de todos os
inteiros, desde 1 até 20 */

int main()
{
    int quadrado;
    for(int num = 1; num <= 20; num++){
            quadrado = num*num;
            printf("%d e seu quadrado eh %d\n", num, quadrado);

    }
    return 0;
}

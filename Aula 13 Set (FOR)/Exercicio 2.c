#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/*Escrever um algoritmo que recebe do usu�rio um n�mero
inteiro positivo e que escreve todos os n�meros m�ltiplos
de 3, desde 0 at� o valor lido.*/

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

#include <stdio.h>
#include <stdlib.h>

/*• Escrever um algoritmo que lê um número inteiro positivo e
que escreve todos os números a partir do número lido até
o zero (ou seja, escreva os números de trás para a frente,
um a um).*/

int main()
{
    int num;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    for(int i = num; i >= 0; i--){
        printf("%d\t", i);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*� Escrever um algoritmo que l� um n�mero inteiro positivo e
que escreve todos os n�meros a partir do n�mero lido at�
o zero (ou seja, escreva os n�meros de tr�s para a frente,
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

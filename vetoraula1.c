#include <stdio.h>
#include <stdlib.h>

1. Vamos escrever um algoritmo em C que cria um vetor de
10 posições, preenche todas as posições com zero e depois
imprime o conteúdo do vetor.

/* Vetor == Array */

int main()
{
    int vetor[10]; /* Declara vetor */
    for (int i=0; i < 10; i++){
       printf("Digite um valor para a posicao %d do vetor \n", i);
       scanf("%d", &vetor[i]);
    }

    for(int j=0; j<10; j++){ /* Imprime o Vetor */ 
        printf("[%d] ", vetor[j]);
    }


    return 0;
}

===============================================================================================================================================================================

/* Escreva um algoritmo em C que cria um vetor de 10 posições,
preenche o mesmo com os números pares a partir do 2 e depois
imprime o conteúdo do vetor */ 

/* Vetor == Array */


int main()
{
    int vetor[10];
    int var = 2;
    for (int i = 0; i < 10; i++){
        vetor[i] = var;
        var+=2;

        printf("[%d] ", var);
    }
    return 0;
}

===============================================================================================================================================================================

#include <stdio.h>
#include <stdlib.h>

/* Escrever um algoritmo que recebe como entrada 10 números
inteiros informados pelo usuá rios e os armazena em um vetor. Logo
após o seu algoritmo deverá imprimir os valores armazenados. */ 

int main()
{
    int vetor[10];

    for(int i = 0; i < 10; i++){
        printf("Digite um numero inteiro para a posicao %d do vetor: \n", i);
        scanf("%d", &vetor[i]);
    }

    for(int j = 0; j < 10; j++){
        printf("[%d] ", vetor[j]);
    }
    return 0;
}

===============================================================================================================================================================================


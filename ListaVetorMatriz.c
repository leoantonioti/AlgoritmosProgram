#include <stdio.h>
#include <stdlib.h>

/*
    1. Faça um programa que receba como entrada 10 valores reais, coloque-os em um
    vetor e depois e apresente os números na ordem inversa da entrada.
*/

int main()

{
    int vetor[10];
    for(int i = 0; i < 10; i++){
        printf("Digite um numero inteiro: \n");
        scanf("%d", &vetor[i]);
    }

    for(int i = 9; i >= 0; i--){
        printf("[%d]\t", vetor[i]);
    }

    return 0;
}

=============================================================================================================

#include <stdio.h>
#include <stdlib.h>

/*

    2. Faça um programa que receba 10 números inteiros do usuário e os armazene em
    um vetor. Após isso, o seu programa deve solicitar ao usuário um número inteiro.
    Com esse número inteiro, o seu programa deve:
    a. Imprimir os números do vetor que são maiores que o valor informado.
    b. Imprimir quantos números armazenados no vetor são menores que o valor
    informado.
    c. Imprimir quantas vezes o valor informado aparece no vetor

*/

int main()

{

    int vetor[10];
    int num;
    int contador1 = 0, contador2 = 0;


    for(int i = 0; i < 10; i++){
        printf("Digite um numero inteiro: \n");
        scanf("%d", &vetor[i]);
    }

        printf("Digite outro numero inteiro: \n");
        scanf("%d", &num);

    for(int i = 0; i < 10; i++){
        if(vetor[i] > num){
        printf("os numeros maiores que %d sao [%d]\t \n", num, vetor[i]);
        }
    }
        printf("\n");

    for(int i = 0; i < 10; i++){
        if(vetor[i] < num){
            contador1++;
            printf("os numeros menores que [%d] sao [%d]\t \n", num, vetor[i]);
        }
    }

    printf("a quantidade de numeros menores que [%d] sao [%d]\n", num, contador1);
    printf("\n");

    for(int i = 0; i < 10; i++){
        if(vetor[i] == num){
            contador2++;
        }
    }

    printf("o numero [%d] aparece [%d] vezes no vetor\n", num, contador2);






  return 0; 

}

===============================================================================================================================

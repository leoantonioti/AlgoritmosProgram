#include <stdio.h>
#include <stdlib.h>

//Exercicio laços de repetição aula 11-09 (aula11.pdf) Escreva um alg que recebe varios numeros e calcula a soma, finaliza quando digitado 0

int main()
{
    int i, num_digitado, soma = 0;
    float media;
    num_digitado = 0;
    i = 0;

    do{
        printf("Digite um numero, ou digite 0 para encerrar a \n");
        scanf("%d", &num_digitado);
        soma += num_digitado;
        if(num_digitado !=0){
            i++;
        }


    }while(num_digitado !=0);
    media = soma / i;
    printf("Voce digitou %d numeros, a media eh %.2f", i, media);


    return 0;
}

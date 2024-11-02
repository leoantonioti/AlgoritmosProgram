#include <stdio.h>
#include <stdlib.h>

//Exercicio laços de repetição aula 11-09 (aula11.pdf) Escreva um alg que recebe varios numeros e calcula a soma, finaliza quando digitado 0

int main()
{
    int i, num_digitado, soma =0;
    float media;

    num_digitado = 1;
    i = 0;
    while(num_digitado!=0){
        printf("Digite um numero, ou digite 0 para sair! \n");
        scanf("%d", &num_digitado);
        soma = soma + num_digitado;
        // soma += num_digitado; TAMBÉM FUNCIONA!!!!
        
    if(num_digitado != 0){
            i++;
        }
    }

    //media somente quando o laço termina

    media = soma / i;

    printf("voce digitou %d numeros \n a media eh %.2f", i,media);



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Escreva um algoritmo que recebe a senha (número inteiro) do usuário. Se a
senha for igual a 1786, o algoritmo deve escrever “Bom dia! Seja bem-
vindo!”. Caso contrário, o algoritmo deve imprimir a mensagem “Acesso
negado! Senha inválida”. Além disso, o algoritmo deve ser desenvolvido de
modo a permitir ao usuário apenas 3 tentativas.*/

int main()
{


    int cont = 1, erros=3, digitado = 0;

    do{
        printf("Digite a Senha: \n");
        scanf("%d", &digitado);

        if(digitado == 1786){
            printf("Bom dia!\n");
            //cont = 3;
            break;
        }else{
            erros--;
            printf("Acesso Negado! Senha invalida.\n");
            printf("Voce tem %d tentativas\n", erros);

        }
        cont++;
    }while(cont <= 3);

    return 0;
}

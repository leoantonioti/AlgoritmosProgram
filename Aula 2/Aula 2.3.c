#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Escreva um algoritmo que recebe dois caracteres do usuario e que imprime esses dois caracteres

    char c1;
    char c2;
    printf("Informe um caractere:\n");
    scanf("%c", &c1);
    printf("informe outro caractere:\n");
    fflush(stdin); // stdin = Entrada padrão do sistema
    __fpurge(stdin); // 
    scanf("%c", &c2);
    printf("os valores digitados sao %c - %c", c1, c2);


return 0;

}

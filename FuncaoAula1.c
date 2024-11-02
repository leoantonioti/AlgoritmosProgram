#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Exemplo de função sem retorno e sem parametros.
*/

// Declaracao da Funcao \/

void minhaFuncao(){
    printf("Executou a funcao minhaFuncao \n");
}

void minhaFuncao(); // Prototipo da Funcao

int main()
{
  printf("Ola! Executando a main \n");
  minhaFuncao(); 
  return 0;
}

========================================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Exemplo de funcao sem retorno e com 2 parametros
   Esta funcao, recebe 2 numeros, faz a soma e imprime */

 void soma(int n1, int n2); // Prototipo da funcao

 int main(){

    int num1 = 0, num2 = 0;
    printf("Digite um numero inteiro [N1]:\t");
    scanf("%d", &num1);
    printf("Digite um numero inteiro [N2]:\t");
    scanf("%d", &num2);
    soma(num1,num2); // chamada da funcao com passagem de parametro

    printf("Encerrando o programa!");
    return 0;
}



 // Declaracao da funcao
 void soma(int n1, int n2){
   // printf("A Soma eh: %d", (n1+n2)); Versao resumida
   int s = n1+n2;
   printf("A soma eh [%d]\n", s);
 }


==========================================================================

#include <stdio.h>
#include <stdlib.h>

/* Escreva um procedimento que recebe um número como parâmetro e diz se
esse número é par ou ímpar. */

    void parimpar(int num1);

int main()
{
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    parimpar(numero);

    return 0;
}
    void parimpar(num1){

    if(num1%2 == 0){
        printf("[%d] eh PAR!!!\n", num1);
    }else{
        printf("[%d] eh IMPAR!!!\n", num1);
    }

    }

====================================================================

#include <stdio.h>
#include <stdlib.h>

/* Escreva um procedimento que recebe um número como parâmetro e diz se
esse número é primo. */

    void primo(int num);

int main()
{
    int valor = 0;
    do{
    printf("Digite um numero inteiro ou [0] para sair: \n");
    scanf("%d", &valor);
    primo(valor); // chamada de funcao
    }while(valor !=0);
    return 0;



}
    void primo(int num){
     int divisivel = 0;
     for(int i=2; i < num; i++){ // percorre todos os numeros ate < num
        if(num%i == 0){ // testa divisao
            divisivel++; // Se for divisivel aumenta 1
        }
     }
     if(divisivel == 0 && num > 0){
        printf("[%d] eh primo! \n", num);
     }else if(num == 0){
        printf("Saindo!");
     }else{
        printf("[%d] nao eh primo! \n", num);
        }
    }

=======================================================================


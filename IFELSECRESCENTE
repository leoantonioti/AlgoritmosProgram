#include <stdio.h>
#include <stdlib.h>
#include <math.h>

DIGITE 3 NUMEROS E IMPRIMA DE UMA FORMA QUE SAIAM EM CRESCENTE

int main()
{
    int digitado, n1, n2, n3;
    printf("Digite um numero \n");
    scanf("%d", &n1);
    printf("Digite um numero \n");
    scanf("%d", &n2);
    printf("Digite um numero \n");
    scanf("%d", &n3);


    if(n1 > n2 && n1 > n3){
        if(n2 > n3){
            printf("%d - %d - ", n3, n2);
        }else{
            printf("%d - %d - ", n2, n3);
        }
        printf("%d - ", n1);
    }
    if(n2 > n1 && n2 > n3){
        if(n1 > n3){
            printf("%d - %d - ", n3, n1);
        }else{
            printf("%d - %d - ", n1, n3);
        }
        printf("%d - ", n2);
    }
    if(n3 > n1 && n3 > n2){
        if(n2 > n1){
            printf("%d - %d - ", n1, n2);
        }else{
            printf("%d - %d - ", n2, n1);
        }
        printf("%d - ", n3);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char conceito;

    printf("Digite uma nota de avaliacao \n");
    scanf("%c", &conceito);

    switch (conceito){
    case 'A':
    case 'a':
        printf("EXCELENTE! \n");
        break;
    case 'B':
    case 'b':
        printf("BOM! \n");
        break;
    case 'C':
    case 'c':
        printf("REGULAR! \n");
        break;
    case 'D':
    case 'd':
        printf("REPROVADO! \n");
        break;
    default:
        printf("Conceito invalido, digite uma avaliacao entre A,B,C ou D");
    }

    return 0;
}

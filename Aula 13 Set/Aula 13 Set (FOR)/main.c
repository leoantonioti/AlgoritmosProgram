#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int quadrado;
    for(int num = 1; num <= 20; num++){
            quadrado = num*num;
            printf("%d e seu quadrado eh %d", num, quadrado);

    }
    return 0;
}

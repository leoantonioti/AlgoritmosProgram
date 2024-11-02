• Vamos criar uma matriz com duas linhas e duas colunas para
armazenar valores inteiros. Cada posição da matriz irá receber o
seguinte valor: número linha * número coluna. 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[2][2]; // declara matriz

    /*
    mat[0][0] = 0*0;
    mat[0][1] = 0*1;
    mat[1][0] = 1*0;
    mat[1][1] = 1*1;
    */
    printf("O ultimo valor da matriz eh %d\n", mat[1][1]);

    // inserir valores

    for(int linha=0; linha < 2; linha++){
        for(int col=0; col < 2; col++){
            mat[linha][col] = linha*col;

        }
    }

    // imprimir matriz

    for(int l=0; l < 2; l++){
        for(int c=0; c<2; c++){
            printf("[ %d ] ", mat[1][c]);
        }
        printf("\n");
    }
    return 0;
}

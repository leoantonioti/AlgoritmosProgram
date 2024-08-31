#include <stdio.h>
#include <stdlib.h>
#include <math.h>

Implemente um algoritmo em C que recebe do usuário o peso e
altura de uma pessoa e calcule o seu IMC (IMC = peso/altura²). O
seu algoritmo deve mostrar em tela o valor do IMC calculado e deve
informar a classificação da pessoa, de acordo com a seguinte tabela:
IMC = MENOR QUE 18,5 = MAGREZA
IMC = ENTRE 18,5 E 24,9 = PESO NORMAL
IMC = IGUAL 25 E 29,9 = SOBREPESO
IMC = MAIOR QUE 30 = OBESO

int main()
{
    double peso, altura, imc;
    printf("Digite o peso: \n");
    scanf("%lf", &peso);
    printf("Digite a altura: \n");
    scanf("%lf", &altura);

    imc = peso / pow(altura,2);
    printf("Seu imc eh: %.2lf \n", imc);

    if (imc < 18.5){
        printf("Magreza");
    }else if (imc > 18.5 && imc < 24.9){
        printf("Peso Normal");
    }else if (imc >= 25 && imc <= 29.9){
        printf("Sobrepeso");
    }else{
        printf("Obesidade");
    }

    return 0;
}

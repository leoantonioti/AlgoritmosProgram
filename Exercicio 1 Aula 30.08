#include <stdio.h>
#include <stdlib.h>
#include <math.h>

Escreva um algoritmo que calcule o peso ideal de uma pessoa
baseada na sua altura e sexo. Assim, o algoritmo deve receber
como entrada o sexo da pessoa (‘m’ ou ‘M’ para masculino e ‘f’ ou
‘F’ para feminino) e a altura em metros. Para cálculo do peso ideal,
você deve se basear na regra abaixo:
• para homens: (72.7 * h) – 58;
• para mulheres: (62.1 * h) – 44.7.

{
    double h, pesoideal;
    char genero;
    printf("Digite sua altura \n");
    scanf("%lf", &h);
    printf("Digeite seu genero: \nF para feminino \nM para Masculino: ");
    scanf(" %c", &genero);

    if (genero == 'f' || genero == 'F'){
        pesoideal = (62.1 * h) - 44.7;
    }else if(genero == 'm' || genero == 'M'){
        pesoideal = (72.7 * h) - 58;
    }else{
        printf("Genero %c nao encontrado", genero);
    }
    printf("O seu peso ideal eh %.2lfKg", pesoideal);

    return 0;
}



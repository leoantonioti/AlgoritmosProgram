#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[50];
    int RA;
    int numCurso;
};

int main()
{
    struct aluno a1;
    printf("Digite o nome do aluno \n");
    scanf("%[^\ns]", a1.nome);
    printf("Digite o RA do aluno \n");
    scanf("%d", &a1.RA);
    printf("Digite o numero do curso \n");
    scanf("%d", &a1.numCurso);

    printf("Aluno: %s\nRA: %d\nCurso: %d", a1.nome,a1.RA, a1.numCurso);

    return 0;
}

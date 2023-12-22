#include <stdio.h>

int main()
{
    char q = 'w';
    float nota;
    float alunos = 0;
    float soma_das_notas = 0;
    float media = 0;

    while(q != 'q')
    {
        printf("Digite a proxima Nota\n");
        scanf("%f", &nota);

        printf("Digite 'q' se tiver acabado, caso contrario, digite outra letra\n");
        scanf("%c", &q);

        soma_das_notas += nota;
        alunos++;
        printf("\nO numero de alunos eh: %.2f\n", alunos);
    }

    media = soma_das_notas/alunos;

    printf("\nA media da turma e igual a %.2f\n", media);

    return 0;
}
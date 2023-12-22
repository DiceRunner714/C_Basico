#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char q = 'w';
    float nota;
    float nprovas = 0;
    float soma_das_notas = 0;
    float media = 0;

    printf("Digite a primeira Nota:\n");

    while(q != 'q')
    {

        scanf("%f", &nota);

        printf("Digite 'q' se tiver acabado, caso contrario, digite outra letra\n");
        scanf(" %c", &q);

        soma_das_notas += nota;
        nprovas++;

        if(q != 'q'){
            printf("Digite a próxima Nota:\n");
        }
    }

    media = soma_das_notas/nprovas;

    printf("\nA media do aluno é igual a: %.2f\n", media);

    return 0;
}
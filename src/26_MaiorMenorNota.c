#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char q = 'c';
    float alunos = 0;
    float notaf;
    float menornota = 10;
    float maiornota = 0;


    printf("Digite a primeira Nota:\n");

    do
    {

        scanf("%f", &notaf);
        alunos++;

        if(notaf < menornota)
        {
            menornota = notaf;
        }
        if(notaf > maiornota)
        {
            maiornota = notaf;
        }

        printf("Digite 'c' se tiver acabado, caso contrario, digite outra letra\n");
        scanf(" %c", &q);

        if(q != 'c')
        {
            printf("Digite a próxima Nota:\n");
        }
    }
    while(q != 'c');

    printf("\nA quantidade de alunos é igual a: %.0f\nA Menor Nota foi: %.2f\nA Maior Nota foi: %.2f\n", alunos, menornota, maiornota);

    return 0;
}
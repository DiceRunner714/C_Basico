#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, b, x;
    char chave1 = 'f';

    do
    {
        printf("\nInforme o 'a' da equação:\n");
        scanf("%f", &a);
        printf("Informe o 'b' da equação:\n");
        scanf("%f", &b);
        printf("\nEquação: (%.2f)x + (%.2f) = 0\n", a, b);

        x = (-b)/a;
        printf("\nx = %.2f\n", x);

        fflush(stdin);
        printf("\nDigite:\ne. Para inserir outra equação\nf. Para finalizar o programa\n");
        scanf(" %c", &chave1);
    }while(chave1 != 'f');

    return 0;
}
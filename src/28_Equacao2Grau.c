#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, b, c, x1, x2, D;
    char chave1 = 'f';

    do
    {
        printf("\nInforme o 'a' da equação:\na = ");
        scanf("%f", &a);
        printf("Informe o 'b' da equação:\nb = ");
        scanf("%f", &b);
        printf("Informe o 'c' da equação:\nc = ");
        scanf("%f", &c);
        printf("\nEquação: (%.2f)x² + (%.2f)x + (%.2f) = 0\n", a, b, c);

        D = (b*b) -4*(a*c);
        printf("\nPrimeiro, Calcula-se o Delta:\n       Delta = b² - 4*(a)*(c)");
        printf("\n       Delta = (%.2f)² - 4*(%.2f)*(%.2f)\n       Delta = %.2f\n", b, a, c, D);
        if(D < 0)
        {
            printf("\nEssa equação não possui solução real pois o Delta é menor do que 0\n");
        }
        else
        {

            x1 = (-b + sqrt(D))/(2*a);
            x2 = (-b - sqrt(D))/(2*a);
            printf("\nPor fim, usa-se a fórmula de Bhaskara para descobrir as raízes da equação:");
            printf("\n       x = (-b ±sqrt(Delta))/2*a");
            printf("\n       x = (-(%.2f) ±sqrt(%.2f))/2*(%.2f)", b, D, a);

            if(x1 == x2)
            {
                printf("\n       x = %.2f\n", x1);
            }
            else
            {
                printf("\n       x = %.2f ou %.2f\n", x1, x2);
            }
        }

        printf("\nDigite:\ne. Para inserir outra equação\nf. Para finalizar o programa\n");
        scanf(" %c", &chave1);

    }
    while(chave1 != 'f');

    return 0;
}
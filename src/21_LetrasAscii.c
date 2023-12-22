#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char caractere;

    for(caractere = 65; caractere <= 90; caractere ++)
    {
        printf("\nNúmero: %d\nCaractere correspondente: %c\n", caractere, caractere);
    }
    return 0;
}

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float NUMERO;

    printf("Digite um número abaixo:\n");
    scanf("%f", &NUMERO);

    const float Dobro = NUMERO * 2;
    const float Metade = NUMERO/2;

    printf("\nO dobro é: %.2f\n", Dobro);
    printf("A metade é: %.2f\n", Metade);

    return 0;
}
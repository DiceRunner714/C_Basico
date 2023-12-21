#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float NUMERO;
    float NUMERO2;

    printf("Digite dois números abaixo:\n");
    scanf("%f", &NUMERO);
    scanf("%f", &NUMERO2);

    const float SOMA = NUMERO + NUMERO2;
    const float DIFERENCA = NUMERO - NUMERO2;
    const float PRODUTO = NUMERO * NUMERO2;
    const float RAZAO = NUMERO/NUMERO2;

    printf("A soma é: %.2f\n\n", SOMA);
    printf("A diferença é: %.2f\n\n", DIFERENCA);
    printf("O produto é: %.2f\n\n", PRODUTO);
    printf("A razao é: %.2f\n\n", RAZAO);

    return 0;
}
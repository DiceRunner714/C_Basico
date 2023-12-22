#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float numero;
    float multiplicador = 1;
    float produto;

    printf("Digite um Número abaixo:\n");
    scanf("%f", &numero);
    printf("A tabuada do número %f é:\n", numero);


    while(multiplicador <= 10){
        produto= numero * multiplicador;
        printf("%.4f x %.0f = %.4f\n", numero, multiplicador, produto);
        multiplicador++;
    }

    return 0;
}
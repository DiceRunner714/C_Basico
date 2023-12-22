#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;
    int multiplicador = 1;
    int produto;

    printf("Digite um Número abaixo:\n");
    scanf("%d", &numero);
    printf("A tabuada do número %d é:\n", numero);

    while(multiplicador <= 10){
        produto= numero * multiplicador;
        printf("%d x %d = %d\n", numero, multiplicador, produto);
        multiplicador++;
    }

    return 0;
}
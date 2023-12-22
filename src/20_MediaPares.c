#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    float soma = 0;
    float pares = 0;
    float media = 0;
    int contador;

    for(contador = 0; contador < 5; contador++)
    {
        printf("Digite um número abaixo:\n");
        scanf("%d", &num);

        if(num % 2 == 0)
        {
            soma += num;
            pares ++;
        }

    }

    if (pares != 0) media = soma/pares;

    printf("A média dos números pares digitados é igual a: %f", media);
    return 0;
}
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario;

    printf("Informe seu salário atual abaixo:\n");
    scanf("%f", &salario);

    float reajuste1 = salario * 1.25;
    float reajuste2 = salario * 1.20;

    if (salario<=900){
        printf("Seu salário rejustado é: R$%.2f", reajuste1);
    }else{
        printf("Seu salário rejustado é: R$%.2f", reajuste2);
    }

    return 0;
}
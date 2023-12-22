#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char generoMsalario = 'z';
    char genero = 'w';
    int contador;
    float homens = 0;
    float idade;
    float idadeMsalario = 0;
    float somaidades = 0;
    float salario = 0;
    float Msalario = 0;
    float msalario = 100000000000;
    float media = 0;

    for(contador = 0; contador < 5; contador++)
    {
        //referente a idade
        printf("\nInforme sua idade abaixo:\n");
        scanf("%f", &idade);
        somaidades += idade;

        //referente ao genero
        printf("Informe seu genero abaixo digitando 'f' para feminino ou 'm' para masculino.\n");
        scanf(" %c", &genero);
        if (genero == 'm')
        {
            homens ++;
        }

        //referente ao salario
        printf("Informe seu salário abaixo:\nR$");
        scanf("%f", &salario);

        if(salario < msalario)
        {
            msalario = salario;
        }

        if(salario > Msalario)
        {
            Msalario = salario;
            idadeMsalario = idade;
            generoMsalario = genero;
        }

    }

    media = somaidades/5;

    printf("\nFeita a Pesquisa, constatou-se que:\nA. A média de idade dos entrevistados é: %.2f anos\n", media);
    printf("B. O maior salário do grupo é: R$%.2f\n   O menor salário do grupo é: R$%.2f\n", Msalario, msalario);
    printf("C. %.0f dos entrevistados são homens.\n", homens);

    if(generoMsalario == 'm')
    {
        printf("D. O habitante que possui o maior salário é um Homem de %.0f anos", idadeMsalario);
    }
    else
    {
        printf("D. O habitante que possui o maior salário é uma Mulher de %.0f anos", idadeMsalario);
    }

    return 0;
}
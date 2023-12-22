#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, num2;
    int senha, senhacorreta = 123;
    int cont;
    int Clancy = 0, Eddie = 0, Lou = 0;
    int ocorrencias = 0;
    int DP = 0, Bar = 0, Beb = 0, Homer = 0;
    int porcentagem;


    while(num != 3)
    {
        printf("Bem vindo ao Sistema de Ocorrências de Springfield! O que deseja fazer?\nDigite:\n'1' para Adicionar uma Nova Ocorrência\n'2' para ver o Resumo de Ocorrências\n'3' para Sair\n");
        scanf("%d", &num);

        switch(num)
        {
        case 1:
            printf("Digite a senha abaixo:\n");
            for(cont = 2; cont < 0; cont--)
            {
                scanf("%d", &senha);
                if(senha == senhacorreta)
                {
                    printf("\nInforme o tipo da Ocorrência.\nDigite:\n'1' para Direção Perigosa\n'2' para Barulho\n'3' para Bebedeira\n'4' para Homer\n");

                }
                else
                {
                    printf("Senha Incorreta, tente novamente:\nTentativas restantes: %d\nDigite a senha correta abaixo:\n", cont);
                }


            } break;

        case 2:
            porcentagem == DP/ocorrencias;
            printf("\n%d Ocorrências foram registradas\nClancy: %d ocorrências\nEddie: %d ocorrências\nLou: %d ocorrências\n", ocorrencias, Clancy, Eddie, Lou);
            printf("O número de Ocorrências do tipo Homer foi: %d\nO percentual de ocorrências do tipo Direção Perigosa em relação do total de ocorrências foi de %d%%\n\n", Homer, porcentagem);
            break;

        }
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int senha;
    int contador = 3;

    do{
        printf("Digite a Senha:\n");
        scanf("%d", &senha);

        if(senha != 15092003){
            printf("Senha Incorreta, tente novamente\n");
            contador --;
        }else{
            printf("Senha correta! Bem vindo\n");
            exit(0);
        }
        printf("Tentativas restantes:%d\n\n", contador);

    }
    while(contador != 0);

    printf("Procure a Agência do Banco.");

    return 0;
}
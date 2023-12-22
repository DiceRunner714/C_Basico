#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char senha[30];
    int contador = 3;

    do{
        printf("Digite a Senha:\n");
        scanf("%s", senha);

        if(strcmp(senha, "senhaSuperSecreta") != 0){
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
#include <stdio.h>

int main()
{
    float Numero;
    printf("Digite um numero abaixo:\n");
    scanf("%f", &Numero);

    if (Numero>=1){
        printf("O numero digitado e positivo\n");
    }
    else if (Numero<=-1){
        printf("O numero digitado e negativo\n");
    }else{
        printf("O numero digitado e nulo\n");
    }

    return 0;
}
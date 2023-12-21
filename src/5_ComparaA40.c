#include <stdio.h>

int main()
{
    float Numero;
    printf("Digite um numero abaixo:\n");
    scanf("%f", &Numero);

    if (Numero<=39){
            printf("O numero digitado e menor do que 40");
    }
    if (Numero>=41){
        printf("O numero e maior do que 40");
    }else{
        printf("O numero digitado e igual a 40");
    }

    return 0;
}

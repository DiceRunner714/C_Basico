#include <stdio.h>

int main()
{
    int idade = 0;
    int mulheres = 0;
    char genero = 'w';
    int maiores = 0;

    do{
        printf("\nInforme seu genero abaixo digitando 'f' para feminino ou 'm' para masculinno 'q' para encerrar:\n");
        scanf(" %c", &genero);

        if (genero == 'f') mulheres ++;
        if (genero == 'q') break;
        
        printf("\nInforme sua idade abaixo:\n");
        scanf("%d", &idade);
        
        if (idade >= 18) maiores ++;
    }while(genero != 'q');

    printf("\nQuantidade de Mulheres: %d\n", mulheres);
    printf("\nQuantidade de Maiores de Idade: %d\n", maiores);

    return 0;
}
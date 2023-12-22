#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char q = 'w';
    float num = 0, soma = 0;

    printf("Digite um Número:\n");

    do{
        scanf("%f", &num);

        soma += num;

        printf("Digite 'q' se tiver acabado, caso contrario, digite outra letra\n");
        scanf(" %c", &q);
        if(q != 'q'){
            printf("Digite o próximo Número:\n");
        }

    }while(q != 'q');

    printf("\nO Número Acumulado é: %.2f\n", soma);

    return 0;
}
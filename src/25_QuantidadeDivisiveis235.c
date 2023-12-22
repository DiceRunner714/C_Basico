#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char saida = 'w';
    int num;
    int divisiveis2 = 0;
    int divisiveis3 = 0;
    int divisiveis5 = 0;

    printf("\nDigite um número abaixo:\n");

    do
    {
        scanf("%d", &num);

        if(num % 2 == 0)
        {
            divisiveis2++;
        }
        if(num % 3 == 0)
        {
            divisiveis3++;
        }
        if(num % 5 == 0)
        {
            divisiveis5++;
        }


        printf("Digite 'q' se quiser encerrar, caso contrário, digite outra letra.\n");
        scanf(" %c", &saida);
        printf("Digite o próximo número:\n");
    }
    while(saida != 'q');

    printf("A quantidedade de algarismos divisíveis por 2 é: %d\nA quantidedade de algarismos divisíveis por 3 é: %d\nA quantidedade de algarismos divisíveis por 5 é: %d\n", divisiveis2, divisiveis3, divisiveis5);

    return 0;
}
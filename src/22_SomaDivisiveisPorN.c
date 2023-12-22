#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    int numa, numb, numc;
    int soma = 0;

    printf("Digite um valor 'a':\n");
    scanf("%d", &numa);
    printf("Digite um valor 'b':\n");
    scanf("%d", &numb);
    printf("Digite um valor 'c':\n");
    scanf("%d", &numc);

    for(num = numb; num >= numb && num <= numc; num ++)
    {
        if(num % numa == 0)
        {
            soma += num;
        }
    }
    printf("A soma dos números divisíveis por %d, no intervalo entre %d e %d é: %d", numa, numb, numc, soma);
    return 0;
}
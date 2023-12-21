#include <stdio.h>

int main()
{
    int num = 1;
    int impares = 0;
    int pares = 0;

    while(num != 0)
    {
        printf("Digite '0' se tiver acabado, caso contrario, digite outro numero\n");
        scanf("%d", &num);
        fflush(stdin);
        if (num != 0){
            if(num %2 == 0) {
                pares ++;
            }else{
                impares ++;
            }
        }
    }
    printf("\nQuantidade de numeros Impares:%d\n", impares);
    printf("\nQuantidade de numeros Pares:%d\n", pares);

    return 0;
}
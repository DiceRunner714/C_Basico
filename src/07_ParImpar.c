#include <stdio.h>

int main() 
{
    int Numero;
    printf("Digite um numero: ");
    scanf("%d", &Numero);

    if(Numero % 2 == 0){
        printf("Esse numero e par\n");
    }else{
        printf("Esse numero e impar\n");
    }
    
    return 0;
}
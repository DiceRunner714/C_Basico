#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float Nota1;
    float Nota2;
    float Nota3;
    float Media;

    printf("Digite suas notas abaixo:\n");
    scanf("%f%f%f", &Nota1, &Nota2,&Nota3);
    Media = (Nota1 + Nota2 + Nota3)/3;

    if (Media>=6){
        printf("\nAprovado à Média\n");
    }
    else if (Media<4){
        printf("\nReprovado à Média\n");

    }else{
        printf("\nRecuperação à Média\n");
    }

    return 0;
}
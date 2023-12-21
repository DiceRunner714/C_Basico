#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float Nota1;
    float Nota2;
    float Nota3;

    printf("DIGITE SUAS NOTAS ABAIXO:\n");
    scanf("%f", &Nota1);
    scanf("%f", &Nota2);
    scanf("%f", &Nota3);


    const float Media = (Nota1 + Nota2 + Nota3)/3;

    printf("A sua media é: %.2f", Media);

    return 0;
}

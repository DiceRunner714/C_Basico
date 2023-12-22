#include <stdio.h>
#include <locale.h>

int main()
{
    //Habilitar caracteres em português
    setlocale(LC_ALL, "Portuguese");

    //Variáveis relacionadas à senha
    int senha, cont = 3;
    //Variáveis relacionadas à operações
    char letra = 'w';
    float deposito, saque, saldo = 500, psaque;

    printf("Para entrar, digite sua senha numérica abaixo:\n");

    while(cont != 0)
    {
        scanf("%d", &senha);
        if(senha != 40029001)
        {
            printf("Senha incorreta.\n");
            cont --;
            printf("Tentativas restantes: %d\n", cont);
        }
        else
        {
            printf("Senha correta, seja bem vindo!\n");
            printf("\n     Informe o que quer fazer digite:\n\n     1.'d', para Depósito\n     2.'s', para Saque\n     3.'e', para ver o Saldo\n     4.'f', para Sair\n     ");
            do
            {
                scanf("%c", &letra);
                switch(letra)
                {
                case'd':
                    printf("          Quanto deseja depositar?\n          R$");
                    scanf("%f", &deposito);
                    saldo += deposito;
                    printf("               Operação Concluída! R$%.2f foram depositados na sua conta.\n\n", deposito);
                    printf("\n     Informe o que quer fazer digite:\n\n     1.'d', para Depósito\n     2.'s', para Saque\n     3.'e', para ver o Saldo\n     4.'f', para Sair\n     ");
                    break;

                case's':
                    printf("          Quanto deseja sacar?\n          R$");
                    scanf("%f", &saque);
                    psaque = saldo - saque;
                    if(psaque > -1000)
                    {
                        saldo -= saque;
                        printf("               Operação Concluída! R$%.2f foram retirados da sua conta.\n\n", saque);
                    }else{
                        printf("               Operação negada, saldo insuficiente.\n");
                    }
                    printf("\n     Informe o que quer fazer digite:\n\n     1.'d', para Depósito\n     2.'s', para Saque\n     3.'e', para ver o Saldo\n     4.'f', para Sair\n     ");
                    break;

                case'e':
                    printf("          Seu saldo atual é de: R$%.2f\n\n", saldo);
                    printf("\n     Informe o que quer fazer digite:\n\n     1.'d', para Depósito\n     2.'s', para Saque\n     3.'e', para ver o Saldo\n     4.'f', para Sair\n     ");
                    break;

                case'f':
                    printf("\nAgradecemos a preferência!                         Feito por: Eduardo Sandes\n");
                    break;
                }
            }while(letra != 'f');
            break;
        }
    }
    if(cont == 0)
    {
        printf("\nContate a Agência Bancária para confirmação de identidade e recuperação da senha.\n");
    }
    return 0;
}
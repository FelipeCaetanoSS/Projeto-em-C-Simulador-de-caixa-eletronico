#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int menu;
    float saldo = 0;
    float saque, deposito;

    printf("\t     BEM VINDO AO BANCO!!\n\n");

    while(menu = 1){
    printf("\t=========== MENU ===========\n");
    printf("\t-------- SALDO = 2 ---------\n");
    printf("\t---- SACAR DINHEIRO = 3 ----\n");
    printf("\t-- DEPOSITAR DINHEIRO = 4 --\n");
    printf("\t------ EXTRATO = 5 ---------\n");
    printf("\t--------- SAIR = 0 ---------\n");

    printf("\nDigite o número para continuar:\n");
    scanf("%i", &menu);

    switch (menu){
    case 0:
        printf("\n--------------------------------------\n");
        printf("Encerrando Programa...\n\n\n\n");
            return 0;
    case 2:
        printf("\n\tSALDO!!\n\n");
        printf("Seu saldo total é:\n", saldo);
        printf("%.2f\n", saldo);
        printf("\n--------------------------------------\n\n");
            break;
    case 3:
        printf("\n\tSAQUE DE DINHEIRO!!\n\n");
        printf("Qual valor deseja retirar?\n");
        scanf("%f", &saque);
        if (saque > 0){
            if (saque <= saldo){
            saldo -= saque;
        printf("Você acaba de retirar %.2f da sua conta.", saque);
        } else{
        printf("O valor não está disponível para resgate.");
        }
        } else{
        printf("\nO valor não pode números negativos.");
        }
        printf("\n--------------------------------------\n\n");
            break;
    case 4:
        printf("\n\tDEPOSITO DE DINHEIRO!!\n\n");
        printf("Qual valor deseja depositar?\n");
        scanf("%f", &deposito);

        if (deposito > 0){
            saldo += deposito;
        printf("\nSUCESSO!!!\n");
        printf("Você acaba de depositar %.2f em sua conta.\n", deposito);
        } else{
        printf("\nO valor não pode números negativos.");
        }
        printf("\n--------------------------------------\n\n");
            break;
    case 5:
        printf("\n\tEXTRATO!!\n\n");

        printf("\n--------------------------------------\n\n");
            break;
   default:
        printf("\nOPÇÃO INVÁLIDA, TENTE NOVAMENTE.\n");
        printf("\n--------------------------------------\n\n");
            break;
}
    }

    return 0;
}

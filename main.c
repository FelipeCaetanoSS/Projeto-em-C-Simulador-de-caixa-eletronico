#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int menu;


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
        printf("--------------------------------------\n");
        printf("Encerrando Programa...\n\n\n\n");
            return 0;
    case 2:

        printf("\nSALDO!!\n");
        printf("--------------------------------------\n\n");
            break;
    case 3:

        printf("\nSAQUE DE DINHEIRO!!\n");
        printf("--------------------------------------\n\n");
            break;
    case 4:

        printf("\nDEPOSITO DE DINHEIRO!!\n");
        printf("--------------------------------------\n\n");
            break;
    case 5:

        printf("\nEXTRATO!!\n");
        printf("--------------------------------------\n\n");
            break;
   default:
        printf("\n\tOPÇÃO INVÁLIDA, TENTE NOVAMENTE.\n");
        printf("--------------------------------------\n\n");
            break;
}
    }


    return 0;
}

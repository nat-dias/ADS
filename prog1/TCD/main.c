#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "structs.c"

void cadastrar_evento(cadastro *evento);


int main()
{
    setlocale(LC_ALL,"");

    cadastro evento[100];
    float saldo;
    int i, op;

    for(i=0; i<100; i++)
        evento[i].id == 0;

    do
    {
        printf("\n *** MENU PRINCIPAL ***\n");
        printf("1 - Cadastrar evento\n");
        printf("2 - Pesquisar evento\n");
        printf("3 - Ingressos vendidos\n");
        printf("4 - Exibir resultado por evento\n");
        printf("5 - Exibir resultado geral\n");
        printf("6 - Sair\n");
        printf("Digite a opção escolhida: [ ]\b\b");
        scanf("%d", &op);

        switch(op)
        {
        case 1:
            cadastrar_evento(&evento);
            break;
        case 2:
            pesquisa_evento(&evento);
            break;
        case 3:
            insere_vendas(&evento);
            break;
        case 4:
            resultado(&evento);
            break;
        case 5:
            saldo = saldo_final(&evento);
            printf("Saldo atual do promoter: R$ %.2f\n", saldo);
            break;
        case 6:
            printf("\nAté logo...\n");
            printf("Volte sempre...\n");
            break;
        default:
            printf("\nOpção inválida.\n");
            printf("Digite novamente.\n");
        }

        system("pause");
        system("cls");
    }
    while(op!=6);

    return 0;
}

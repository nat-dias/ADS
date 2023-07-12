#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "structs.c"

void resultado (cadastro *evento)
{
    int i, identificador;

    printf("\nRESULTADO DO EVENTO\n");

    printf("Digite o identificador do evento: ");
    scanf("%d", &identificador);

    i = verifica_evento(evento, identificador);

    if(evento[i].id==0)
    {
        printf("Não existe evento com esse identificador.\n");
    }
    else
    {
        if(evento[i].lucro >= 0)
            printf("\nO evento teve lucro de R$ %.2f\n", evento[i].lucro);
        else
            printf("\nO evento teve prejuízo de R$ %.2f\n", evento[i].lucro*(-1));
        }
}

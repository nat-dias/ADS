#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "structs.c"

void insere_vendas (cadastro *evento)
{
    int i, identificador;

    printf("\nINSERIR INGRESSOS VENDIDOS\n");

    printf("Digite o identificador do evento: ");
    scanf("%d", &identificador);

    i = verifica_evento(evento, identificador);

    if(evento[i].id==0)
    {
        printf("Não existe evento com esse identificador.\n");
    }
    else
    {
        printf("Digite a quantidade de ingressos populares vendidos: ");
        scanf("%d", &evento[i].popvend);
        printf("Digite a quantidade de ingressos normais vendidos: ");
        scanf("%d", &evento[i].normvend);
        printf("Digite a quantidade de ingressos especiais vendidos: ");
        scanf("%d", &evento[i].especvend);
        evento[i].lucro = ((evento[i].popvend*evento[i].popular)+(evento[i].normvend*evento[i].normal)+(evento[i].especvend*evento[i].especial)) - evento[i].custos;
    }
}

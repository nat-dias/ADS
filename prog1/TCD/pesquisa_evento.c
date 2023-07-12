#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "structs.c"

void pesquisa_evento (cadastro *evento)
{
    int i, j, identificador;

    printf("\nPESQUISA DE EVENTO\n");

    printf("Digite o identificador do evento: ");
    scanf("%d", &identificador);

    i = verifica_evento(evento, identificador);

    if(evento[i].id==0)
    {
        printf("Não existe evento com esse identificador.\n");
    }
    else
    {
        printf("Identificador do evento: %d\n", evento[i].id);
        printf("Nome do evento: %s\n", evento[i].nome);
        printf("Local do evento: %s\n", evento[i].local);
        printf("Endereço do local: \n");
        printf("Rua: %s\n", evento[i].end.rua);
        printf("Número: %d\n", evento[i].end.nro);
        printf("Bairro: %s\n", evento[i].end.bairro);
        printf("CEP: %s\n", evento[i].end.cep);
        printf("Cidade: %s\n", evento[i].end.cidade);
        printf("Estado: %s\n", evento[i].end.estado);
        printf("Digite a data do evento: \n");
        printf("Dia: %d\n", evento[i].agenda.dia);
        printf("Mês: %d\n", evento[i].agenda.mes);
        printf("Ano: %d\n", evento[i].agenda.ano);
        printf("Quantidade de ingressos colocados a venda: %d\n", evento[i].ingressos);
        printf("Custos da organização: R$ %.2f", evento[i].custos);
        if(evento[i].open == 1)
        {
            printf("Evento OPEN BAR\n");
            for(j=0; j<4; j++)
            {
                printf("Nome da bebida %d: %s\n", j+1, evento[i].drinks[j].nome);
                printf("Teor alcóolico da bebida %d: %.2f\n", j+1, evento[i].drinks[j].teor);
                printf("Valor da bebida %d: R$ %.2f\n", j+1, evento[i].drinks[j].valor);
            }
            printf("Valor do ingresso popular: R$ %.2f\n", evento[i].popular);
            printf("Valor do ingresso normal: R$ %.2f\n", evento[i].normal);
            printf("Valor do ingresso especial: R$ %.2f\n", evento[i].especial);
        }
        else
        {
            printf("Evento NÃO É OPEN BAR\n");
            printf("Valor do ingresso popular: R$ %.2f\n", evento[i].popular);
            printf("Valor do ingresso normal: R$ %.2f\n", evento[i].normal);
            printf("Valor do ingresso especial: R$ %.2f\n", evento[i].especial);
        }
        printf("Quantidade de ingressos populares vendidos: %d\n", evento[i].popvend);
        printf("Quantidade de ingressos normais vendidos: %d\n", evento[i].normvend);
        printf("Quantidade de ingressos especiais vendidos: %d\n", evento[i].especvend);
        printf("Lucro do evento: R$ %.2f\n", evento[i].lucro);
    }
}

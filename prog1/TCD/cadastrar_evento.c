#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "structs.c"

void cadastrar_evento (cadastro *evento)
{
    float valor_bebida=0;
    int i, j, identificador;

    printf("\nCADASTRO DE EVENTO\n");

    printf("Digite o identificador do evento: ");
    scanf("%d", &identificador);

    i = verifica_evento(evento, identificador);

    if(evento[i].id==identificador)
    {
        printf("Já existe um evento com esse identificador.\n");
    }
    else
    {
        evento[i].id = identificador;
        printf("Digite o nome do evento: ");
        scanf("%s", &evento[i].nome);
        printf("Digite o local do evento: ");
        scanf("%s", &evento[i].local);
        printf("Digite o endereço do local: \n");
        printf("Rua: ");
        scanf("%s", &evento[i].end.rua);
        printf("Número: ");
        scanf("%d", &evento[i].end.nro);
        printf("Bairro: ");
        scanf("%s", &evento[i].end.bairro);
        printf("CEP: ");
        scanf("%s", &evento[i].end.cep);
        printf("Cidade: ");
        scanf("%s", &evento[i].end.cidade);
        printf("Estado: ");
        scanf("%s", &evento[i].end.estado);
        printf("Digite a data do evento: \n");
        printf("Dia: ");
        scanf("%d", &evento[i].agenda.dia);
        printf("Mês: ");
        scanf("%d", &evento[i].agenda.mes);
        printf("Ano: ");
        scanf("%d", &evento[i].agenda.ano);
        printf("Quantidade de ingressos colocados a venda: ");
        scanf("%d", &evento[i].ingressos);
        printf("Digite os custos da organização: ");
        scanf("%f", &evento[i].custos);

        printf("Evento é open bar? (0)Não / (1)Sim: ");
        scanf("%d", &evento[i].open);
        if(evento[i].open == 1)
        {
            for(j=0; j<4; j++)
            {
                printf("Digite o nome da bebida %d: ", j+1);
                scanf("%s", &evento[i].drinks[j].nome);
                printf("Digite o teor alcóolico da bebida %d: ", j+1);
                scanf("%f", &evento[i].drinks[j].teor);
                printf("Digite o valor da bebida %d: ", j+1);
                scanf("%f", &evento[i].drinks[j].valor);
                valor_bebida += evento[i].drinks[j].valor;
            }
            evento[i].popular = (evento[i].custos / evento[i].ingressos) + (valor_bebida*2.75);
            evento[i].normal = evento[i].popular * 1.10;
            evento[i].especial = evento[i].normal * 1.15;
        }
        else
        {
            evento[i].popular = (evento[i].custos / evento[i].ingressos);
            evento[i].normal = evento[i].popular * 1.10;
            evento[i].especial = evento[i].normal * 1.15;
        }
    }
}



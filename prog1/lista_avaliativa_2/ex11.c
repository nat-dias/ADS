/*Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
• todos os números pares;
• a quantidade de números pares;
• todos os números ímpares;
• a quantidade de números ímpares.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 3

typedef struct
{
    int dia, mes, ano;
} data;

typedef struct
{
    char nome[100];
    data nasc;
    char sangue[3];
    char rh;
    int idade;
} dados;

int main()
{
    setlocale(LC_ALL,"");
    dados hemo[TAM];
    int i;
    data atual;

    //A)
    printf("ENTRADA DE DADOS: \n");
    for(i=0; i<TAM; i++)
    {
        printf("Digite o nome do paciente: ");
        scanf("%s", &hemo[i].nome);
        printf("Digite a data de nascimento do paciente:\n");
        printf("Dia = ");
        scanf("%d", &hemo[i].nasc.dia);
        printf("Mês = ");
        scanf("%d", &hemo[i].nasc.mes);
        printf("Ano = ");
        scanf("%d", &hemo[i].nasc.ano);
        printf("Digite o tipo sanguíneo do paciente: ");
        scanf("%s%*c", &hemo[i].sangue);
        printf("Digite o fator RH do paciente: ");
        scanf("%c%*c", &hemo[i].rh);
    }

    //LEITURA DA DATA ATUAL
    printf("Digite a data atual:\n");
    printf("Dia = ");
    scanf("%d", &atual.dia);
    printf("Mês = ");
    scanf("%d", &atual.mes);
    printf("Ano = ");
    scanf("%d", &atual.ano);


    //CÁLCULO DA IDADE DOS PACIENTES
    for(i=0; i<TAM; i++)
    {
        if(atual.mes > hemo[i].nasc.mes)
            hemo[i].idade = atual.ano - hemo[i].nasc.ano;
        else if (atual.mes < hemo[i].nasc.mes)
            hemo[i].idade = (atual.ano - hemo[i].nasc.ano) - 1;
        else if (atual.mes == hemo[i].nasc.mes)
            if (atual.dia >= hemo[i].nasc.dia)
                hemo[i].idade = atual.ano - hemo[i].nasc.ano;
            else
                hemo[i].idade = (atual.ano - hemo[i].nasc.ano) - 1;
    }

    //B)
    for(i=0; i<TAM; i++)
    {
        if(hemo[i].idade >= 18 && hemo[i].idade <= 55)
            if((strcmp(hemo[i].sangue,"B")==0)&&(hemo[i].rh=='+'))
                printf("\nNome = %s\n", hemo[i].nome);
    }


    /*
    printf("\nSAÍDA DE DADOS: \n");
    for(i=0; i<TAM; i++)
    {
        printf("Nome do paciente: %s\n", hemo[i].nome);
        printf("Data de nascimento do paciente: %d/%d/%d\n", hemo[i].nasc.dia, hemo[i].nasc.mes, hemo[i].nasc.ano);
        printf("Idade do paciente: %d\n", hemo[i].idade);
        printf("Tipo sanguíneo do paciente: %s\n", hemo[i].sangue);
        printf("Digite o fator RH do paciente: %c\n", hemo[i].rh);
    }
    */

    return 0;
}
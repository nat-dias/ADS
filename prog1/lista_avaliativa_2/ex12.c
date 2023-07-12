/*A prefeitura de Unaí fez uma pesquisa entre seus habitantes, coletando dados sobre salário, idade
e número de filhos. Faça um programa que leia esses dados de 50 pessoas, calcule e mostre:
a) a média de salário da população;
b) a média do número de filhos;
c) o maior salário;
d) o percentual de mulheres com salário superior a R$ 1.000,00.*/

#include <stdio.h>

#define MAX_PESSOAS 50

typedef struct {
    float salario;
    int idade;
    int numFilhos;
    char genero;
} Pessoa;

void calcularEExibirInformacoes(Pessoa pessoas[MAX_PESSOAS]) {
    int i, countMulheresAcimaMil = 0;
    float somaSalarios = 0.0, mediaSalario, mediaNumFilhos;
    float maiorSalario = pessoas[0].salario;

    // Calcular média de salário e média de número de filhos
    for (i = 0; i < MAX_PESSOAS; i++) {
        somaSalarios += pessoas[i].salario;
        mediaNumFilhos += pessoas[i].numFilhos;

        if (pessoas[i].salario > maiorSalario) {
            maiorSalario = pessoas[i].salario;
        }

        if (pessoas[i].genero == 'F' && pessoas[i].salario > 1000.0) {
            countMulheresAcimaMil++;
        }
    }

    mediaSalario = somaSalarios / MAX_PESSOAS;
    mediaNumFilhos /= MAX_PESSOAS;

    printf("Média de salário da população: R$ %.2f\n", mediaSalario);
    printf("Média do número de filhos: %.2f\n", mediaNumFilhos);
    printf("Maior salário: R$ %.2f\n", maiorSalario);
    printf("Percentual de mulheres com salário superior a R$ 1.000,00: %.2f%%\n", (countMulheresAcimaMil / (float)MAX_PESSOAS) * 100);
}

int main() {
    Pessoa pessoas[MAX_PESSOAS];
    int i;

    // Ler os dados das pessoas
    for (i = 0; i < MAX_PESSOAS; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Salário: R$ ");
        scanf("%f", &pessoas[i].salario);
        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);
        printf("Número de filhos: ");
        scanf("%d", &pessoas[i].numFilhos);
        printf("Gênero (M/F): ");
        scanf(" %c", &pessoas[i].genero);
    }

    // Calcular e exibir as informações
    calcularEExibirInformacoes(pessoas);

    return 0;
}

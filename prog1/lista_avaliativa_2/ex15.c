/*Uma loja varejista da cidade de Lagoa Grande contratou 15 funcionários temporários para o período
de final de ano. De acordo com o valor das vendas mensais, os funcionários ganham pontos que
determinarão seus salários ao final de cada mês. Sabe-se que eles trabalharão nos meses de
novembro de 2021 a janeiro de 2022. Faça um programa que:
a) Cadastre os nomes dos funcionários e suas respectivas vendas mensais.
b) Calcule e mostre a pontuação geral de cada funcionário nos três meses. Sabe-se que R$
100,00 equivalem a 1 ponto.
c) Calcule e mostre a pontuação geral de todos os funcionários a cada mês.
d) Determine e mostre a maior pontuação atingida nos três meses, mostrando o nome do
funcionário. Deverão ser desconsiderados empates.
e) Determine e mostre o valor total vendido.*/

#include <stdio.h>
#include <string.h>

#define NUM_FUNCIONARIOS 15
#define NUM_MESES 3
#define PONTOS_POR_100_REAIS 1

typedef struct {
    char nome[50];
    float vendasMensais[NUM_MESES];
    float pontuacaoGeral;
} Funcionario;

void cadastrarFuncionarios(Funcionario funcionarios[]) {
    printf("Cadastro dos funcionários e suas vendas mensais:\n");
    for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
        printf("\nFuncionário %d\n", i + 1);

        printf("Nome: ");
        fgets(funcionarios[i].nome, sizeof(funcionarios[i].nome), stdin);
        funcionarios[i].nome[strcspn(funcionarios[i].nome, "\n")] = '\0';

        for (int j = 0; j < NUM_MESES; j++) {
            printf("Vendas em %d/%d: R$ ", j + 11, 2021);
            scanf("%f", &funcionarios[i].vendasMensais[j]);

            // Limpar o buffer do teclado
            while (getchar() != '\n');
        }
    }
}

void calcularPontuacaoGeral(Funcionario funcionarios[]) {
    for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
        float totalVendas = 0.0;
        for (int j = 0; j < NUM_MESES; j++) {
            totalVendas += funcionarios[i].vendasMensais[j];
        }
        funcionarios[i].pontuacaoGeral = totalVendas / 100.0 * PONTOS_POR_100_REAIS;
    }
}

void exibirPontuacaoGeral(Funcionario funcionarios[]) {
    printf("\nPontuação geral de cada funcionário nos três meses:\n");
    printf("-------------------------------------------------\n");
    printf("| %-20s | %-8s | %-8s | %-8s |\n", "Nome", "Mês 1", "Mês 2", "Mês 3");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
        printf("| %-20s | %-6.2f | %-6.2f | %-6.2f |\n", funcionarios[i].nome, funcionarios[i].vendasMensais[0], funcionarios[i].vendasMensais[1], funcionarios[i].vendasMensais[2]);
    }

    printf("-------------------------------------------------\n");
}

void exibirPontuacaoGeralPorMes(Funcionario funcionarios[]) {
    printf("\nPontuação geral de todos os funcionários a cada mês:\n");
    printf("-------------------------------------------------\n");
    printf("| %-6s | %-8s | %-8s | %-8s |\n", "Mês", "Mês 1", "Mês 2", "Mês 3");
    printf("-------------------------------------------------\n");

    for (int j = 0; j < NUM_MESES; j++) {
        printf("| %-6d | ", j + 11);
        for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
            printf("%-6.2f | ", funcionarios[i].vendasMensais[j] / 100.0 * PONTOS_POR_100_REAIS);
        }
        printf("\n");
    }

    printf("-------------------------------------------------\n");
}

void exibirMaiorPontuacao(Funcionario funcionarios[]) {
    float maiorPontuacao = 0.0;
    int indiceMaiorPontuacao = 0;

    for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
        if (funcionarios[i].pontuacaoGeral > maiorPontuacao) {
            maiorPontuacao = funcionarios[i].pontuacaoGeral;
            indiceMaiorPontuacao = i;
        }
    }

    printf("\nMaior pontuação atingida nos três meses:\n");
    printf("Funcionário: %s\n", funcionarios[indiceMaiorPontuacao].nome);
    printf("Pontuação: %.2f\n", funcionarios[indiceMaiorPontuacao].pontuacaoGeral);
}

float calcularTotalVendido(Funcionario funcionarios[]) {
    float totalVendido = 0.0;

    for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
        for (int j = 0; j < NUM_MESES; j++) {
            totalVendido += funcionarios[i].vendasMensais[j];
        }
    }

    return totalVendido;
}

int main() {
    Funcionario funcionarios[NUM_FUNCIONARIOS];

    cadastrarFuncionarios(funcionarios);

    calcularPontuacaoGeral(funcionarios);

    exibirPontuacaoGeral(funcionarios);

    exibirPontuacaoGeralPorMes(funcionarios);

    exibirMaiorPontuacao(funcionarios);

    float totalVendido = calcularTotalVendido(funcionarios);
    printf("\nValor total vendido: R$ %.2f\n", totalVendido);

    return 0;
}

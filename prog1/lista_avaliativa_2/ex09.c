/*Faça um algoritmo que preencha uma matriz 12 x 4 com os valores das vendas de uma loja, em que
cada linha representa um mês e cada coluna representa uma semana do mês. O programa deverá
calcular e mostrar:
a) o total vendido em cada mês do ano, mostrando o nome do mês por extenso
b) o total vendido em cada semana durante todo o ano
c) a semana com a maior quantidade de vendas durante um dado mês
d) o total vendido pela loja no ano*/

#include <stdio.h>

// Função para obter o nome do mês por extenso
char* obterNomeMes(int mes) {
    switch (mes) {
        case 1:
            return "Janeiro";
        case 2:
            return "Fevereiro";
        case 3:
            return "Março";
        case 4:
            return "Abril";
        case 5:
            return "Maio";
        case 6:
            return "Junho";
        case 7:
            return "Julho";
        case 8:
            return "Agosto";
        case 9:
            return "Setembro";
        case 10:
            return "Outubro";
        case 11:
            return "Novembro";
        case 12:
            return "Dezembro";
        default:
            return "Mês inválido";
    }
}

int main() {
    int vendas[12][4]; // Matriz de vendas 12x4
    int totalMes[12] = {0}; // Array para armazenar o total vendido em cada mês
    int totalSemana[4] = {0}; // Array para armazenar o total vendido em cada semana
    int totalAno = 0; // Variável para armazenar o total vendido no ano
    int maiorVendaMes[12] = {0}; // Array para armazenar a semana com maior venda de cada mês

    // Preenchimento da matriz de vendas
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Informe o valor de vendas para o mês %s, semana %d: ", obterNomeMes(i + 1), j + 1);
            scanf("%d", &vendas[i][j]);
            totalMes[i] += vendas[i][j]; // Atualiza o total vendido no mês
            totalSemana[j] += vendas[i][j]; // Atualiza o total vendido na semana
            totalAno += vendas[i][j]; // Atualiza o total vendido no ano

            // Verifica se a venda atual é maior que a maior venda registrada até o momento no mês
            if (vendas[i][j] > maiorVendaMes[i]) {
                maiorVendaMes[i] = vendas[i][j]; // Atualiza a maior venda do mês
            }
        }
    }

    // Exibição do total vendido em cada mês
    printf("\nTotal vendido em cada mês do ano:\n");
    for (int i = 0; i < 12; i++) {
        printf("%s: R$ %d\n", obterNomeMes(i + 1), totalMes[i]);
    }

    // Exibição do total vendido em cada semana
    printf("\nTotal vendido em cada semana durante todo o ano:\n");
    for (int i = 0; i < 4; i++) {
        printf("Semana %d: R$ %d\n", i + 1, totalSemana[i]);
    }

    // Encontrar a semana com a maior quantidade de vendas para cada mês
    printf("\nSemana com maior quantidade de vendas durante um dado mês:\n");
    for (int i = 0; i < 12; i++) {
        printf("Mês %s: Semana %d\n", obterNomeMes(i + 1), maiorVendaMes[i]);
    }

    // Exibição do total vendido pela loja no ano
    printf("\nTotal vendido pela loja no ano: R$ %d\n", totalAno);

    return 0;
}

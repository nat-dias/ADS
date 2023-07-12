/*Crie um programa que:
➢ receba o preço de dez produtos e armazene-os em um vetor;
➢ receba a quantidade estocada de cada um desses produtos, em cinco armazéns diferentes,
utilizando uma matriz 5 x 10.
O programa deverá calcular e mostrar:
a quantidade de produtos estocados em cada um dos armazéns;
• a quantidade de cada um dos produtos estocados, em todos os armazéns juntos;
• o preço do produto que possui maior estoque em um único armazém;
• o menor estoque armazenado;
• o custo de cada armazém.*/

#include <stdio.h>

#define PRODUTOS 10
#define ARMAZENS 5

void calcularEstoque(float precos[PRODUTOS], int estoque[ARMAZENS][PRODUTOS]) {
    int i, j;
    int totalProdutosArmazem[ARMAZENS] = {0};
    int totalProdutos[PRODUTOS] = {0};
    int maiorEstoqueArmazem = 0;
    int menorEstoque = estoque[0][0];
    float precoMaiorEstoque = 0.0;
    float custoArmazem[ARMAZENS] = {0.0};

    // Calcular a quantidade de produtos em cada armazém
    for (i = 0; i < ARMAZENS; i++) {
        for (j = 0; j < PRODUTOS; j++) {
            totalProdutosArmazem[i] += estoque[i][j];
        }
        printf("Quantidade de produtos no armazem %d: %d\n", i + 1, totalProdutosArmazem[i]);
    }

    // Calcular a quantidade de cada produto em todos os armazéns
    for (i = 0; i < ARMAZENS; i++) {
        for (j = 0; j < PRODUTOS; j++) {
            totalProdutos[j] += estoque[i][j];
        }
    }
    for (i = 0; i < PRODUTOS; i++) {
        printf("Quantidade do produto %d em todos os armazéns: %d\n", i + 1, totalProdutos[i]);
    }

    // Calcular o preço do produto com maior estoque em um único armazém
    for (i = 0; i < ARMAZENS; i++) {
        for (j = 0; j < PRODUTOS; j++) {
            if (estoque[i][j] > maiorEstoqueArmazem) {
                maiorEstoqueArmazem = estoque[i][j];
                precoMaiorEstoque = precos[j];
            }
        }
    }
    printf("Preço do produto com maior estoque em um único armazém: R$ %.2f\n", precoMaiorEstoque);

    // Calcular o menor estoque armazenado
    for (i = 0; i < ARMAZENS; i++) {
        for (j = 0; j < PRODUTOS; j++) {
            if (estoque[i][j] < menorEstoque) {
                menorEstoque = estoque[i][j];
            }
        }
    }
    printf("Menor estoque armazenado: %d\n", menorEstoque);

    // Calcular o custo de cada armazém
    for (i = 0; i < ARMAZENS; i++) {
        for (j = 0; j < PRODUTOS; j++) {
            custoArmazem[i] += precos[j] * estoque[i][j];
        }
        printf("Custo do armazem %d: R$ %.2f\n", i + 1, custoArmazem[i]);
    }
}

int main() {
    float precos[PRODUTOS];
    int estoque[ARMAZENS][PRODUTOS];
    int i, j;

    // Receber preços dos produtos
    for (i = 0; i < PRODUTOS; i++) {
        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &precos[i]);
    }

    // Receber a quantidade estocada de cada produto em cada armazém
    for (i = 0; i < ARMAZENS; i++) {
        printf("Armazem %d:\n", i + 1);
        for (j = 0; j < PRODUTOS; j++) {
            printf("Digite a quantidade estocada do produto %d: ", j + 1);
            scanf("%d", &estoque[i][j]);
        }
    }

    // Calcular e mostrar as informações
    calcularEstoque(precos, estoque);

    return 0;
}

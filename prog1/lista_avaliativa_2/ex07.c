/*Um elemento Aij de uma matriz é dito ponto de sela da matriz A se, e somente se, Aij for, ao mesmo
tempo, o menor elemento da linha i e o maior elemento da coluna j. Faça um programa que carregue
uma matriz de ordem 3x3, verifique se a matriz possui ponto de sela e, se possuir, mostre seu valor
e sua localização.*/

#include <stdio.h>

#define SIZE 3

int main() {
    int matriz[SIZE][SIZE];
    int i, j;
    int pontoDeSela = 0;
    int linhaPontoDeSela, colunaPontoDeSela;

    // Preenchendo a matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verificando se há um ponto de sela
    for (i = 0; i < SIZE; i++) {
        int menorElementoLinha = matriz[i][0];
        int colunaMenorElementoLinha = 0;

        // Encontrando o menor elemento da linha
        for (j = 1; j < SIZE; j++) {
            if (matriz[i][j] < menorElementoLinha) {
                menorElementoLinha = matriz[i][j];
                colunaMenorElementoLinha = j;
            }
        }

        // Verificando se o menor elemento da linha é o maior elemento da coluna
        int colunaMaiorElementoColuna = colunaMenorElementoLinha;
        int maiorElementoColuna = matriz[0][colunaMaiorElementoColuna];

        for (j = 1; j < SIZE; j++) {
            if (matriz[j][colunaMenorElementoLinha] > maiorElementoColuna) {
                maiorElementoColuna = matriz[j][colunaMenorElementoLinha];
                colunaMaiorElementoColuna = colunaMenorElementoLinha;
            }
        }

        // Verificando se o ponto de sela foi encontrado
        if (menorElementoLinha == maiorElementoColuna) {
            pontoDeSela = menorElementoLinha;
            linhaPontoDeSela = i;
            colunaPontoDeSela = colunaMaiorElementoColuna;
            break;  // Encerra o loop se um ponto de sela foi encontrado
        }
    }

    // Exibindo o resultado
    if (pontoDeSela != 0) {
        printf("\nPonto de Sela encontrado!\n");
        printf("Valor do ponto de Sela: %d\n", pontoDeSela);
        printf("Localizacao: [%d][%d]\n", linhaPontoDeSela, colunaPontoDeSela);
    } else {
        printf("\nNao foi encontrado um ponto de Sela na matriz.\n");
    }

    return 0;
}

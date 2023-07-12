/*Na teoria dos sistemas, define-se o elemento MINMAX de uma matriz como o maior elemento da
linha em que se encontra o menor elemento da matriz. Elabore um programa que carregue uma
matriz 4x7 com números reais, calcule e mostre seu MINMAX e sua posição.*/

#include <stdio.h>

#define ROWS 4
#define COLS 7

int main() {
    float matriz[ROWS][COLS];
    float min = 0;
    float max = 0;
    int rowMin = 0;
    int rowMax = 0;
    int colMax = 0;

    // Preenchendo a matriz
    printf("Digite os elementos da matriz 4x7:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);

            // Verificando o menor elemento
            if (i == 0 && j == 0) {
                min = matriz[i][j];
            } else if (matriz[i][j] < min) {
                min = matriz[i][j];
                rowMin = i;
            }

            // Verificando o maior elemento
            if (matriz[i][j] > max) {
                max = matriz[i][j];
                rowMax = i;
                colMax = j;
            }
        }
    }

    // Encontrando o MINMAX
    for (int j = 0; j < COLS; j++) {
        if (matriz[rowMin][j] > max) {
            max = matriz[rowMin][j];
            colMax = j;
        }
    }

    // Exibindo o resultado
    printf("\nMINMAX encontrado!\n");
    printf("Valor do MINMAX: %.2f\n", max);
    printf("Localizacao: [%d][%d]\n", rowMax, colMax);

    return 0;
}

/*Faça um programa que preencha uma matriz 3 x 4, calcule e mostre:
• a quantidade de elementos pares;
• a soma dos elementos ímpares;
• a média de todos os elementos.*/

#include <stdio.h>

int main() {
    int matriz[3][4];
    int i, j;
    int quantidadePares = 0;
    int somaImpares = 0;
    int totalElementos = 0;
    float media;

    // Preenchendo a matriz
    printf("Digite os elementos da matriz 3x4:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            // Verificando se o elemento é par ou ímpar
            if (matriz[i][j] % 2 == 0) {
                quantidadePares++;
            } else {
                somaImpares += matriz[i][j];
            }

            // Atualizando o total de elementos
            totalElementos++;
        }
    }

    // Calculando a média
    media = (float)somaImpares / totalElementos;

    // Exibindo os resultados
    printf("\nQuantidade de elementos pares: %d\n", quantidadePares);
    printf("Soma dos elementos ímpares: %d\n", somaImpares);
    printf("Média de todos os elementos: %.2f\n", media);

    return 0;
}

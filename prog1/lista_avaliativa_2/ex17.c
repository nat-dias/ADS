/*Faça um algoritmo contendo uma função que determine o maior e o menor valor entre cinco valores
inteiros lidos pelo usuário.*/

#include <stdio.h>

void encontrarMaiorMenor(int valores[], int tamanho, int *maior, int *menor) {
    *maior = valores[0];
    *menor = valores[0];

    for (int i = 1; i < tamanho; i++) {
        if (valores[i] > *maior) {
            *maior = valores[i];
        }

        if (valores[i] < *menor) {
            *menor = valores[i];
        }
    }
}

int main() {
    int valores[5];

    printf("Digite cinco valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
    }

    int maior, menor;
    encontrarMaiorMenor(valores, 5, &maior, &menor);

    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);

    return 0;
}

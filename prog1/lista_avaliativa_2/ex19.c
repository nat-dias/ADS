/*Faça uma função que receba um vetor A de dez elementos inteiros como parâmetro. Ao final dessa
função, deverá ter sido gerado um vetor B contendo o fatorial de cada elemento de A. O vetor B
deverá ser mostrado no programa principal.*/

#include <stdio.h>

long long int calcularFatorial(int num) {
    long long int fatorial = 1;

    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }

    return fatorial;
}

void gerarVetorFatorial(int vetorA[], int vetorB[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetorB[i] = calcularFatorial(vetorA[i]);
    }
}

int main() {
    int vetorA[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetorB[10];

    gerarVetorFatorial(vetorA, vetorB, 10);

    printf("Vetor B (fatorial de cada elemento de A):\n");
    for (int i = 0; i < 10; i++) {
        printf("%lld ", vetorB[i]);
    }
    printf("\n");

    return 0;
}
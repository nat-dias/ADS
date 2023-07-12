/*Crie um programa que receba os valores antigo e atual de um produto. Chame uma função que
determine o percentual de acréscimo ou decréscimo entre esses valores. O resultado deverá ser
mostrado no programa principal.*/

#include <stdio.h>

float calcularPercentual(float valorAntigo, float valorAtual) {
    float diferenca = valorAtual - valorAntigo;
    float percentual = (diferenca / valorAntigo) * 100.0;

    return percentual;
}

int main() {
    float valorAntigo, valorAtual;

    printf("Informe o valor antigo do produto: ");
    scanf("%f", &valorAntigo);

    printf("Informe o valor atual do produto: ");
    scanf("%f", &valorAtual);

    float percentual = calcularPercentual(valorAntigo, valorAtual);

    printf("Percentual de acréscimo ou decréscimo: %.2f%%\n", percentual);

    return 0;
}
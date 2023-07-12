/*Elabore um programa contendo uma função que receba as três notas de um aluno do curso ADS
como parâmetros e uma letra. Se a letra for “A”, a sub-rotina deverá calcular a média aritmética das
notas do aluno; se a letra for “P”, deverá calcular a média ponderada, com os pesos 5, 3 e 2. A média
calculada deverá ser devolvida ao programa principal para, então, ser mostrada.*/

#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3, char opcao) {
    float media;

    if (opcao == 'A') {
        media = (nota1 + nota2 + nota3) / 3.0;
    } else if (opcao == 'P') {
        media = (nota1 * 5.0 + nota2 * 3.0 + nota3 * 2.0) / 10.0;
    } else {
        printf("Opção inválida.\n");
        return -1.0; // Valor inválido para indicar erro
    }

    return media;
}

int main() {
    float nota1, nota2, nota3;
    char opcao;

    printf("Informe as três notas do aluno:\n");
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);

    printf("Informe a opção (A para média aritmética ou P para média ponderada): ");
    scanf(" %c", &opcao);

    float media = calcularMedia(nota1, nota2, nota3, opcao);
    if (media >= 0.0) {
        printf("A média do aluno é: %.2f\n", media);
    } else {
        printf("Erro ao calcular a média.\n");
    }

    return 0;
}

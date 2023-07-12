/*Fazer um algoritmo, utilizando funções, que:
a) Leia um conjunto de dados contendo o número de identificação de um empregado, a hora
de início (horas, minutos e segundos) e a hora de término (horas, minutos e segundos) de
uma determinada tarefa. A última entrada conterá o número do empregado negativo.

b) Calcule para cada empregado, a duração da tarefa que ele executou, utilizando uma sub-
rotina.

c) Calcule, para cada empregado, o valor que este receberá pela tarefa, calculado por segundos
trabalhados. O valor do segundo trabalhado será dado com entrada.
d) Escreva, para cada empregado, o seu número de identificação, a duração de sua tarefa em
horas, minutos e segundos e o valor que ele deve receber.*/

#include <stdio.h>

int calcularDuracao(int horaInicio, int minutoInicio, int segundoInicio, int horaTermino, int minutoTermino, int segundoTermino) {
    int duracaoSegundosInicio = (horaInicio * 3600) + (minutoInicio * 60) + segundoInicio;
    int duracaoSegundosTermino = (horaTermino * 3600) + (minutoTermino * 60) + segundoTermino;
    int duracaoSegundos = duracaoSegundosTermino - duracaoSegundosInicio;

    return duracaoSegundos;
}

float calcularValor(int duracaoSegundos, float valorSegundo) {
    float valor = duracaoSegundos * valorSegundo;

    return valor;
}

void imprimirResultado(int numeroEmpregado, int duracaoSegundos, float valor) {
    int duracaoHoras = duracaoSegundos / 3600;
    duracaoSegundos %= 3600;
    int duracaoMinutos = duracaoSegundos / 60;
    duracaoSegundos %= 60;

    printf("Número de identificação: %d\n", numeroEmpregado);
    printf("Duração da tarefa: %d horas, %d minutos, %d segundos\n", duracaoHoras, duracaoMinutos, duracaoSegundos);
    printf("Valor a receber: R$ %.2f\n\n", valor);
}

int main() {
    int numeroEmpregado;
    int horaInicio, minutoInicio, segundoInicio;
    int horaTermino, minutoTermino, segundoTermino;
    float valorSegundo;

    printf("Digite o valor por segundo trabalhado: ");
    scanf("%f", &valorSegundo);

    while (1) {
        printf("Digite o número de identificação do empregado (negativo para sair): ");
        scanf("%d", &numeroEmpregado);

        if (numeroEmpregado < 0) {
            break;
        }

        printf("Digite a hora de início da tarefa (formato HH:MM:SS): ");
        scanf("%d:%d:%d", &horaInicio, &minutoInicio, &segundoInicio);

        printf("Digite a hora de término da tarefa (formato HH:MM:SS): ");
        scanf("%d:%d:%d", &horaTermino, &minutoTermino, &segundoTermino);

        int duracaoSegundos = calcularDuracao(horaInicio, minutoInicio, segundoInicio, horaTermino, minutoTermino, segundoTermino);
        float valor = calcularValor(duracaoSegundos, valorSegundo);

        imprimirResultado(numeroEmpregado, duracaoSegundos, valor);
    }

    return 0;
}

/*A nota final de um estudante do curso ADS é calculada a partir de três notas atribuídas,
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A
média das três notas mencionadas obedece aos pesos a seguir:
Nota Peso
Trabalho de laboratório 2
Avaliação semestral 3
Exame final 5

Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito obtido
pelo aluno segundo a tabela 
abaixo:

Média Ponderada     Conceito
8,0 – 10,0          A
7,0 – 7,9           B
6,0 – 6,9           C
5,0 – 5,9           D
0,0 – 4,9           E
*/

#include <stdlib.h>

int main () 
{
    float n1, n2, n3, mediaPond;
    printf("Nota do trabalho semestral: ");
    scanf("%f", &n1);
    printf("Nota da avaliação semestral: ");
    scanf("%f", &n2);
    printf("Nota do exame final: ");
    scanf("%f", &n3);

    mediaPond = (n1*2 + n2*3 + n3*5)/10;

    if(mediaPond >= 8) 
        printf("Media ponderada: %.2f\n Conceito A", mediaPond);
    else if(mediaPond < 8 && mediaPond >= 7)
        printf("Media ponderada: %.2f\n Conceito B", mediaPond);
    else if(mediaPond < 7 && mediaPond >= 6)
        printf("Media ponderada: %.2f\n Conceito C", mediaPond);
    else if(mediaPond < 6 && mediaPond >= 5)
        printf("Media ponderada: %.2f\n Conceito D", mediaPond);
    else if(mediaPond < 5)
        printf("Media ponderada: %.2f\n Conceito E", mediaPond);

    return 0;   
}
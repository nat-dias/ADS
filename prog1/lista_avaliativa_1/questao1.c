/*
A nota final de um estudante do curso ADS é calculada a partir de três notas atribuídas,
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A
média das três notas mencionadas obedece aos pesos a seguir:
Nota                       Peso
Trabalho de laboratório    2
Avaliação semestral        3
Exame final                5

Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito obtido
pelo aluno segundo a tabela abaixo:

Média Ponderada Conceito
8,0 – 10,0        A
7,0 – 7,9         B
6,0 – 6,9         C
5,0 – 5,9         D
0,0 – 4,9         E
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
   float trab, avalSemestral, exameFinal, media;
   char conceito;
   printf("Insira, nessa ordem, as notas do trabalho, da avaliacao semestral e do exame final\n");
   scanf("%f%f%f", &trab, &avalSemestral, &exameFinal);
   media = (trab*2 + avalSemestral*3 + exameFinal*5)/10;
   if (media >= 8) {
      conceito = 'A';
   } else if (media >= 7 && media < 8){
      conceito = 'B';
   } else if (media >= 6 && media < 7){
      conceito = 'C';
   } else if (media >= 5 && media < 6){
      conceito = 'D';
   } else if (media < 5){
      conceito = 'E';
   }

   printf("A nota e %f e o conceito e %c", media, conceito);
   return 0;
}
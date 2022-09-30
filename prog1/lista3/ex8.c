/*
Escreva um algoritmo que leia um número inteiro no
formato CDU (centena-dezena-unidade) e imprima os
algarismos correspondentes a cada casa.
*/

#include <stdio.h>
#include <stdlib.h> 

int main() {
   char num[5], cent, dez, uni;
   printf("escreva um numero qualquer de 3 caracteres\n");
   scanf("%s", &num);
   cent = num[0];
   dez = num[1];
   uni = num[2];

   printf("A unidade de centana e %c, de dezena e %c e a unidade e %c", cent, dez, uni);
   return 0;
}
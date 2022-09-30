/*
Escreva um algoritmo que leia um número inteiro e imprima
o seu sucessor e o seu antecessor.
*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
   int num, ant, suc;
   printf("Escreva um numero inteiro");
   scanf("%d", &num);
   ant = num - 1;
   suc = num + 1;
   printf("O antecessor de %d e %d e o sucessor e %d", num, ant, suc);
   return 0;
}
/*
Suponha que a população de uma cidade A seja da ordem de 80.000 habitantes com uma taxa anual
de crescimento de 3% e que a população de uma cidade B seja 200.000 habitantes com uma taxa
de crescimento de 1.5%. Faça um programa que calcule e escreva o número de anos necessários
para que a população da cidade A ultrapasse ou iguale a população da cidade B, mantidas as taxas
de crescimento.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
   int popA = 80000; 
   int popB = 200000; 
   int ano = 0;
   for(ano; popA <= popB; ano++) {
      popA = popA * 1.03;
      popB = popB * 1.015;
   }
   printf("%d %d", popA, popB);
   return 0;
}
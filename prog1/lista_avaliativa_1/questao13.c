/*
Elabore um algoritmo que imprima todas as tabuadas de multiplicação de 1 até 10.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int res, numerador, multiplicador;
   numerador = 1;
   while (numerador <= 10)
   {
      multiplicador = 1;
      while (multiplicador <= 10)
      {
         res = numerador * multiplicador;
         printf("%d*%d=%d\n", numerador, multiplicador, res);
         multiplicador++;
      }
      numerador++;
   }
   return 0;
}
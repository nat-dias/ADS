/*
Elabore um algoritmo que calcule o MMC (mínimo múltiplo comum) entre dois números lidos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, " ");
   int mmc, aux, i, num1, num2;
   printf("Escreva um número\n");
   scanf("%d", &num1);
   printf("Escreva outro número\n");
   scanf("%d", &num2);

   for (i = 2; i <= num2; i++)
   {
      aux = num1 * i;
      if ((aux % num2) == 0)
      {
         mmc = aux;
         i = num2 + 1;
      }
   }
   printf("O MMC ente %d e %d é %d", num1, num2, mmc);
   return 0;
}
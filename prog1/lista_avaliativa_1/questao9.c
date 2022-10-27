/*
Elabore um algoritmo que calcule o MDC (máximo divisor comum) entre dois números lidos.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int resto, num1, num2;
   printf("Escreva um numero\n");
   scanf("%d", &num1);
   printf("Escreva outro numero\n");
   scanf("%d", &num2);
   do
   {
      resto = num1 % num2;
      num1 = num2;
      num2 = resto;

   } while (resto != 0);

   printf("O MDC entre os numeros: %d", num1);

   return 0;
}
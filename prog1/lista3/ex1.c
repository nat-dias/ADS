/*
Escreva um programa para ler uma temperatura dada na
escala Fahrenheit e exibir o equivalente em Celsius.
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
   float tempF, tempC;
   printf("Esreva a temperatura em farenheight");
   scanf ("%f", &tempF);
   tempC = 5.0/9 * (tempF-32);
   printf ("a temperatura em graus celsius é %f", tempC);
   return 0;
}
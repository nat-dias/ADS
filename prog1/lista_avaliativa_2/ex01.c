/*Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
• todos os números pares;
• a quantidade de números pares;
• todos os números ímpares;
• a quantidade de números ímpares.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, vetor[6], par = 0, impar = 0;

   for (i = 0; i < 6; i++)
   {
      printf("Informe o %d numero do vetor: \n", i + 1);
      scanf("%d", &vetor[i]);

      if (vetor[i] % 2 == 0)
      {
         par++;
      }
      else
      {
         impar++;
      }
   }

   printf("-------------------------------------------\n");
   printf("Todos os numeros pares: \n");

   for (i = 0; i < 6; i++)
   {
      if (vetor[i] % 2 == 0)
      {
         printf("%d ", vetor[i]);
      }
   }

   printf("\nQuantidade de numeros pares: %d\n", par);
   printf("-------------------------------------------\n");
   printf("Todos os numeros impares: \n");

   for (i = 0; i < 6; i++)
   {
      if (vetor[i] % 2 != 0)
      {
         printf("%d ", vetor[i]);
      }
   }

   printf("\nQuantidade de numeros impar: %d\n", impar);
   return 0;
}

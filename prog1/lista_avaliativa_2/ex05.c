/*Faça um programa que preencha um vetor com dez números inteiros e um segundo vetor com cinco
números inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante será
composto pela soma de cada número par do primeiro vetor somado a todos os números do segundo
vetor. O segundo vetor resultante será composto pela quantidade de divisores que cada número
ímpar do primeiro vetor tem no segundo vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i, vet1[10], vet2[5], result1[15], result2[15], aux;

   for (aux = 0; aux < 10; aux++)
   {
      printf("Preencha posicao %d do primeiro vetor: ", aux);
      scanf("%d ", &vet1[aux]);
   }

   aux = 0;
   for(i = 0; i < 10; i++)
    if (vet1[i] % 2 == 0)
    {
      result1[aux] = vet1[i];
      aux++;
    }
    
   return 0;
}
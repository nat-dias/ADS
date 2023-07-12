/*Faça um programa que preencha dois vetores, A e B, com cinco números inteiros cada. Calcule e
mostre os seguintes vetores resultantes:
a) A união de A e B (todos os elementos de A e B sem repetições)
b) A intersecção de A e B (apenas os elementos que aparecem nos dois vetores, sem repetição)
c) A diferença de A e B (todos os elementos de A que não existem em B, sem repetição)*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i1, i2, x, vetor1[5], vetor2[5], inter[5], uniao[10];

   for (x = 1; x <= 5; x++)
   {
      printf("\nValores do vetor X, posicao %d: ", x);
      scanf("%d", &vetor1[x]);
   }

   printf("\n-------------------------------------------\n\n");

   for (x = 1; x <= 5; x++)
   {
      printf("Valores do vetor Y, posicao %d: ", x);
      scanf("%d", &vetor2[x]);
   }

   printf("\n-------------------------------------------\n\n");

   printf("b) Intesercao dos vetores A e B = ");
    for(i1 = 0; i1 < 6; i1++){
      for (i2 = 0; i2 < 6; i2++)
      {
         if( vetor1[i1] == vetor2[i2]){
            inter[i1] = vetor1[i1];
            printf("%d ", inter[i1]);
         }     
      }
    }


   return 0;
}
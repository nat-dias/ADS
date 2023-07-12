/*Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em

um vetor. Receba também o percentual de comissão a que cada vendedor tem direito e armazene-
os em outro vetor. Receba os nomes desses vendedores e armazene-os em um terceiro vetor.

Existem apenas dez vendedores na loja. Calcule e mostre:
• um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
• o total das vendas de todos os vendedores;
• o maior valor a receber e o nome de quem o receberá;
• o menor valor a receber e o nome de quem o receberá.*/

#include <stdio.h>

#include <stdlib.h>

int main()
{
   int i, pos1 = 0, pos2 = 99999.9;
   char vendedor[10][100];
   float total, percentual[10], vendas[10], maior = 0.0, menor = 0.0;

   for (i = 0; i < 10; i++)
   {
      printf("Digite o nome do vendedor %d: ", i + 1);
      scanf("%s", vendedor[i]);
      printf("Digite total das vendas do vendedor %d: R$ ", i + 1);
      scanf("%f", &vendas[i]);
      printf("Digite percentual de comissao do vendedor %d: ", i + 1);
      scanf("%f", &percentual[i]);
      printf("\n");
   }

   for (i = 0; i < 10; i++)
   { // Maior comissão
      if (vendas[i] > pos1)
      {
         maior = vendas[i] * ((percentual[i] / 100));
         pos1 = i;
      }
   }

   for (i = 0; i < 10; i++)
   { // Menor comissão
      if (vendas[i] < pos2)
      {
         menor = vendas[i] * ((percentual[i] / 100));
         pos2 = i;
      }
   }

   for (i = 0; i < 10; i++)
   { // Impressão dos vendedores e suas comissões
      printf("Vendedor: %s ", vendedor[i]);

      if (vendas[i] > 0)
      {
         total = vendas[i] * ((percentual[i] / 100));
         printf("\t\tValor a receber: R$ %.2f .", total);
      }
      printf("\n");
   }
   

   printf("\nO maior valor a receber: R$ %.2f quem vai receber: %s .", maior, vendedor[pos1]);

   printf("\nO menor valor a receber: R$ %.2f quem vai receber: %s .", menor, vendedor[pos2]);

   return 0;
}
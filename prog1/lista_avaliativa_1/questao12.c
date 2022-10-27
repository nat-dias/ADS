/*
Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores
positivos diferentes de n. Construa um programa em C que verifica se um dado número é perfeito.
Exemplo: 6 é perfeito, pois 1+2+3 = 6.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, num, soma;
   num = soma = 0;
   printf("\n\n INFORME O VALOR:\n");
   scanf("%d", &num);

   while (num <= 0)
   {
      printf("\n\n NUMERO INVALIDO...INSIRA UM VALOR SUPERIOR A 0.");
      printf("\n INFORME O VALOR:\n");
      scanf("%d", &num);
   }

   for (i = 1; i < num; i++)
   {
      if (num % i == 0)
         soma += i;
   }

   if (soma == num)
      printf("\n\n %d E UM NUMERO PERFEITO...\n", num);
   else
      printf("\n\n %d NAO E UM NUMERO PERFEITO...\n", num);

   return 0;
}
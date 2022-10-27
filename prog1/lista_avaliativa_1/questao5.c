/*
Faça um algoritmo que leia as dimensões A, B e C de uma sala retangular. Imagine que o piso dessa
sala será trocado e que as paredes internas e externas serão pintadas. O programa deve também
ler o tipo de piso a ser utilizado, bem como os tipos de tinta a serem utilizadas distintamente dentro
e fora da sala. Baseado na tabela de preços abaixo, o programa deve calcular e exibir o custo de
material desta reforma, sabendo-se que um litro de tinta cobre 2m2 de parede.

Tabela de Pisos            Tabela de Tintas
Tipo   Preço por m2        Tipo  Preço por litro
1      R$ 24,00            1     R$ 22,00
2      R$ 31,00            2     R$ 47,00
3      R$ 55,00
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int piso, tintaInt, tintaExt;
   float custoTotal, custoPiso, paredeInterna, paredeExterna;
   int altura, largura, profundidade;
   printf("qual a medida da altura da parede?\n");
   scanf("%d", &altura);
   printf("qual a medida da largura da parede?\n");
   scanf("%d", &largura);
   printf("qual a medida da profundidade da parede?\n");
   scanf("%d", &profundidade);
   printf("qual o tipo (1 ou 2)da tinta a ser usada no interior da sala?\n");
   scanf("%d", &tintaInt);
   printf("qual o tipo (1 ou 2) da tinta a ser usada no exterior da sala?\n");
   scanf("%d", &tintaExt);
   printf("qual o tipo (1, 2 ou 3) de piso a ser usado?\n");
   scanf("%d", &piso);
   
   switch (tintaInt) {
   case 1:
      tintaInt = 22;
      break;
   case 2:
      tintaInt = 47;
   default:
      printf("Você digitou um tipo invalido\n");
      break;
   }

   switch (tintaExt) {
   case 1:
      tintaExt = 22;
      break;
   case 2:
      tintaExt= 47;
   default:
      printf("Você digitou um tipo invalido\n");
      break;
   }

   switch (piso) {
   case 1:
      piso = 24;
      break;
   case 2:
      piso = 31;
      break;
   case 3:
      piso = 55;
      break;
   default:
      printf("Você digitou um tipo inválido\n");
      break;
   }
   paredeInterna = (largura  + profundidade) * altura * tintaInt * 2;
   paredeExterna =  (largura  + profundidade) * altura * tintaExt * 2;
   custoPiso = piso * largura * profundidade;
   custoTotal = paredeExterna + paredeInterna + custoPiso;
   printf("O valor total da reforma e %.2f", custoTotal);
   return 0;
}
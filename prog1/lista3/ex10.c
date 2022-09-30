/*
Em épocas de pouco dinheiro, os comerciantes estão
procurando aumentar suas vendas oferecendo desconto.
Faça um algoritmo que possa entrar com o valor de um
produto e o desconto oferecido (em percentual) e imprima o
novo valor a ser pago. Além disso, imprima o valor do
desconto.
*/
#include <stdio.h>
#include <stdlib.h> 

int main() {
   float despesas, total;
   printf("escreva o valor gasto em consumacao no estabelecimento\n");
   scanf("%f", &despesas);
   total = despesas * 1.1;

   printf("O valor a ser pag e R$%f", total);
   return 0;
}
/*
Todo restaurante, embora por lei não possa obrigar o cliente
a pagar, cobra 10% de taxa de serviço. Faça um algoritmo
que leia o valor gasto com despesas realizadas em um
restaurante e calcule o valor total da conta incluindo a
gorjeta.
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
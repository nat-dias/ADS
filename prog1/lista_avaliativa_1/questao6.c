/*
Elabore um algoritmo que calcule e exiba o valor a ser pago por um produto, considerando o preço
normal de tabela e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir para
ler qual a condição de pagamento escolhida e efetuar o cálculo adequado.

Código      Condição de pagamento
1           à vista em dinheiro ou cheque → 10% de desconto
2           à vista no cartão de débito → 7,5% de desconto
3           à vista no cartão de crédito → 5% de desconto
4           em duas vezes → preço normal de tabela sem juros
5           em quatro vezes → preço normal de tabela mais juros de 9,5%
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "Portuguese");
   float preco, valorFinal;
   int formaPagamento;
   char forma[255];
   printf("Digite o preço da compra\n");
   scanf("%f", &preco);

   printf("Qual a forma de pagemento de acordo com a tabela?\n");
   scanf("%d", &formaPagamento);

   switch (formaPagamento)
   {
   case 1:
      valorFinal = preco * 0.9;
      strcpy(forma,"à vista em dinheiro ou cheque → 10%% de desconto");
      break;
   case 2:
      valorFinal = preco * 0.925;
      strcpy(forma,"à vista no cartão de débito → 7,5%% de desconto");
      break;
   case 3:
      valorFinal = preco * 0.95;
      strcpy(forma,"à vista no cartão de crédito → 5%% de desconto");
      break;
   case 4:
      valorFinal = preco;
      strcpy(forma,"em duas vezes → preço normal de tabela sem juros");
      break;
   case 5:
      valorFinal = preco * 1.095;
      strcpy(forma,"em quatro vezes → preço normal de tabela mais juros de 9,5%%");
      break;
   
   default:
   printf("Escolhe uma forma de pagamento válida");
      break;
   }
   printf("Oa valor final é %.2f\n", valorFinal);
   printf("%s\n", forma);
   return 0;
}
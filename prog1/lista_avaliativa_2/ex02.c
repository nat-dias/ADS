/*Um armazém na cidade de Paracatu trabalha com 100 mercadorias diferentes identificadas pelos
números inteiros de 1 a 100. O dono do armazém anota a quantidade de cada mercadoria vendida
durante o mês. Ele tem uma tabela que indica, para cada mercadoria, o preço de venda. Escreva um
algoritmo para calcular o faturamento mensal do armazém. A tabela de preços é fornecida seguida
pelos números das mercadorias e as quantidades vendidas. Quando uma mercadoria não tiver
nenhuma venda, é informado o valor zero no lugar da quantidade.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int id, quant;
   float preco[100], faturamento;

   faturamento = 0;
   for (id = 1; id <= 100; id++)
   {
      printf("Digite a quantidade vendida da mercadoria n. %d: ", id);
      scanf("%d", &quant);

      printf("Agora digite o preco dessa mercadoria: ");
      scanf("%f", &preco[id - 1]);
      faturamento = faturamento + quant * preco[id - 1];

      printf("\n----------------------------------------------\n");
   }

   printf("Faturamento do armazem: %.2f", faturamento);
   printf("\n----------------------------------------------\n");

   return 0;
}
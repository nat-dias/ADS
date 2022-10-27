/*
Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas
a seguir, o novo preço e a classificação.

Tabela 1 – Percentual de Aumento
Preço                                        %
Até R$ 50,00                                 5
Entre R$ 50,00 e R$ 100,00 (inclusive)       10
Acima de R$ 100,00                           15

Tabela 2 – Classificações
Novo Preço                                   Classificação
Até R$ 80,00                                 Barato
Entre R$ 80,00 e R$ 120,00 (inclusive)       Normal
Entre R$ 120,00 e R$ 200,00 (inclusive)      Caro
Acima de R$ 200,00                           Muito caro
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
   float preco, novoPreco;
   char produto[55];
   printf("Digite o preco do produto\n");
   scanf("%f", &preco);

   if(preco <= 50 )
      novoPreco = preco * 1.05;
   else if (preco > 50 && preco <= 100) 
      novoPreco = preco * 1.1;
   else if (preco > 100)
      novoPreco = preco * 1.15;

   if (novoPreco <= 80)
      strcpy(produto,"Barato");
   else if (novoPreco > 80 && novoPreco <= 120)
      strcpy(produto,"Normal");
   else if (novoPreco > 120 && novoPreco <= 200)
      strcpy(produto,"Caro");
   else if (novoPreco > 200)
      strcpy(produto,"Muito caro");

   printf("O valor orignal e %.2f, o novo preco e %.2f e a classificacao do produto e %s", preco, novoPreco, produto); 

}
/*
Antes do racionamento de energia ser decretado, quase
ninguém falava em quilowatts. Mas agora, todos
incorporaram essa palavra em seu vocabulário. Sabendo-se
que 100 quilowatts de energia custa um sétimo do salário
mínimo, faça um algoritmo que receba o valor do salário
mínimo e a quantidade de quilowatts gasta por uma
residência e calcule:
a) O valor em reais de cada quilowatt
b) O valor em reais a ser pago
c) O novo valor a ser pago por essa residência com um
desconto de 10%
Imprima todos os resultados na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
   int kwatts, desconto;
   float valorKwatts, valor, valorComDesconto, salarioMin;
   printf("Informe o valor do salario minimo atual");
   scanf("%f", &salarioMin);
   printf("Agora informe a quantidade gasta de quilowatts");
   scanf("%d", &kwatts);
   valorKwatts = salarioMin/7;
   valor = kwatts * valorKwatts;
   valorComDesconto = valor * 0.9;
   printf("Cada quilowatts custa R$%f, o valor total a pagar e de R$%f e o valor final com desconto de 10%% e de %f", valorKwatts, valor, valorComDesconto);
   return 0;
}
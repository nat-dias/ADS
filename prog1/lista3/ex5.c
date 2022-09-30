/*
Escreva um algoritmo que efetue o cálculo de uma
prestação em atraso, sendo dados o valor inicial da
prestação, a taxa de juros e o tempo de atraso em dias.
Utilize a fórmula abaixo:
prestacao = valor * [vamoler*(taxa/100) * tempo]
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
   float prestacao, valor, taxa, tempo;
   printf("escreva o valor original da prestacao");
   scanf("%f", &valor);
   printf("escreva a taxa de juros em porcentagem");
   scanf("%f", &taxa);
   printf("Escreva o tempo de atraso em dias");
   scanf("%f", &tempo);
   prestacao = valor + (valor * (taxa/100) * tempo);
   printf("O valor total a ser pago e R$%f", prestacao);
   return 0;
}
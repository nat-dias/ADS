/*
Leia um valor em ponto flutuante com duas casas decimais. Este valor representa um valor
monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser
decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50,
0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas e moedas necessárias.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
   int n100, n50, n20, n10, n05, n02, m01, m050, m025, m010, m005, m001;
   double valor;
   printf("Digite um valor\n");
   scanf("%lf", &valor);
   int parteInteira = valor;
   int parteDecimal = (valor - parteInteira) * 100;

   if(parteDecimal%10>1) 
      parteDecimal = parteDecimal/10 + 1;
   else
   parteDecimal = parteDecimal/10;

   n100 = parteInteira / 100;
   parteInteira = parteInteira - n100*100;

   n50 = parteInteira / 50;
   parteInteira = parteInteira -n50*50;

   n20  = parteInteira / 20;
   parteInteira = parteInteira - n20*20;

   n10  = parteInteira / 10;
   parteInteira = parteInteira - n10*10;

   n05  = parteInteira / 5;
   parteInteira = parteInteira - n05*5;

   n02  = parteInteira / 2;
   parteInteira = parteInteira - n02*2;

   m01  = parteInteira;
   parteInteira = parteInteira - m01;

   m050  = parteDecimal / 50;
   parteDecimal = parteDecimal - m050*50;

   m025  = parteDecimal / 25;
   parteDecimal = parteDecimal - m025*25;

   m010  = parteDecimal / 10;
   parteDecimal = parteDecimal - m010*10;

   m005  = parteDecimal / 5;
   parteDecimal = parteDecimal - m005*5;

   m001  = parteDecimal / 1;
   parteDecimal = parteDecimal - m001*1;

   /*
   258,66
   258
   66
   
   258/100 = 2 => só guarda a parte inteira
   258 - 2*100 = 58
   */
   printf("O valor %.2f pode ser pago com %d notas de 100, %d notas 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2, %d moedas de 1 real, %d moedas 50 centavos, %d moedas de 25 centavos, %d moedas de 10centavos, %d moedas de 5 centave e %d moedas de 1 centavo ", valor, n100, n50, n20, n10, n05, n02, m01, m050, m025, m010, m005, m001);
   
   return 0;
}
/*
Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (azul, preto, verde e
castanho) e a cor dos cabelos (preto, castanho, louro e ruivo) de várias pessoas. O programa deve
calcular e exibir:
• a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg
• a média das idades das pessoas com altura inferior a 1,50 m
• a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas
• a quantidade de pessoas ruivas e que não possuem olhos azuis
O programa deve encerrar a entrada de dados quando uma idade igual a zero for inserida.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int contador, idade, cor_dos_olhos, cor_dos_cabelos, qnt_olhos_azuis, qnt_altura_baixa, qnt_50_mais, qnt_ruivas, mediap1, total_idade;

   float peso, altura, mediaazul;
   qnt_olhos_azuis = 0;
   qnt_altura_baixa = 0;
   qnt_50_mais = 0;
   qnt_ruivas = 0;
   total_idade = 0;
   mediaazul = 0;
   mediap1 = 0;

   for (contador = 1; contador <= 20; contador++)
   {
      printf("Digite a idade da pessoa\n");
      scanf("%i", &idade);

      if (idade == 0)
      return 0;

      printf("Digite a altura da pessoa\n");
      scanf("%f", &altura);

      printf("Digite o peso\n");
      scanf("%f", &peso);

      printf("Informe o código da cor dos olhos [Para Azul-1, preto-2, verde-3, castanho-4]\n");
      scanf("%i", &cor_dos_olhos);

      printf("Informe cor dos cabelos para 1-Preto ,2-castanho ,3-louro ,4-ruivo\n");
      scanf("%i", &cor_dos_cabelos);
   }
   // if (idade == 0)
   //    return Exit(0);
   // else
   // {
      if (idade > 50 && peso < 60)
      {
         qnt_50_mais += 1;
      }

      else if (altura < 1.5)
      {
         qnt_altura_baixa += 1;
         total_idade += idade;
         mediap1 = total_idade / qnt_altura_baixa;
      }

      else if (cor_dos_olhos == 1)
      {
         qnt_olhos_azuis += 1;
         mediaazul = (qnt_olhos_azuis / 20) * 100;
      }

      else
         (cor_dos_cabelos == 4 && cor_dos_olhos != 1);
      {
         qnt_ruivas += 1;
      }

      printf("\n quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos\n %i", qnt_50_mais);

      printf("\n média das idades das pessoas com altura inferior a 1,5 metro\n %f", mediap1);

      printf("\n percentagem de pessoas com olhos azuis entre todas as pessoas analisadas\n %f", mediaazul);

      printf("\n tidade de pessoas ruivas e que não possuem olhos azuis\n %i", qnt_ruivas);
  // }
   return 0;
}
/*
Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O monge,
necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com grãos de
trigo dispostos em um tabuleiro de xadrez, de tal forma que o primeiro quadro deveria conter
apenas um grão e os quadros subsequentes, o dobro do quadro anterior. A rainha achou o trabalho
barato e pediu que o serviço fosse executado, sem se dar conta de que seria impossível efetuar o
pagamento. Faça um algoritmo para calcular o número de grãos que o monge esperava receber.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int graos, casa;
   casa = 1;
   graos = 1;
   for (casa; casa <= 64 && graos > 0; casa++)
   {
      graos = graos * 2;
      printf("%d\n", graos);
   }
   return 0;
}
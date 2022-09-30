/*
Escreva um algoritmo que leia os valores dos catetos de um
triângulo retângulo e mostre qual é o valor da hipotenusa
desse triângulo.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
   int cat1, cat2, hip;
   printf("Digite o valor do cateto 1");
   scanf("%d", &cat1);
   printf("Digite o valor do cateto 2");
   scanf("%d", &cat2);
   hip = (cat1*cat1 + cat2*cat2)/(cat1*cat1 + cat2*cat2); //como montar essa operção?
   printf("A resposta é %d", hip);

   return 0;
}
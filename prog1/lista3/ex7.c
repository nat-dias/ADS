/*
Escreva um programa para ler o nome e o sobrenome de
uma pessoa e escrevê-los de duas formas diferentes:
a) Nome e sobrenome
b) Sobrenome seguido por uma vírgula e pelo nome.
Exemplo:
Entrada: "Antonio","Soares"
Saída: Antonio Soares
Soares, Antonio
*/

#include <stdio.h>
#include <stdlib.h> 

int main() {
   char nome[55], sobrenome[55];
  printf("Escreva seu nome\n");
  scanf("%s", &nome);
  printf("\nEscreva seu sobrenome\n");
  scanf("%s", &sobrenome);

  printf("\n'%s', '%s'\n", nome, sobrenome);
  printf("\n%s, %s", sobrenome, nome);


   return 0;
}
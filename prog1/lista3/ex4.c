/*
Crie um algoritmo para calcular e apresentar o valor do
volume de uma lata de óleo, utilizando a fórmula:
V = 3.14159 . R^2 . h
onde V é o volume, R é o raio e h é a altura.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
   float volume, raio, altura;
   printf("para saber o volume da lata deoleo, escreva o tamanho do raio");
   scanf("%f", &raio);
   printf("Agora escreva a altura");
   scanf("%f", &altura);
   volume = 3.14159 * raio*raio * altura;
   printf("O volume é %f ", volume);
}
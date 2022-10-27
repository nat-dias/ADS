/*
Faça um programa que receba o número de horas trabalhadas por um funcionário, o valor do salário
mínimo e o número de horas extras trabalhadas por este funcionário. O programa deverá calcular
e mostrar o salário a receber, de acordo com as regras a seguir:

a) A hora trabalhada vale 1/8 do salário mínimo;
b) A hora extra vale 1/4 do salário mínimo;
c) O salário base equivale ao número de horas trabalhadas multiplicado pelo valor da hora
trabalhada;
d) A quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas
multiplicado pelo valor da hora extra;
e) O salário bruto equivale a soma do salário base e a quantia a receber pelas horas extras;
f) O imposto equivale a 8,5% do salário bruto;
g) O salário líquido a receber equivale ao salário bruto menos o valor do imposto.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
   float horasTrab, salarioMin, horasExtras, valorHoraTrab, valorHoraExtra, salarioBase, extra, bruto, imposto, liquido;
   printf("Escreva, nessa ordem, o numero de horas trabalhadas pelo funcionario, o valor do salario minimo vigiente e o numero de horas extras trabalhadas\n");
   scanf("%f%f%f", &horasTrab, &salarioMin, &horasExtras);
   valorHoraTrab = salarioMin/8;
   valorHoraExtra = salarioMin/4;
   salarioBase = horasTrab * valorHoraTrab;
   extra = horasExtras * valorHoraExtra;
   bruto = salarioBase + extra;
   imposto = bruto * 0.085;
   liquido = bruto - imposto;

   printf("O salario que o funcionario deve receber e %f", liquido);

   return 0;
}
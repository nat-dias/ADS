/*
Elabore um algoritmo que a partir da idade e peso do paciente calcule a dosagem de determinado
medicamento e imprima a receita informando quantas gotas do medicamento o paciente deve
tomar por dose. Considere que o medicamento em questão possui 500 mg por ml, e que cada ml
corresponde a 20 gotas.
✓ Adultos ou adolescentes desde 12 anos, inclusive, se tiverem peso igual ou acima de 60 quilos
devem tomar 1000 mg; com peso abaixo de 60 quilos devem tomar 875 mg.
✓ Para crianças e adolescentes abaixo de 12 anos a dosagem é calculada pelo peso corpóreo,
conforme a tabela a seguir:

1ml = 500mg = 20gts
Peso Dosagem
5 kg  < peso ≤ 9 kg 125 mg
9 kg  < peso ≤ 16 kg 250 mg
16 kg < peso ≤ 24 kg 375 mg
24 kg < peso ≤ 30 kg 500 mg
peso  ≥ 30 kg 750 mg
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int age, dose, drops;
   float wheight;
   char pacient[75];
   printf("Qual o nome do paciente?\n");
   scanf("%s", &pacient);

   printf("Qual a idade do paciente?\n ");
   scanf("%d", &age);

   printf("Qual o peso do paciente em Kg?\n");
   scanf("%f", &wheight);

   if (age >= 12)
   {
      if (wheight >= 60.0)
         dose = 1000;
      else
         dose = 875;
   }
   else
   {
      if (wheight > 5 && wheight <= 9)      
         dose = 125;
      else if (wheight > 9 && wheight <= 16)      
         dose = 250;
      else if (wheight > 16 && wheight <= 24)      
         dose = 375;
      else if (wheight > 24 && wheight <= 30)
         dose = 500;
      else if (wheight > 30)
         dose = 750;
      else      
         printf("Por favor, reavalie as informações do paciente");
   };

   drops = dose * 20 / 500;
   printf("%s tomara %d gotas de ibuprofeno 500ml -  2 vezes ao dia - se dor", pacient, drops);

   return 0;
}
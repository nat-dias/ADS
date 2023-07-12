#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "structs.c"

float saldo_final (cadastro *evento)
{
    float saldo=0;
    int i;

    i=0;
    while(evento[i].id!=0)
    {
        saldo += evento[i].lucro;
        i++;
    }
    return saldo;
}

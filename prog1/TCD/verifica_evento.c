#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "structs.c"

int verifica_evento (cadastro *evento, int identificador)
{
    int i;

    for(i=0; i<100; i++)
    {
        if(identificador == evento[i].id)
        {
            return i;
        }
        if(evento[i].id==0)
        {
            return i;
        }
    }
}

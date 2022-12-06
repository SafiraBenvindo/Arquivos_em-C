#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora;

    printf("digite qualquer hora do dia: \n");
    scanf("%d", &hora);

    if(hora<12)
    {
        printf("bom dia!\n");
    }
    else
    {
        printf("boa tarde! \n");

    }


    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#define CANT 5
//SE PUEDE CAMBIAR EL VALOR DE DEFINE CANT

void main(void)
{
    int v[CANT],i;
    for (i=0;i<CANT;i++)
    {
        printf("Ingrese valor a cargar en el vector: ");

        scanf("%d",&v[i]);
    }
    for(i=0;i<CANT;i++)
    {
        printf("\n%d",v[i]);
    }
}

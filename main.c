#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{
    int legajo[CANT],edad[CANT],i;
    float sueldo [CANT];

    for (i=0; i<CANT; i++)
    {
        legajo[i]=i+1;

        printf("\nEdad: ");
        scanf("%d", &edad[i]);

        printf("\nSueldo: ");
        scanf("%f", &sueldo[i]);

    }
    printf("\nLegajo\tEdad\tSueldo");
    for (i=0; i<CANT; i++)
    {
        printf("\n%d\t%d\t%f",legajo[i],edad[i],sueldo[i]);
    }
    return 0;
}

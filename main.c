#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define CANT 2
int main()
{
    char nombre[CANT][31]; //matriz de caracteres. //el primer vector es la cantidad de nombres, el segundo la cantidad  de caracteres que puede tener cada nombre
    int legajo [CANT];
    float salario[CANT];
    int i;

    for(i=0;i<CANT;i++)
    {
        system("cls");

        printf("legajo : ");
        scanf("%d", &legajo[i]);
        printf("nombre : ");
        fflush(stdin);
        scanf("%s" ,nombre[i]);
        //gets(nombre[i]);

        printf("salario : ");
        scanf("%f", &salario[i]);

    }
    for(i=0;i<CANT;i++)
    {
        printf("\n%d\t%s\t\t\t%.2f", legajo[i], nombre[i], salario[i]);
    }



return 0;

}

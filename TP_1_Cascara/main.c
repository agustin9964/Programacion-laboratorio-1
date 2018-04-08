#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numeroA=0;
    float numeroB=0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%2.f)\n",numeroA);
        printf("2- Ingresar 2do operando (B=%2.f)\n",numeroB);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese el numero A : ");
                scanf("%f", &numeroA);
                system("cls");
                break;
            case 2:
                printf("Ingrese el numero B : ");
                scanf("%f", &numeroB);
                system("cls");
                break;
            case 3:
                suma(numeroA,numeroB);
                printf("Suma : %2.f \n",suma(numeroA,numeroB));
                system("pause");
                system("cls");
                break;
            case 4:
                resta(numeroA,numeroB);
                printf("Resta : %2.f \n",resta(numeroA,numeroB));
                system("pause");
                system("cls");
                break;
            case 5:
                division(numeroA,numeroB);
                if(numeroB==0)
                {
                    printf("Error!\n");
                    system("pause");
                    system ("cls");
                }
                else
                {
                    division(numeroA,numeroB);
                    printf("Division : %f \n",division(numeroA,numeroB));
                    system("pause");
                    system("cls");
                }
                break;
            case 6:
                multiplicacion(numeroA,numeroB);
                printf("Multiplicacion : %2.f \n",multiplicacion(numeroA,numeroB));
                system("pause");
                system("cls");
                break;
            case 7:
                factorial(numeroA);
                system("pause");
                system("cls");
                break;
            case 8:
                suma(numeroA,numeroB);
                printf("Suma : %2.f \n",suma(numeroA,numeroB));
                resta(numeroA,numeroB);
                printf("Resta : %2.f \n",resta(numeroA,numeroB));
                division(numeroA,numeroB);
                 if(numeroB==0)
                    printf("Error!\n");
                else
                {
                    division(numeroA,numeroB);
                    printf("Division : %f \n",division(numeroA,numeroB));
                }
                multiplicacion(numeroA,numeroB);
                printf("Multiplicacion : %2.f \n",multiplicacion(numeroA,numeroB));
                factorial(numeroA);
                system("pause");
                system("cls");
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}

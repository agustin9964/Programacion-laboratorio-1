#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int numeroA=0;
    int numeroB=0;
    int resultado;
    float resultadoDivision;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
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
                scanf("%d", &numeroA);
               system("pause");
                system("cls");
                break;
            case 2:
                printf("Ingrese el numero B : ");
                scanf("%d", &numeroB);
                system("pause");
                system("cls");
                break;
            case 3:
                resultado=sumar(numeroA, numeroB);
                printf("Suma : %d \n",resultado);
                system("pause");
                system("cls");
                break;
            case 4:
                resultado=restar(numeroA, numeroB);
                printf("Resta : %d \n",resultado);
                system("pause");
                system("cls");
                break;
            case 5:
                resultadoDivision= dividir(numeroA, numeroB);
                if(numeroB==0)
                {
                    printf("Error\n");
                    system("pause");
                    system("cls");
                }
                else
                {
                    printf("Division : %f \n",resultadoDivision);
                    system("pause");
                    system("cls");
                }
                break;
            case 6:
                resultado=multiplicar(numeroA, numeroB);
                printf("Multiplicacion: %d \n",resultado);
                system("pause");
                system("cls");
                break;
            case 7:
                resultado=factorial(numeroA);
                printf("Factorial : %d \n",resultado);
                system("pause");
                system("cls");
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }
        printf("X= %d\n",numeroA);
        printf("Y= %d\n",numeroB);


    }
    return 0;
}

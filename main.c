#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
    {
        char nombre[20];
        int legajo;
        float sueldo;
        char sexo;
    }eEmpleado;

void mostrarEmpleado(eEmpleado);

int main()
{
    //eEmpleado unEmpleado;
    eEmpleado unEmpleado={"Juan",1111,1000.75,'m'}; //HARDCODEO, TIENE QUE RESPETAR EL ORDEN DE LA DECLARACION
    //eEmpleado otroEmpleado; se copio y se igualo otroEmpleado a unEmpleado
    //otroEmpleado=unEmpleado;

   /* unEmpleado.legajo=1234;
    strcpy(unEmpleado.nombre,"Juan"); //se tiene que hacer un string copy para copiar una cadena.
    unEmpleado.sueldo=50000.50;
    unEmpleado.sexo='m';*/

    /*printf("Nombre: \n");
    gets(unEmpleado.nombre);
    printf("Legajo: \n");
    scanf("%d", &unEmpleado.legajo);
    printf("Sueldo: %\n");
    scanf("%2.f", &unEmpleado.sueldo);
    printf("Sexo: \n");
    fflush(stdin);
    scanf("%c", &unEmpleado.sexo);*/ //Tipo larga, donde el usuario ingresa los datos

    mostrarEmpleado(unEmpleado);
}
void mostrarEmpleado(eEmpleado emp)
{
    printf("Nombre: %s\n", emp.nombre);
    printf("Legajo: %d\n", emp.legajo);
    printf("Sueldo: %.2f\n", emp.sueldo);
    printf("Sexo: %c \n", emp.sexo);
}



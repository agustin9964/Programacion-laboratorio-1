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
void mostrarEmpleados(eEmpleado[], int);
void ordenarEmpleados(eEmpleado[],int);

int main()
{
    //eEmpleado unEmpleado;
    eEmpleado plantel[] ={{"Juan",1111,1000.75,'m'},{"Ana",2222,2000.40,'f'},{"Luis",3333,3000.55,'m'}}; // HARDCODEO EN VECTORES
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

    mostrarEmpleados(plantel, 3);
    ordenarEmpleados(plantel, 3);

}
void mostrarEmpleado(eEmpleado emp)
{
    printf("Nombre: %s\n", emp.nombre);
    printf("Legajo: %d\n", emp.legajo);
    printf("Sueldo: %.2f\n", emp.sueldo);
    printf("Sexo: %c \n", emp.sexo);
}
void mostrarEmpleados(eEmpleado vec[], int tam)
{
    for(int i=0; i<tam ; i++)
    {
        mostrarEmpleados(vec[i]);
    }
}
void ordenarEmpleados(eEmpleado vec[],int tam)
{
    eEmpleado aux;
    for(int i=0; i<tam-1; i++)
    {
        for (int j=i+1;j<tam;j++)
        {
            if(strcmp(vec[i].nombre, vec[j],nombre)>0)
            {
                aux= vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }


}

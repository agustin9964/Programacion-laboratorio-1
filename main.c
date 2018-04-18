#include <stdio.h>
#include <stdlib.h>
#define CANT 2
#include <string.h>

/* char n1[30]="jose";
    char n2[30];
    n2=n1 ESTA MAL
    for(i=0;i<30;i++)
    {
        n2[i]=n1[i];
    } TAMPOCO ES VALIDA. SOLO STRING COPY
    strcpy(n2,n1); SE TIENE QUE USAR STRING COPY*/

typedef struct
{
    int dia,mes,anio;

}eFecha; //la e minuscula indica ESTRUCTURA
typedef struct
{
    char nombre[21];
    int legajo;
    float sueldo;
    char sexo;
    eFecha fechaNacimiento; //llamo a la estructura eFecha.
}eEmpleado;


int main()
{
   // eEmpleado empleado; EN CASO DE SER CADENA

    /*printf("Nombre: \n");
    gets(empleado.nombre);  //para llamar a la estructura de eEmpleado la funcion NOMBRE
    printf("Legajo: \n");
    scanf("%d", &empleado.legajo);
    printf("Sueldo: \n");
    scanf("%f", &empleado.sueldo);
    printf("Sexo: \n");
    fflush(stdin);
    scanf("%c", &empleado.sexo);
    printf("Dia: \n");
    scanf("%d", &empleado.fechaNacimiento.dia); //LLAMA A LA ESTRUCTURA eEMPLEADO y dentro llama a eFECHA que, toma el dato DIA
    printf("Mes: \n");
    scanf("%d", &empleado.fechaNacimiento.mes); */ //EN CASO DE SER CADENA

    eEmpleado empleado[CANT];//={{"Juan",1111,1000.75,'m',10,5,1969},{"Ana",2222,2000.40,'f',4,11,1972}};
    eEmpleado aux; //EN CASO DE SER VECTOR


    for(int i=0;i<CANT-1;i++)
    {
        for(int j=i+1;j<CANT;j++)
        {
            if(empleado[i].sueldo< empleado[j].sueldo) //TIENE QUE SER MENOR, PARA QUE SE PUEDA SOPPEAR Y QUEDE ORDENADO DE MAYOR A MENOR.
            {
                aux=empleado[i];
                empleado[i]=empleado[j];
                empleado[j]=aux;
            }
            else
            {
                if(empleado[i].sueldo==empleado[j].sueldo)
                {
                    if(strcmp(empleado[i].nombre,empleado[j].nombre)>0) //PARA COMPARAR CADENAS Y ORDENAR POR SEGUNDO CRITERIO POR NOMBRE
                    {
                        aux=empleado[i];
                        empleado[i]=empleado[j];
                        empleado[j]=aux;
                    }
                }
            }
        }
    }
    return 0;

}

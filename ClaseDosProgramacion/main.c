#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    /*Realizar el algoritmo que permita el ingreso por prompt de las notas (validar entre 0 y 10),
    la edad y el sexo (validar el sexo “f” o “m”) de 5 alumnos, informar por alert:
a) El promedio de las notas totales.
b) La nota más baja y el sexo de esa persona.
c) La cantidad de varones mayores a 18, que su nota haya sido mayor o igual a 6.
d) El sexo y la nota del más joven
e) La edad y la nota de la primera mujer ingresada o informar si no hubo ninguna mujer.*/
   int notas;
   int edad;
   char sexo;
   float promedio;
   int suma=0;
   int notaMasBaja;
   char sexoMasBajo;
   int CantidadVarones18notaMayor6=0;
   int edadMinima;
   char sexoDelMinimo;
   int notaDelMinimo;
   int contadorMujeres=0;
   int edadPrimerMujer;
   int notaPrimerMujer;

   int i=1;

   for(i=1;i<6;i++)
   {

//Pedir y validar!
       printf("Ingrese la NOTA del alumno numero %d:\n ",i);
       fflush(stdin);
       scanf("%d",&notas);
        while(notas<0||notas>10)
       {
            printf("ERROR!Ingrese la nota del alumno numero %d:\n ",i);
            scanf("%d",&notas);
       }
        suma=suma+notas;

       printf("Ingrese la EDAD del alumno numero %d:\n ",i);
       fflush(stdin);
       scanf("%d",&edad);
        while(edad<=0||edad>100)
       {
            printf("ERROR!Ingrese la EDAD del alumno numero %d:\n ",i);
            fflush(stdin);
            scanf("%d",&edad);
       }

       printf("Ingrese el SEXO (Con F o M) del alumno numero %d:\n ",i);
       fflush(stdin);
       scanf("%c",&sexo);
       sexo = tolower(sexo);
        while(sexo != 'm' && sexo != 'f')
       {
            printf("ERROR!Ingrese el SEXO (con F o M) del alumno numero %d:\n ",i);
            scanf("%c",&sexo);
       }


//Actividades!
//B)
    if(i==0)
    {
        notaMasBaja=notas;
        sexoMasBajo=sexo;
    }
    else
    {
        if(notas < notaMasBaja)
        {
            notaMasBaja=notas;
            sexoMasBajo=sexo;
        }
    }
//C)
    if(notas >=6 && edad >=18 && sexo == 'm')
    {
        CantidadVarones18notaMayor6++;
    }
//D)
    if(i==0)
    {
        edadMinima = edad;
        notaDelMinimo = notas;
        sexoDelMinimo = sexo;
    }
    else
    {
        if(edad < edadMinima)
        {
            edadMinima = edad;
            notaDelMinimo = notas;
            sexoDelMinimo = sexo;
        }
    }
//E)
    if(sexo == 'f' && contadorMujeres == 0)
    {
        notaPrimerMujer = notas;
        edadPrimerMujer = edad;
        contadorMujeres++;
    }





}//FOR

//A)
promedio = (float)suma / 5;

//Muestro
printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
printf("\nPromedio de las notas totales: %.2f\n", promedio);
printf("\nLa nota mas baja fue: %d, y su sexo es: %c\n", notaMasBaja,sexoMasBajo);
printf("\nLa cantidad de varones mayores a 18, que su nota haya sido mayor a 6 es: %d\n",CantidadVarones18notaMayor6);
printf("\nEl sexo del mas alumno mas joven es: %c, y su nota es: %d\n",sexoDelMinimo,notaDelMinimo);

if(contadorMujeres == 0)
        {
            printf("No hay mujeres");
        }
        else
        {
            printf("La edad de la primer mujer ingresada es: %d, y su nota es: %d\n",edadPrimerMujer,notaPrimerMujer);
        }

    return 0;
}

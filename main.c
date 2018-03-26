#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{

    /*Realizar el algoritmo que permita el ingreso por prompt de las notas (validar entre 0 y 10),la edad y el sexo (validar el sexo “f” o “m”) de 5 alumnos, informar por alert:
a) El promedio de las notas totales.
b) La nota más baja y el sexo de esa persona.
c) La cantidad de varones mayores a 18, que su nota haya sido mayor o igual a 6.
d) El sexo y la nota del más joven
d) La edad y la nota de la primera mujer ingresada o informar si no hubo ninguna mujer.*/

   int notas;
   char sexo;
   int edad;
   float promedio=0;
   int notaBaja;
   char sexoBajo;
   int i;
   int contVaronesMas18=0;
   int edadMinimo;
   int sexoMinimo;
   int notaMinimo;
   int acumulador=0;
   int contadorMujer=0;
   int edadPrimerMujer;
   int notaPrimerMujer;




   for(i=0;i<5;i++)
   {


       printf("Ingrese la nota del alumno: ");

       scanf("%d",&notas);
       while(notas<0||notas>10)
       {
           printf("Error!! Ingrese la nota del alumno: ");

            scanf("%d",&notas);

       }
       printf("Ingrese el sexo del alumno, f si es mujer, m si es hombre: ");

       fflush(stdin);

       scanf("%c",& sexo);
       sexo=tolower(sexo);


       while(sexo!='m'&&sexo!='f')
       {
            printf("Ingrese el sexo del alumno, f si es mujer, m si es hombre: ");

            fflush(stdin);

            scanf("%c",& sexo);

            sexo=tolower(sexo);

       }


        printf("Ingrese la edad del alumno: ");
        scanf("%d", &edad);
        while(edad<0||edad>100)
        {
            printf("Ingrese la edad del alumno: ");
            scanf("%d", &edad);

        }

        acumulador=acumulador+notas;

       if(i==0)
       {
           notaBaja=notas;



       }
       else
        {
            if(notas<notaBaja)
            {
                notaBaja=notas;
                sexoBajo=sexo;

            }

        }

        if(i==0)
        {
            notaMinimo=notas;
            sexoMinimo=sexo;
            edadMinimo=edad;
        }
        else
        {
            if(edad<edadMinimo)
            {
                edadMinimo=edad;
                sexoMinimo=sexo;
                notaMinimo=notas;
            }

        }
        if(sexo=='m'&edad>=18&&notas>=6)
        {
            contVaronesMas18++;
        }
        if(sexo=='f'&&contadorMujer==0)
        {
            edadPrimerMujer=edad;
            notaPrimerMujer=notas;
            contadorMujer++;
        }


   }

  promedio=(float)acumulador/5;

    printf("\n El promedio de notas es de :%f ",promedio);
    printf("\n La nota mas baja es: %d y el sexo de esa persona es de :%c",notaBaja,sexoBajo);
    printf("\n La cantidad de varones mayores a 18 con nota mayor a 6 es de :%d",contVaronesMas18);
    printf("\n El sexo de la persona mas joven es: %c y su nota fue :%d",sexoMinimo,notaMinimo);

    if(contadorMujer==0)
    {
        printf("\n No hubo mujeres ingresadas");
    }
    else
        {
            printf("\n La edad de la primer mujer es de :%d y su nota fue :%d ",edadPrimerMujer,notaPrimerMujer);
        }











}

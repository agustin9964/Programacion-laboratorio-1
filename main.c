#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//
/*void funcion (int x[],int tam);
void funcionDos (char int[][20],int filas); //se necesita pasar la cantidad de caracteres
                                            //para que pueda cortar el vector en esa cantidad de caracteres*/

void miFuncion (char[][20],int);
int main()
{
   char nombres [5][20]={"jUan CARLOS","aNa","RobErTo dENIS pErez","RoQuE sANTa CRUZ"};
   miFuncion(nombres,5);


}

void miFuncion(char vec[][20],int filas) //como pasar una matriz como parametro, recorrerla por filas y mostrarla.
{
    for (int i=0;i<filas;i++)
    {
        strlwr(vec[i]);
        for (int k=0;k<20;k++)// esto sirve para que en caso de que haya un espacio, se ponga en mayusculas despues del espacio.
        {
            if(vec[i][k]==' ')
            {
                vec[i][k+1]=toupper(vec[i][k+1]);
            }
        }//para que haga plancha y sean todas minusculas en las filas de la matriz
        vec[i][0]=toupper(vec[i][0]); //para que todos empiecen con mayuscula
        printf("%s\n", vec[i]);
    }
}

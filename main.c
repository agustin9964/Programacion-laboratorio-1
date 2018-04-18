#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// VALIDAR QUE SEA UN NUMERO.
int main()
{
   char dato[15];
   int flag=0,nro;

   printf("Ingrese numero: ");
   fflush(stdin);
   scanf("%s", dato);
   for (int i=0; i<strlen(dato);i++)
   {
       if(!isdigit(dato[i])) //BUSCA UN NUMERO, SI ESTA NEGANDO BUSCA ALGO QUE NO SEA UN NUMERO si es un digito devuelve 1 en caso normal
       {
           flag=1; //EL FLAG TRANSFORMADO A 1 IMPLICA QUE ENCONTRO UN DATO QUE NO ES UN NUMERO
           break;
       }
   }
   if(flag==0)
   {
       nro;atoi(dato);
   }
}

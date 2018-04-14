#include <string.h>

int buscarLibre(int id[],int t)
{
  int index= -1; //sirve para buscar un espacio libre.
  int i;
    for(i=0;i<t;i++)
    {
        if(id[i]==0)
        {
            index=i;
            break;
        }
    }


  return index; // for(int i=0;i<)
}
void mostrarProductos (int idProducto[],char descripcion[][50],int stock[],float precioUnitario[],int cant)
{
    int i;
    printf("%5s %20s %s\n", "id","descripcion","stock","precio");

    for(i=0;i<cant;i++)
            {
                if(idProducto[i]!=0)
                {
                    printf("%5d %20s %5d %.2f\n",idProducto[i], descripcion[i],stock[i],precioUnitario[i]);
                }
            }
}
void ordenar (int idProducto[],char descripcion[][50],int stock[],float precioUnitario[],int cant)
{
    int auxInt;
    float auxFloat;
    char auxString[50];
    int i;
    int j;
    for(i=0; i<cant-1; i++) //BURBUJEO
    {
        for(j=i+1;j<cant;j++)
        {
            if(strcmp(descripcion[i],descripcion[j])>0)
            {
                strcpy(auxString,descripcion[i]);
                strcpy(descripcion[i],descripcion[j]);
                strcpy(descripcion[j],auxString);

                auxInt=idProducto[i];
                idProducto[i]=idProducto[j];
                idProducto[j]=auxInt;

                auxFloat


            }

        }
    }

}

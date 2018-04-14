#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 5 // es una directiva del precompilador, no una constante

//menu
//1-cargar
//2-mostrar
//3-ordenar
           //1-pedir la posicion
            //2-pedir el dato
            //3-preguntar si quiere cargar otro

int main()
{
   int idProducto[TAM]={};
   char descripcion[TAM][30];
   int stock[TAM];
   float precioUnitario[TAM];
   int opcion,i;
   int posicion;
   char seguir;

    do
    {
        printf("\n1-Cargar \n2-Mostrar \n3-Ordenar\n4-Salir \n");
        printf("\nIngrese una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
                posicion=buscarLibre(idProducto,TAM);
                if(posicion!=-1)
                {
                printf("\nIngrese ID: ");
                scanf("%d", &idProducto[posicion]);
                printf("\nIngrese Descripcion: ");
                fflush(stdin);
                scanf("%[^\n]", descripcion[posicion]);
                printf("\nIngrese Stock: ");
                scanf("%d", &stock[posicion]);
                printf("\nIngrese precio Unitario: ");
                scanf("%f", &precioUnitario[posicion]);
                printf("Desea continuar? (s/n): \n\n");
                fflush(stdin);
                seguir=getch();
                }
                else
                {
                    printf("\n No hay espacio");
                }
            break;
        case 2:
            printf("Listado:\n");
            mostrarProductos(idProducto,descripcion,stock,precioUnitario,posicion);
            //mostrar cada vector paralelo
            break;
        case 3:
            break;
        case 4:
            opcion==9;
            break;
        }
      system("pause");
      system("cls");
    }while(opcion!=9);


}

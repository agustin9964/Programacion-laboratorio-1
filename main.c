#include <stdio.h>
#include <stdlib.h>
int sumar(int a,int b);
int main()
{
    int sum;
    int x;
    int y;
    x=43;
    y=1;
    sum= sumar(x,y);

    printf("la suma es de %d",sum);



}
int sumar (int a, int b)
{
    int resultado;
    resultado=a+b;
    return resultado;

}

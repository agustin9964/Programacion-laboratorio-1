#include<stdio.h>
int sumar(int a, int b)
{
    int resultado;
    resultado=a+b;
    return resultado;
}
int restar(int a, int b)
{
    int resultado;
    resultado=a-b;
    return resultado;
}
float dividir (float a, float b)
{
    float resultado;
    resultado=a/b;
    return resultado;
}
int multiplicar(int a , int b)
{
    int resultado;
    resultado=a*b;
    return resultado;
}
/*int factorial(int a)
{
    int i;
    int resultado=1;
    if(a<0)
    {
        printf("Error ");
    }

    else{
        for(i=1;i<a;i++)
        resultado=resultado*i;
        return resultado;
    }


}*/
int factorial(int a)
{
    int i;
    int resultado=1;

    if(a<0)
    {
        printf("Error");
    }
    else
    {
        for(i=1;i<=a;i++)
        {
            resultado= resultado * i;

        }
          return resultado;
    }

}


float suma(float a, float b)
{
    float resultado;
    resultado=a+b;
    printf("Suma : %2.f \n",resultado);
    return resultado;
}
float resta(float a, float b)
{
    float resultado;
    resultado=a-b;
    printf("Resta : %2.f \n",resultado);
    return resultado;
}
float division(float a, float b)
{
    float resultado;
    resultado=a/b;
    return resultado;

}
float multiplicacion(float a, float b)
{
    float resultado;
    resultado=a*b;
    printf("Multiplicacion : %2.f \n",resultado);
    return resultado;
}

int factorial(float a)
{
    int AuxiliarA=(int)a;
    int resultado=1;
    if(a<0)
    printf("No se puede hacer factorial de un numero negativo\n");
     else if(a!=AuxiliarA)
    printf("No se puede hacer el factorial de un numero decimal\n");
    else
    {
        for(int i=1; i<=(int)a; i++)
        {
            resultado *= i;
        }
        printf("El factorial de A es: %d \n ", resultado);
    }
}



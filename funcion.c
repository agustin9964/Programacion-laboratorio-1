void ordenar(int vec[],int tam,int criterio)
{
  int i,j,aux;
  for(i=0;i<tam-1;i++)
  {
      for(j=i+1;j<tam;j++)
      {
          if(vec[i]>vec[j] &&criterio==0)
          {
            aux=vec[i];
            vec[i]=vec[j];
            vec[j]=aux;
          }
          if(vec[i]<vec[j] &&criterio==1)
          {
            aux=vec[i];
            vec[i]=vec[j];
            vec[j]=aux;
          }
      }
  }
}
/** \brief ordena un vector de enteros de acuerdo al criterio
 *
 * \param vector que quiero ordenar
 * \param tamanio del vector
 * \param criterio de ordenamiento 0 para ascendente, 1 para descendente
 *
 */


void mostrarVector(int vec[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d ", vec[i]);
    }



}

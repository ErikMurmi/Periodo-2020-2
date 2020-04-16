/*
inicializar
condicion
incremento

entrada
entero cont=1 par=0 n

proceso
blabla

salida
par
*/
#include <stdio.h>
void main()
{
  int cont=1,par=0,n;
  printf("Ingresa: ");
  scanf("%i",&n);
  while (cont<=n)
  {
    par=par+2;
    printf("%i\n",par);
    cont=cont+1;
  }
}

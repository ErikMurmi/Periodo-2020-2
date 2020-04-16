#include <stdio.h>
void main()
{
  int num,cant,cont,resultado;
  printf("Ingrese el numero: ");
  scanf("%i",&num);
  printf("Ingrese el limite: ");
  scanf("%i",&cant);
  for (cont=1; cont<=cant; cont++)
  {
    resultado=num*cont;
    printf("%iX%i= %i\n",num,cont,resultado);
  }
}

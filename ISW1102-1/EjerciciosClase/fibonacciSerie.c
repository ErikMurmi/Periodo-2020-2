#include <stdio.h>
int fibonacci(int);
int main()
{
  int cant;
  printf("Ingresa la cantidad de numeros: ");
  scanf("%d",&cant);
  while(cant<=0 )
  {
    printf("ERROR: Ingrese un numero entero mayor a 0:");
    scanf("%d",&cant);
  }
  printf("La suma es %d",fibonacci(cant));
}

int fibonacci(int cant)
{
  int num1=0,num2=1,num3=0,i=1,suma=0;
  while(i<=cant)
  {
    num1=num2+num3;
    num2=num3;
    num3=num1;
    printf("%d\n",num1);
    suma=suma+num1;
    i++;
  }
  return suma;
}

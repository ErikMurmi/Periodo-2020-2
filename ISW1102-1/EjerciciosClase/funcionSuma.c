/*
1) define libreria
2) prototipo de funciones
3) llamada a main()
4) implementar funcion
*/
#include <stdio.h>
int sumaNumeros(int,int);
int factorial(int);
void tablaMult(int,int);
void main()
{
  int num1,num2;
  printf("Ingresa num1: ");
  scanf("%d",&num1);
  printf("Ingresa num2: ");
  scanf("%d",&num2);
  printf("la suma es %d\n",sumaNumeros(num1,num2));
  printf("el factorial es %d\n",factorial(num1));
  tablaMult(num1,num2);
}
int sumaNumeros(int n1,int n2)
{
  int resultado=0;
  resultado=n1+n2;
  return resultado;
}
int factorial(int n)
{
  int fact=1,i=1;
  while(i<=n)
  {
    fact=fact*i;
    i++;
  }
  return fact;
}
void tablaMult(int tabla,int lim)
{
  int mul=1,i;
  for (i=1;i<=lim;i++)
  {
    mul=tabla*i;
    printf("%d X %d = %d\n",tabla,i,mul);
  }
}

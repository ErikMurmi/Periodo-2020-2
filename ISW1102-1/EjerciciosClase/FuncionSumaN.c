/******************************************************************************

Crear un programa que determine el factorial de un numero
5!=120
1*2*3*4*5

Pasos para usar funciones

1. Definir las librerias
2. Definicion de la funcion
3. LLamada a la funcion en funcion main()
4. Implementacion de la funion

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int factorial(int);
void tablaMult(int,int);
void sumaN(int);
void main()
{
  int num,limite,op,cantNum;
  while(op!=4)
  {
    printf("1.Factorial\n2.Tabla de Multiplicar\n3.Suma\n4.Salir\n");
    printf("Escoja una opcion:");
    scanf("%d",&op);

    switch(op)
    {
      case 1:
      printf("Ingrese el numero:");
      scanf("%d",&num);
      while(num<0 )
      {
        printf("Ingrese un numero positivo:");
        scanf("%d",&num);
      }
      printf("El factorial de %d es %d\n",num,factorial(num));
      break;
      case 2:
      printf("Ingrese la tabla a multiplicar:");
      scanf("%d",&num);
      printf("Ingrese el limite:");
      scanf("%d",&limite);
      tablaMult(num,limite);
      break;
      case 3:
      printf("Ingrese la cant de numeros a sumar: ");
      scanf("%d",&cantNum);
      while(cantNum<0 )
      {
        printf("ERROR: Ingrese un numero positivo:");
        scanf("%d",&cantNum);
      }
      sumaN(cantNum);
      break;
      case 4:
      exit(0);
      break;
    }
  }


}

int factorial(int numero)
{
  int fact=1,cont=1;
  while(cont<=numero)
  {
    fact=fact*cont;
    cont++;
  }
  return fact;
}

void tablaMult(int numero,int lim)
{
  int mult=1,cont;
  for(cont=1;cont<=lim;cont++)
  {
    mult=numero*cont;
    printf("%dX%d=%d\n",numero,cont,mult);
  }

}

void sumaN(int cantNum)
{
  int num,suma=0,i=1;
  while(i<=cantNum)
  {
    printf("Ingrese el numero #%d: ",i);
    scanf("%d",&num);
    while(num<0 )
    {
      printf("ERROR: Ingrese un numero positivo:");
      scanf("%d",&num);
    }
    suma=suma+num;
    i++;
  }
  printf("La suma es: %d",suma);
}

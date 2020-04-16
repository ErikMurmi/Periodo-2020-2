/*
suma n numeros
entrada:
entero cont=0, cantNum
real suma=0, num
Proceso:
escribir "cantidad"
leer cantNum
mientras (cont<=cantNum)
inicio
escribir "ingrese num"
leer num
mientras (num<0)
inicio
escribir "ingrese num"
leer num
fin
suma=suma+num
cont=cont+1
fin
escribir "la suma es",suma

*/
#include <stdio.h>
void main()
{
  int cont=1,cantNum;
  float suma=0,num;
  printf("Ingrese la cant: ");
  scanf("%i",&cantNum);
  while (cont<=cantNum)
  {
    printf("Ingrese un num: ");
    scanf("%f",&num);
    while (num<0)
    {
      printf("Ingrese un num positivo: ");
      scanf("%f",&num);
    }
    suma=suma+num;
    cont++;
  }
  printf("La suma de los numeros es: %.2f", suma);
}

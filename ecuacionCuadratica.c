#include <stdio.h> //libreria I/0
#include <math.h> //libreria matemática
void main() //funcion principal
{
  float a,b,c,x1,x2; //variables decimales a usar
  printf("Ingrese el termino a: "); //pregunta el termino a
  scanf("%f",&a); //lee a
  printf("Ingrese el termino b: "); //pregunta el termino b
  scanf("%f",&b); //lee b
  printf("Ingrese el termino c: "); //pregunta el termino c
  scanf("%f",&c); //lee c
  /*
  pow me permite elevar un numero y sqrt calcula la raiz cuadrada,
  ambas funciones se incluyen en math.h
  */
  x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a); //calcula el caso 1 donde suma la raiz
  x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a); //calcula el caso 2 donde resta la raiz
  printf("x1 es %.2f\n",x1); //muestra la respuesta 1
  printf("x2 es %.2f\n",x2); //muestra la respuesta 2
}

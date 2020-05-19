/*
cuadrado y raiz
*/
#include <stdio.h>
#include <math.h>
void funcionValor(float,float);
void funcionReferencia(float*,float*);
void main()
{
  float n1,n2;
  printf("n1 y n2\n");
  scanf("%f %f",&n1,&n2);
  funcionValor(n1,n2);
  printf("n1=%f y n2=%f\n",n1,n2);
  funcionReferencia(&n1,&n2);
  printf("n1=%f y n2=%f\n",n1,n2);
}

void funcionValor(float x,float y)
{
  x=x*x;
  y=sqrt(y);
}

void funcionReferencia(float* x,float* y)
{
  *x=(*x)*(*x);
  *y=sqrt(*y);
}

#include <stdlib.h>
#include <stdio.h>
void sumaValor(float,float);
void restaValor(float,float);
void sumaReferencia(float*,float*);
void restaReferencia(float*,float*);
void main()
{
  int op;
  float n1,n2;
  while(op!=5)
  {
    printf("1.Suma Valor\n2.Resta Valor\n3.Suma Referencia\n4.Resta Referencia\n");
    scanf("%d",&op);
    switch(op){
      case 1:
      printf("n1 y n2\n");
      scanf("%f %f",&n1,&n2);
      sumaValor(n1,n2);
      break;
      case 2:
      printf("n1 y n2\n");
      scanf("%f %f",&n1,&n2);
      restaValor(n1,n2);
      break;
      case 3:
      printf("n1 y n2\n");
      scanf("%f %f",&n1,&n2);
      sumaReferencia(&n1,&n2);
      printf("n1=%.2f y n2=%.2f\n",n1,n2);
      printf("la suma es %.2f\n",n1);
      break;
      case 4:
      printf("n1 y n2\n");
      scanf("%f %f",&n1,&n2);
      restaReferencia(&n1,&n2);
      printf("n1=%.2f y n2=%.2f\n",n1,n2);
      printf("la resta es %.2f\n",n1);
      break;
    }
  }
}

void sumaValor(float x,float y){
  float resultado;
  resultado=x+y;
  printf("La suma es %.2f\n",resultado);
}

void restaValor(float x,float y){
  float resultado;
  resultado=x-y;
  printf("La resta es %.2f\n",resultado);
}

void sumaReferencia(float* x,float* y){
  *x=*x+*y;
}

void restaReferencia(float* x,float* y){
  *x=*x-*y;
}

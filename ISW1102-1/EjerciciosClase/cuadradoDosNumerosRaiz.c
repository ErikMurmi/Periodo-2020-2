/*
opcion 1
cuadrado y raiz

opcion 2
mostrar los n numeros pares usando referencias
*/
#include <stdio.h>
#include <math.h>
void funcionValor(float,float);
void funcionReferencia(float*,float*);
void pares(int*);
void main()
{
  float n1,n2;
  int op,n;
  while (op!=3)
  {
    printf("1. Cuadrado\n2. Serie N Pares\n3. Salir\n\nIngrese una opcion: ");
    scanf("%d",&op);
    switch (op)
    {
      case 1:
      printf("n1 y n2\n");
      scanf("%f %f",&n1,&n2);
      funcionValor(n1,n2);
      printf("n1=%f y n2=%f\n",n1,n2);
      funcionReferencia(&n1,&n2);
      printf("n1=%f y n2=%f\n",n1,n2);
      break;
      case 2:
      printf("\nCantidad de numeros pares: ");
      scanf("%d",&n);
      while (n<=0){
        printf("ERROR!: Ingrese un entero positivo\nCantidad de numeros pares: ");
        scanf("%d",&n);
      }
      printf("\n");
      pares(&n);
      printf("\n");
      break;
    }
  }
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

void pares(int* x)
{
  int i;
  for (i=1;i<=(*x)*2;i++){
    if(i%2==0){
      printf("%d\n",i);
    }
  }
}

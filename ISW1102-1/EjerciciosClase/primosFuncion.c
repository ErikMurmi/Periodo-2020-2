/*
opcion 1
cuadrado y raiz

opcion 2
mostrar los n numeros pares usando referencias

=======================================================================================================

opcion 3
Crear un programa que permita ingresar la cantidad de números e indique cuantos números son primos.

Datos de entrada
entero n,num

Proceso
si contador<=num/2
a=1 //1 no primo 0 primo
si a=1
aumenta contador de primos
imprime contador de primos

Salida:
cantidad de numeros primos positivos ingresados por el usuario
*/
#include <stdio.h>
#include <math.h>
void funcionValor(float,float);
void funcionReferencia(float*,float*);
void pares(int*);
void primos(int);//prototipo
void main()
{
  float n1,n2;
  int op,n;
  while (op!=4)
  {
    printf("1. Cuadrado\n2. Serie N Pares\n3. Numeros primos\n4. Salir\n\nIngrese una opcion: ");
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
      case 3:
      printf("\n\n\nIngrese la cantidad de primos: ");//pregunta cantidad
      scanf("%d",&n);//lee
      while (n<=0){//valida positivo
        printf("ERROR!: Ingrese un entero positivo\nIngrese la cantidad de primos: ");//error
        scanf("%d",&n);//lee
      }//fin
      primos(n);//llama a funcion
      break;//sale del caso
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

void primos(int x)//funcion
{//inicio
  int i=1,j,num,a,pri_cont=0;//variables
  while(i<=x){//repite hasta la cantidad
    printf("Ingrese el numero %d: ",i);//muestra
    scanf("%d",&num);//lee
    while (num<0){//verifica positivo
      printf("ERROR!: Ingrese un entero positivo\nIngrese el numero: ");//error
      scanf("%d",&num);//lee
    }//fin
    a=0;//inicializa a
    if (num>=2){//solo es primo del 2 en adelante
      for(j=2;j<=num/2;j++){//ciclo de validacion
        if (num%j==0){//comprueba primo
          a=1;//no primo
          break;//sale
        }//fin
      }//fin
      if (a==0){//verifica
        pri_cont++;//aumenta
      }//fin
    }//fin
    i++;//aumenta
  }//fin
  printf("Hay %d numero(s) primo(s)\n\n\n",pri_cont);//muestra cantidad
}//fin funcion

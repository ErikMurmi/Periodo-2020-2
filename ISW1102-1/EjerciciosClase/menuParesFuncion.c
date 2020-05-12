/******************************************************************************

Crear un programa que realice el factorial de cualquier numero, usando funciones

1.Definicion de prototipos de funciones
2.LLamada a la funcion en main()
3.Implementacion de funcion

3!=1*2*3=6

--------------------------------------

tabla de multiplicar:4
Limite de la tabla: 5

4*1=4
.
.
4*5=20


Crear un programa que permita ingresar por teclado n numeros positivos enteros y
realice la suma de dichos numeros

Ingrese la cantidad de numeros:-2
Ingrese la cantidad de numeros:2
Ingrese el numero:-3
Ingrese un numero positivo:6
Ingrese un numero positivo:8
La suma de los dos numeros es 14.

Cuantos numeros va a generar para la serie de n numeros pares y realce la suma de esos numeros

Ingrese la cantidad de numeros enteros positivos y realizar la suma de dichos numeros.
Ingrese la cantidad de numeros:-2
Ingrese la cantidad de numeros:2
Ingrese el numero:-3
Ingrese el numero positivo:4
INgrese el numero:7

La suma de los 2 numeros es 11
****************************************************

Sentencias Repetitivas usando un contador
1.inicializacion
2.condicion
3.incremento o decremento

******************************************************************************
Crear una funcion que permita ingresar la cantidad de numeros positivos para
generar la serie del fibonacci, y realice la suma de dicha serie.

Ingrese la cantidad de numeros:-3
Ingrese la cantidad de numeros:4
1 1 2 3
La suma es 7


*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int factorial(int);
int sumaNumeros(int,int);
void tablaMult(int,int);
int sumaPositivos(int);
int fibonacci(int);
void parImpar();//prototipo de mi funcion

void main()
{
  int numero1,numero2,op;
  while(op!=7)
  {
    printf("1.Factorial\n2.Suma Numeros\n3.Tabla\n4.Suma Positivos\n5.Fibonnaci\n6.Par o Impar\n7.Salir\n");
    printf("Escoja la opcion:");
    scanf("%d",&op);
    system("cls || clear");
    switch(op)
    {
      case 1:
      printf("Ingrese el numero: ");
      scanf("%d",&numero1);
      printf("El factorial de %d es %d\n",numero1,factorial(numero1));
      system("pause");
      system("cls || clear");
      break;
      case 2:
      printf("Ingrese el numero 1:");
      scanf("%d",&numero1);
      printf("Ingrese el numero 2:");
      scanf("%d",&numero2);
      printf("La suma es %d\n",sumaNumeros(numero1,numero2));
      system("pause");
      system("cls || clear");
      break;
      case 3:
      printf("Ingrese la tabla:");
      scanf("%d",&numero1);
      printf("Ingrese el limite:");
      scanf("%d",&numero2);
      tablaMult(numero1,numero2);
      system("pause");
      system("cls || clear");
      break;
      case 4:
      printf("Ingrese la cantidad de numeros:");
      scanf("%d",&numero1);
      while(numero1<0)
      {
        printf("Ingrese la cantidad de numeros positivos:");
        scanf("%d",&numero1);
      }
      printf("La suma de los %d numeros es %d\n",numero1,sumaPositivos(numero1));//Llamada a la funcion
      system("pause");
      system("cls || clear");
      break;
      case 5:
      printf("Ingrese la cantidad de numeros:");
      scanf("%d",&numero1);
      while(numero1<0)
      {
        printf("Ingrese la cantidad de numeros positivos:");
        scanf("%d",&numero1);
      }
      printf("La suma es %d\n",fibonacci(numero1));
      system("pause");
      system("cls || clear");
      break;
      /*
      Nombre: Victor Bayas
      Programa que determina si el numero ingresado es par o impar, y se detiene cuando el user ingresa el 0
      >>>Datos de entrada
      entero n

      >>>Proceso
      mientras n diferente de 0
        escribir "ingrese numero"
        mientras n<0
          escribir "error debe ser un positivo"
        si n%2=0 y n diferente de 0
          n_par aumenta en 1
        caso contrario si n%2 diferente de 0 y n diferente de 0
          n_impar aumenta 1
        escribir n_par
        escribir n_impar
        pausar consola
        limpiar pantalla

      >>>Datos de salida
      entero n_par
      entero n_impar
      */
      case 6://inicia caso 6
      parImpar();//llamo a mi función sin retorno;
      system("pause");//pausa consola
      system("cls || clear");//limpia pantalla
      /*
      //reseteos para la siguiente iteracion
      n=1;
      n_par=0;
      n_impar=0;
      */
      break;//sale del caso

      case 7:
      exit(0);
      break;
      default:
      printf("Opcion invalida");
      system("pause");
      system("cls || clear");
      break;


    }
  }
}


int factorial(int num)
{
  int fact=1,cont=1;
  while(cont<=num)
  {
    fact=fact*cont;
    cont++;
  }
  return fact;
}

int sumaNumeros(int num1,int num2)
{
  return num1+num2;
}

void tablaMult(int tabla,int lim)
{
  int resul=1,cont=1;
  while(cont<=lim)
  {
    resul=tabla*cont;
    printf("%dX%d=%d\n",tabla,cont,resul);
    cont++;
  }
}

int sumaPositivos(int cant)
{
  int suma=0,num,cont=1;
  while(cont<=cant)
  {
    printf("Ingrese el numero:");
    scanf("%d",&num);
    while(num<0)
    {
      printf("Ingrese el numero:");
      scanf("%d",&num);
    }
    suma=suma+num;
    cont++;
  }
  return suma;
}

int fibonacci(int cant)
{
  int num1=0,num2=1,num3=0,cont=1,suma=0;
  while(cont<=cant)
  {
    /*num1=num2+num3;
    num2=num3;
    num3=num1;
    printf("%d\t",num1);*/
    num1=num2;
    num2=num3;
    num3=num1+num2;
    printf("%d\t",num3);
    suma=suma+num3;
    cont++;
  }
  printf("\n");
  return suma;
}

void parImpar()//funcion
{//inicio
  int n=1,n_par=0,n_impar=0;//variables
  while(n!=0) //finaliza cuando ingrese 0
  {//inicia while
    printf("Ingrese un entero positivo (0=salir): ");//pregunta n
    scanf("%d",&n);//lee n
    while(n<0 )//valida que n sea positivo
    {//inicia while
      printf("ERROR: Ingrese un entero positivo (0=salir):");//muestra error
      scanf("%d",&n);//pide n de nuevo
    }//cierro while
    //lo del n!=0 es para que no sume el n al final
    if(n%2==0 && n!=0)//chequea si es par
      n_par++;//aumenta contador pares
    else if(n%2!=0 && n!=0)//chequea si es impar
      n_impar++;//aumenta contador impares
  }//cierro while
  printf("\nHay %d numeros pares\n",n_par);//muestra cantidad de pares
  printf("Hay %d numeros impares\n\n\n",n_impar);//muestra cantidad de impares
}//fin

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int edad, op;
  char nombre[16];
  float peso,altura,imc=0,gradosC,gradosF,centigrados=0,farenheit=0;
  int n,i,j;
  do
  {
    printf("==== Bienvenido ====\n");
    printf("1) Edad\n");
    printf("2) IMC\n");
    printf("3) Temperatura\n");
    printf("4) Diagrama tarea\n");
    printf("5) Salir\n");
    printf("Eliga una opcion (1-5): ");
    scanf("%i", &op);
    system("cls||clear");
    switch (op)
    {
      case 1:
      printf("Ingrese su nombre: ");
      fflush(stdin);
      gets(nombre);
      printf("Ingrese su edad: ");
      scanf("%i", &edad);
      if (edad>=18) {
        printf("%s es mayor de edad", nombre);
      }
      else {
        printf("%s es menor de edad", nombre);
      }
      system("pause");
      system("cls||clear");
      break;
      case 2:
        printf("ingrese su peso (kg): ");
        scanf("%f", &peso);
        printf("ingrese su altura (metros): ");
        scanf("%f", &altura);
        imc=(peso)/(pow(altura,2));
        printf("su IMC es: %.2f\n", imc);
        if (imc<18.5)
          printf("tiene un peso bajo");
        else if (imc>=18.5 && imc<=24.9)
          printf("tiene un peso normal");
        else if (imc>=25 && imc<=29.9)
          printf("tiene sobrepeso");
        else if (imc>=30 && imc<=39.9)
          printf("tiene obesidad");
        else{
          printf("tiene obesidad morbida");
        }
        system("pause");
        system("cls||clear");
      break;
      case 3:
        printf("1. C a F\n2.F a C\n");
        printf("EScoja la opcion:");
        scanf("%d",&op);
        if(op==1)
        {
          printf("Ingrese los grados centigrados:");
          scanf("%f",&gradosC);
          farenheit=(gradosC*9)/5+32;
          printf("La conversion es: %.3f grados farenheit \n",farenheit);
        }
        else if(op==2)
        {
          printf("Ingrese los grados farenheit:");
          scanf("%f",&gradosF);
          centigrados=(gradosF-32)*5/9;
          printf("La conversion es: %.2f grados centigrados",centigrados);
        }
        system("pause");
        system("cls||clear");
      break;
      case 4:
      /*
      Datos de entrada
      entero n,i,j
      Proceso
      Escribir ("Ingrese el numero: ");
      Leer ("%i",&n);
      Para  (i=0;i<=n;i++)
      {
        Para (j=1;j<=i;j++)
        {
          Escribir ("%d%d",j,j);
        }
        Escribir ("\n");
      }
      Para  (i=n-1;i>=0;i--)
      {
        Para (j=1;j<=i;j++)
        {
          Escribir ("%d%d",j,j);
        }
        Escribir ("\n");
      }
      Datos de salida
      Si n=10
      diagrama:
      11
      1122
      112233
      11223344
      1122334455
      112233445566
      11223344556677
      1122334455667788
      112233445566778899
      1122334455667788991010
      112233445566778899
      1122334455667788
      11223344556677
      112233445566
      1122334455
      11223344
      112233
      1122
      11
      */
      printf("Ingrese el numero: ");//pregunta el numero
      scanf("%i",&n);//lee el numero
      for (i=0;i<=n;i++)//contador sube hasta llegar a n, columnas
      {//inicio
        for(j=1;j<=i;j++)//sube hasta llegar a i el numero de columnas
        {//inicio
          printf("%d%d",j,j);//imprime dos veces cada valor de j
        }//fin
        printf("\n");//imprime salto de linea
      }//fin
      //ahora vamos a la inversa
      for (i=n-1;i>=0;i--)//el contador de filas vale n y baja hasta llegar a 0
      {//inicio
        for(j=1;j<=i;j++)//el contador columnas sube hasta valer el mismo valor de i (filas)
        {//inicio
          printf("%d%d",j,j);//imprime dos veces cada valor de j
        }//fin
        printf("\n");//imprime salto de linea
      }//fin
      system("pause");//pausa no compatible en linux (gdb online)
      system("cls||clear");//limpia pantalla (multiplataforma)
      break;//sale del switch
      case 5:
      printf("adios\n");
      return(0);
      default:
      printf("error, opcion no valida\n");
      system("pause");
      system("cls||clear");
      break;
    }
  } while (op!=5);
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
  int edad, op;
  char nombre[16];
  float peso,altura,imc=0,gradosC,gradosF,centigrados=0,farenheit=0;
  while (op!=4)
  {
    printf("==== Bienvenido ====\n");
    printf("1) Edad\n");
    printf("2) IMC\n");
    printf("3) Temperatura\n");
    printf("4) Salir\n");
    printf("Eliga una opcion (1-3): ");
    scanf("%i", &op);
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
      exit(0);
      default:
      printf("error");
      system("pause");
      system("cls||clear");
      break;
    }
  }
}

/*
crear un programa q permita ingresar el nombre y edad
para verificar si es mayor o menor de edad
datos: entero edad y string nombre
proceso:
escribir "nombre"
leer nombre
escribir "edad"
leer edad
si edad>=18 entonces
  escribir "mayor"
caso contario
  escribir "menor"
*/
#include <stdio.h>
void main()
{
  int edad;
  char nombre[16];
  printf("Ingrese su nombre: ");
  gets(nombre);
  printf("Ingrese su edad: ");
  scanf("%i", &edad);
  if (edad>=18) {
    printf("%s es mayor de edad", nombre);
  }
  else {
    printf("%s es menor de edad", nombre);
  }
}

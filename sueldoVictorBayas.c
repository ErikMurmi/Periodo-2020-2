/*
Una empresa clasifica a sus empleados en dos grupos,
los del grupo 1 son aquellos que laboran dentro de la misma y desean darles un aumento de sueldo siguiendo el siguiente criterio: si el empleado trabajó más de 40 horas,
su sueldo será incrementado en $50.00, si el empleado es mujer o es mayor de 25 años y tiene en la empresa más de 30 años su sueldo se incrementará en $800.00 y
si no cumple con estas condiciones solo se incrementa en $100.00 (este último es independiente de las horas trabajadas),
Para los empleados del grupo 2 (los que aspiran a ingresar a la empresa)si es mayor de 18 años y tiene más de 85 puntos en una prueba presentada entonces será contratado.
Elaborar un programa para determinar el sueldo de una persona e indicar si será o no contratado.

Datos de entrada:
enteros: horas,tiempo,grupo,edad,puntos
flotante: sueldo
caracter: genero

Proceso:
Imprimir ("A que grupo pertence (1=existente o 2=nuevos)?: ");
Leer ("%i",&grupo);
Imprimir ("Cual es tu edad?: ");
Leer ("%i",&edad);
Si (grupo==1)
{
  Imprimir ("Ingresa tu sueldo actual: ");
  Leer ("%f",&sueldo);
  Imprimir ("Ingrese su genero (M o F): ");
  Leer (" %c",&genero);
  Imprimir ("Cuantas a%cos ha trabajado en la empresa?: ",164);
  Leer ("%i",&tiempo);
  Imprimir ("Cuantas horas ha trabajado?: ");
  Leer ("%i",&horas);
  Si (tiempo>=30 && (genero=='f' || genero=='F' || edad>=25))
  {
    incrementado=sueldo+800;
  }
  Caso Contrario Si (horas>=40)
  {
    incrementado=sueldo+50;
  }
  Caso Contrario
  {
    incrementado=sueldo+100;
  }
  Imprimir ("Su sueldo aumentado es de: %.2f",incrementado);
}
Caso Contrario
{
  Imprimir ("Cuantos puntos sacaste?: ");
  Leer ("%i",&puntos);
  Si (edad>=18 && puntos>=85)
  {
    Imprimir ("Estas contratado");
  }
  Caso Contrario
  {
    Imprimir ("Lo sentimos, no fuiste contratado");
  }
}

Datos de salida:
flotante incrementado si es del grupo 1 o un mensaje de contratacion si es grupo 2
*/
#include <stdio.h> //libreria I/O
void main() //funcion principal
{ //inicio
  int horas,tiempo,grupo,edad,puntos; //declaro enteros
  float sueldo,incrementado; //declaro flotantes
  char genero; //declaro caracter genero
  printf("A que grupo pertence (1=existente o 2=nuevos)?: "); //pregunta grupo
  scanf("%i",&grupo); //lee grupo
  printf("Cual es tu edad?: "); //pregunta edad
  scanf("%i",&edad); //lee edad
  if (grupo==1) //evalua el grupo al q pertenece
  { //inicio if
    printf("Ingresa tu sueldo actual: "); //pregunta sueldo
    scanf("%f",&sueldo); //lee sueldo
    printf("Ingrese su genero (M o F): "); //pregunta genero
    scanf(" %c",&genero); //lee genero
    printf("Cuantas a%cos ha trabajado en la empresa?: ",164); //pregunta años
    scanf("%i",&tiempo); //lee años
    printf("Cuantas horas ha trabajado?: "); //pregunta horas
    scanf("%i",&horas); //lee horas
    if (tiempo>=30 && (genero=='f' || genero=='F' || edad>=25)) //evalua condicion
    { //inicio if
      incrementado=sueldo+800; //calcula aumento
    } //fin if
    else if (horas>=40) //evalua condicion
    { //inicio else if
      incrementado=sueldo+50; //calcula aumento
    } //fin else if
    else
    { //inicio else
      incrementado=sueldo+100; //calcula aumento
    } //fin else
    printf("Su sueldo aumentado es de: %.2f",incrementado); //muestra por pantalla el sueldo mas el aumento
  }
  else //si pertence al grupo 2
  { //inicio else
    printf("Cuantos puntos sacaste?: "); //pregunta puntos
    scanf("%i",&puntos); //lee puntos
    if (edad>=18 && puntos>=85) //evalua condicion
    { //inicio if
      printf("Estas contratado"); //contratado
    } //fin if
    else //caso contrario
    { //inicio else
      printf("Lo sentimos, no fuiste contratado"); //no contratado
    } //fin else
  } //fin else
} //fin

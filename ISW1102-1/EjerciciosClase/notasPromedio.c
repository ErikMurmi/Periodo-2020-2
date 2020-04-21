#include <stdio.h>
int main(){
  int i=-1;
  float notas=1,suma=0,prom=0;
  char nombre[10];
  printf("Ingrese nombre: ");
  gets(nombre);
  while(notas!=0){
    printf("Ingrese la nota: ");
    scanf("%f",&notas);
    while(notas<0 || notas>10){
      printf("Ingrese una nota positiva: ");
      scanf("%f",&notas);
    }
    suma=suma+notas;
    i++;
  }
  prom=suma/i;
  printf("%s tiene un promedio de %.2f\n",nombre,prom);
  if(prom>=6){
    printf("aprobado");
  }
  else{
    printf("reprobado");
  }
}

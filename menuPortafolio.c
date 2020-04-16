#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
  int op;
  float monto,monto_final,l1,l2,l3,area_tri,semi_perimetro;
  printf("==== Bienvenido ====\n");
  printf("1) Descuentos Tienda\n");
  printf("2) Triangulo\n");
  printf("3) Suma Serie\n");
  printf("4) Conteo Votos\n");
  printf("5) Promedio\n");
  printf("Eliga una opcion (1-5): ");
  scanf("%i", &op);
  system("cls");
  switch (op)
  {
    case 1:
      printf("==== Descuentos Tienda ====\n");
      printf("Ingresa el monto de la compra (decimal = .): $");
      scanf("%f",&monto);
      if (monto<800)
        monto_final=monto;
      else if (monto>=800 && monto<=1500)
        monto_final=monto-(monto*0.1);
      else if (monto>=800 && monto<=1500)
        monto_final=monto-(monto*0.15);
      else
        monto_final=monto-(monto*0.2);
      printf("Valor a pagar: $%.2f", monto_final);
      break;
    case 2:
      printf("==== Triangulo ====\n");
      printf("Ingrese el primer lado (decimal = .): ");
      scanf("%f",&l1);
      printf("Ingrese el segundo lado (decimal = .): ");
      scanf("%f",&l2);
      printf("Ingrese el tercer lado (decimal = .): ");
      scanf("%f",&l3);
      if (l1+l2>l3 || l1+l3>l2 || l2+l3>l1)
      {
        printf("Es un triangulo ");
        semi_perimetro=(l1+l2+l3)/2;
        area_tri=sqrt(semi_perimetro*(semi_perimetro-l1)*(semi_perimetro-l2)*(semi_perimetro-l3));
        printf("El area es: %.2fm", area_tri);
        if (l1==l2 && l1==l3)
          printf("equilatero");
      }
      else
        printf("No es un triangulo\n");
      break;
  }
}

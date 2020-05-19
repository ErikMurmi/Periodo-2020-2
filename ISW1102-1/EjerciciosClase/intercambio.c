#include <stdio.h>
void intercambio(int*,int*);
void main()
{
  int i=3,j=50;
  printf("i=%d\nj=%d\n",i,j);
  intercambio(&i,&j);
  printf("i=%d y j=%d\n",i,j);
}

void intercambio(int* a,int* b)
{
  int aux=*a;
  *a=*b;
  *b=aux;
}

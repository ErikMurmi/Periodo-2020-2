#include <stdio.h>
void main(){
	float base, altura,area=0;
	printf("ingrese base: ");
	scanf("%f", &base);
	printf("ingrese altura: ");
	scanf("%f", &altura);
	area=(base*altura)/2;
	printf("el area es: %.2f cm", area);
}

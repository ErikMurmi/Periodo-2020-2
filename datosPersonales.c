/* programa que pregunte una serie de datos
al usuario y los muestre por pantalla (C)2020 Victor Bayas*/
#include <stdio.h> //carga la libreria I/O
int main(void) //declaro la función principal
{
	char nombre[11],apellido[11],hobby[31],gusta[31],nogusta[31],descripcion[61],direccion[61],ciudad[16]; //declaración de variables caracteres con su espacio en memoria
	char temp; //variable dummy para limpiar buffer de entrada
	int edad,numero; //declaracion de variables enteras
	printf("===== BIENVENIDO ====\n");
	printf("Ingresa tu nombre: ");
	scanf("%s",nombre);
	printf("Ingresa tu apellido: ");
	scanf("%s",apellido);
	printf("Ingresa tu edad: ");
	scanf("%i",&edad);
	printf("Tu numero es el: 0"); //workaround para leer numeros q empiezan con cero
	scanf("%i", &numero);
	/* scanf("%c",&temp); limpia el buffer y
	%[^\n] permite la entrada de espacios en blanco*/
	printf("En que ciudad vives?: ");
	scanf("%c",&temp);
	scanf("%[^\n]",ciudad);
	printf("Cual es tu direccion?: ");
	scanf("%c",&temp);
	scanf("%[^\n]",direccion);
	printf("Cuentanos tu(s) hobby(s): ");
	scanf("%c",&temp);
	scanf("%[^\n]",hobby);
	printf("Que te gusta?: ");
	scanf("%c",&temp);
	scanf("%[^\n]",gusta);
	printf("Que no te gusta?: ");
	scanf("%c",&temp);
	scanf("%[^\n]",nogusta);
	printf("Describete en 60 caracteres: ");
	scanf("%c",&temp);
	scanf("%[^\n]",descripcion);
	printf("\n");
	printf("===== BIBLIOGRAFIA ====\n");
	//vamos a mostrar los datos recolectados
	printf("Nombre: %s\nApellido: %s\nEdad: %i\nCiudad: %s\nDireccion: %s\nNumero: 0%i\nHobby(s): %s\nCosas que le gustan: %s\nCosas que no le gustan: %s\nDescripcion Personal: %s\n",nombre,apellido,edad,ciudad,direccion,numero,hobby,gusta,nogusta,descripcion);
}

#include <stdio.h>
#include <windows.h>//declaración de librerias
#include <stdlib.h>
float areatriangulo(void)//función para el area del triangulo
{
	float base, altura; //declaración de variables
	printf("introduce base "); //pedir información
	scanf("%f",&base);//guardar información
	printf("\nintroduce altura ");//pedir información
	scanf("%f",&altura);//guardar información
	return  (base*altura)/2;//resultado a regresar
}
float areacuadrado (void)//función para el area del cuadrado
{
	float base; //declaración de variables
	printf("introduce la base ");//pedir información
	scanf("%f",&base);//guardar información
	return (base*base);//resultado a regresar
}
float areacirculo(void)//función para el area del circulo
{
	float radio, pi=3.14; //declaración de variables
	printf("introduce el radio ");//pedir información
	scanf("%f",&radio);//guardar información
	return pi*(radio*radio);//resultado a regresar
}
float arearectangulo(void)//función para el area del rectangulo
{
	float base, altura; //declaración de variables
	printf("introduce la base ");//pedir información
	scanf("%f",&base);//guardar información
	printf("\nintroduce la altura ");//pedir información
	scanf("%f",&altura);//guardar información
	return (base*altura);//resultado a regresar
}
void menu ()//proceso del menu
{
int m;//declaración de variables
float area;//declaración de variables
	do//abrir ciclo repetitivo
	{
		system("color 70");//declarar colorde fondo y letras
		printf("1-area del triangulo\n2-area del cuadrado\n3-area del circulo\n4-area del rectangulo\n5-salir\n" );//pedirle una opción
		scanf("%i",&m);//guardar información
	switch (m)//abrir las opciones
	{
	case 1:
		system("cls");//limpiar pantalla
	area = areatriangulo();//llamar la funcion del triangulo
	printf("el area es:%2.2f",area);//dar el resultado
	break;
	case 2:
		system("cls");//limpiar pantalla
	area=areacuadrado();//llamar la funcion del cuadrado
	printf("el area es:%2.2f",area);//dar el resultado
	break;
	case 3:
		system("cls");//limpiar pantalla
	area=areacirculo();//llamar la funcion del circulo
	printf("el area es:%2.2f",area);//dar el resultado
	break;
	case 4:
		system("cls");//limpiar pantalla
	area=arearectangulo();//llamar la funcion del rectangulo
	printf("el area es:%2.2f",area);//dar el resultado
	break;
	case 5:
		printf("buelba pronto");//mostrar mensaje
		break;
	default:
		printf("opcion no valida");//mostrar mensaje
	}
	system("pause");//pausar proceso
	system("cls");//limpiar pantalla
	}while(m !=5);//regresar al inicio exepto con la opcion de salir
}
int main ()
{
	 menu ();//llamar al proceso de menu
	return 0;
}

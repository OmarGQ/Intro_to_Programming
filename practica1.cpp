#include <stdio.h>
#include <stdlib.h>//declaracion de librerias
#include <Windows.h>
void suma (void)//modulo de suma
{
	int can1, can2, totals; // declaraci�n de variables
	printf("ingrese la primera cantidad a sumar ");//pedir informaci�n
	scanf("%i",&can1);//guardar informaci�n
	printf("ingrese segunda cantidad ");//pedir informaci�n
	scanf("%i",&can2);//guardar informaci�n
	totals=can1+can2;//realizacion de operaci�n
	printf("el resultado de la suma es: %i \n",totals);//mostrar el resultado
}
void resta (void)//modulo de resta
{
	float can1, can2, totalr; //declaraci�n de variables
	printf("ingrese primera cantidad a restar ");//pedir informaci�n
	scanf("%f",&can1);//guardar informaci�n
	printf("ingrese la segunda cantidad ");//pedir informaci�n
	scanf("%f",&can2);//guardar informaci�n
	totalr=can1-can2;//realizacion de operaci�n
	printf("el resultado de la resta es: %2.2f \n",totalr);//mostrar el resultado
}
void multiplicacion (void)//modulo de multiplicaci�n
{
	float can1, can2, totalm;// declaraci�n de variables
	printf("ingrese cantidad a multiplicar ");//pedir informaci�n
	scanf("%f",&can1);//guardar informaci�n
	printf("ingrese la segunda cantidad ");//pedir informaci�n
	scanf("%f",&can2);//guardar informaci�n
	totalm=can1*can2;//realizacion de operaci�n
	printf("el resultado de la multiplicacion es: %2.2f \n",totalm);//mostrar el resultado
}
void division (void)//modulo de division
{
	float can1, can2, totald;//declaraci�n de variables
	printf("ingrese primera cantidad a dividir ");//pedir informaci�n
	scanf("%f",&can1);//guardar informaci�n
	printf("ingrese la segunda cantidad ");//pedir informaci�n
	scanf("%f",&can2);//guardar informaci�n
	totald=can1/can2;//realizacion de operaci�n
	printf("el resultado de la division es: %2.2f \n",totald);//mostrar el resultado
}
int main ()
{
	int m;//declaraci�n de variables
	do
	{
		printf("1-suma \n2-resta \n3-multiplicacion \n4-divicion \n5-salir\n ");//pedir una opcion
		scanf_s("%i",&m);//guardar informaci�n
	switch (m)
	{
	case 1:
		system("cls");
	suma();  //utilizar modulo de suma
	break;
	case 2:
		system("cls");
	resta();//utilizar modulo de resta
	break;
	case 3:
		system("cls");
	multiplicacion();//utilizar modulo de multiplicaci�n
	break;
	case 4:
		system("cls");
	division();//utilizar modulo de division
	break;
	case 5:
		system("cls");
		printf("buelba pronto");//mostrar mensaje
		break;
	default:
		printf("opcion no valida");//mostrar mensaje
	}
	system("pause");//pausar proceso
	system("cls");//limpiar pantalla
	}while(m !=5);//regresar al inicio exepto con la opcion de salir
	return 0;
}

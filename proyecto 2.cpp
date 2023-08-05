#include <stdio.h>//Omar Ildefonso Godinez Quiñones
#include <windows.h>//declaración de librerias
#include <stdlib.h>
float promedio (int y, int m);
int main()//programa principal
{
	system ("color f0");//cambio de color
	int al, c=0;//declaración de variables
	printf("bienvenido");//mostrar mesaje
	printf("\na cuantos alumnos va a evaluar");//pedir una cantidad al usuario
	scanf("%i",&al);//guardar la cantidad
	int es[al], a[al], re[al];//declaracion de vectores
	system ("cls");//limpiar la pantalla
	for(c=1; c<=al; c++)//iniciar ciclo repetitivo
	{
		printf("alumno%i",c);//indicar el numero del proceso
		printf("\ningrese su registro");//pedir registro
		scanf("%i",&re[c]);//guardar el registro
		printf("\ningrese su calificacion");//pedir la calificación
		scanf("%i",&a[c]);//guardar la calificación
		system ("cls");//limpiar la pantalla
	}
	printf("------HISTOGRAMA------");//mostrar mensaje
	int v=0, f=0;//declaración de variables
	for(v=1; v<=al; v++)//iniciar ciclo repetitivo
	{
		printf("\n %i.-", re[v]);//mostrar el registro
		for(f=1; f<=a[v]; f++)//iniciar ciclo repetitivo anidado
		{
			printf("*");//imprimir un asterisco por cada unidad de la calificación
		}
	}
	int t=0, su, con;//declaración de variables
	float prom;//declaración de variables
	printf("\n");//saltar linea
	printf("_____________________________________\n");
	printf("--------------- TABLA ---------------");//mostrar la estructura de la tabla
	printf("\n alumno    calificacion    estado");
	for(t=1; t<=al; t++)//iniciar ciclo repetitivo
	{
		if(a[t]<7)//comparar la calificación e imprimir si reprobo
		{
			printf("\n  %i    %i         reprobado", re[t], a[t]);//datos de la tabla en caso de reprobar
		}
		else//imprimir si no reprobo
		{
			printf("\n  %i    %i         aprobado", re[t], a[t]);//datos de la tabla en caso de aprobar
		}
		
		su+=a[t];//guardar y sumar el dato en otra variable
    }
    con=al;//guardar dato en otra variable
    prom = promedio(su, con);//llamar la función y mandar valores a los parametros
    printf("\n");//saltar linea
    printf("\nel promedio es de: %2.1f", prom);//imprimir el promedio del grupo
    if(prom<7)
    {
    	printf(" no aprobatoria");//imprimir que no es aprobatirio
	}
	else
	{
		printf(" aprobatoria");//imprimir que es aprobatorio 
	}
	system ("pause");//pausar el proceso
	return 0;//valor a regresar
}

float promedio (int y, int m)//función que ontiene el promedio
{
	return(y/m);//valor a regresar
}

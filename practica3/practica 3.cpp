#include <stdio.h> //Omar Ildefonso Godinez Quiñones 15300515
#include <stdlib.h> //declaracion de librerias
#include <windows.h>

void suma(int sumas); //prototipo del procedimiento
int main() 
{
	int c; //declaracion de variables
system ("color 0f" ); //color del fondo y letras
printf(" \t ______________________________________\n");
printf(" \t|  sumas con de multiples cantidades   |\n"); //mostrar titulo de practica
printf(" \t|______________________________________|\n\n");

printf(" \tcuantas sumas quiere hacer\n"); //pedir información
scanf("%i",&c); //guardar la información

suma(c);  //parámetro que va a cambiar de acuerdo a lo que solicite el usuario
	
return 0; //cantidad a regresar
system("pause"); //pausar el proceso
}

void suma(int sumas)  //procedimiento con paso de parámetro
{   
	int contador=0, b=0,valor=0, contar=0; //declarar variables
	float total=0;
	system ("cls");
	printf("CUANTAS CANTIDADES VA A SUMAR\n");//pedir información
	scanf("%i",&b); //guardar la información
	int a[b]; //declaracion de variables
	for (contador=1;contador<=sumas;contador++) //bucle para repetir cuantas sumas realizara de acuendo al parametro declarado
	{
		for(valor=1;valor<=b;valor++)//proceso de almacenamiento de las cantidades a sumar
		{
    printf("_____________________________ \n");
	printf("Suma numero %d \n",contador);
	printf("Ingresa el valor %d: \n",valor); //pedir una cantidad
	scanf("%i",&a[valor]); //guardar la cantidad
        }
    
        int c=0; //declaracion de variables
        for(c=1;c<=b;c++) //proceso de sumatoria
        {
        total+=a[c]; //suma
    }
    	system ("cls");
	printf("............................. \n");
	printf("El Total de la suma es: %f\n",total); //dar el resultado
	printf("............................. \n");
	total=0;
}
	
	system ("pause"); //pausasr el proceso
}
	

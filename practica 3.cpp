#include <stdio.h>//Omar Ildefonso Godinez Qui�ones
#include <windows.h>//declarar librerias

int c=0;//declarar variable global

struct informacion //declarar estructura
{
	int cod, cant;
	char nom[20];//variables de la estructura
	float  tot, pre;
}pro[30];//variables en las que se guardara los datos de la estructura

void productos()//proceso que pide la informaci�n de los productos
{
	int y, b=1;//declaraci�n de variables
	do//punto dende se regresara la estructura
	{
		printf("\ncual es el producto\n");//pdedir informac�n al usuario
		fflush(stdin);//limpiar la variable
		gets(pro[b].nom);//guardar la informaci�n
		printf("cual es el precio por pieza");//pdedir informac�n al usuario
		scanf("%f",& pro[b].pre);//guardar la informaci�n
		pro[b].cod=c;//guardar el numero de producto como el codigo
		c++;//aumentar en 1 la variable
		b++;//aumentar en 1 la variable
		printf("\nquiere agregar otro producto\n1-si\n2-no");//dar opci�n de repetir
		scanf("%i",&y);//guardar la informaci�n
	}while(y==1);//verificar si se repetira el proceso
}

int ventas()//funci�n que regresa los productos vendidos
{
    int s=1, t=0;//declaraci�n de variables
	printf("\ningrese el numero de piezas vendidas del producto correspondiente\n");//pdedir informac�n al usuario
	system ("cls");//limpiar pantalla
	while(s<=c)//iniciar ciclo repetitivo
	{
		puts(pro[s].nom);//mostrar el nombre del producto
		scanf("%i",&pro[s].cant);//guardar la informaci�n
		s++;//aumentar en 1 la variable
	}
	for(s=1;s<=c;s++)//iniciar ciclo repetitivo
	{
		t+=pro[s].cant;//sumar y guardar 
	}
	return t;//valor a regresar
}

float tabla ()//funci�n que imprime la tabla y regresa el total de venta
{
	int f=0;//declaraci�n de variables
	float toto=0;//declaraci�n de variables
	system("cls");//limpiar pantalla
	printf ("------------------------TABLA-----------------------\n");//imprimir mensaje
	printf ("codigo  producto   cantidad   precio   total\n");//imprimir la divici�n de la tabla
	for(f=1; f<=c; f++)//iniciar ciclo repetitivo
	{
		pro[f].tot=(pro[f].cant*pro[f].pre);//calcular el total de cada producto
		printf("000%i|\t %s\t    | %i     |\t%2.2f |\t%2.2f\n", pro[f].cod, pro[f].nom,pro[f].cant, pro[f].pre, pro[f].tot);//impimir la informaci�n
		toto+=pro[f].tot;//sumar y guardar 
	}
	printf ("-----------------------------------------------------");//imprimir detalle de tabla
	return toto;//valor a regresar
}
int main()//procesi principal
{
	system("color f0");
	int produ,s;//declaraci�n de variables
	float total, diner, cambio, mas;//declaraci�n de variables
	printf("bienvenido a ABARROTES PRACENCIA");//imprimir mensaje
	printf("\nagrege los productos para vender");//imprimir mensaje
	productos ();//lamar el proceso productos
	produ=ventas ();//llamar y guardar el dato de ventas
	total=tabla ();//llamar y guardar el dato de tabla
	printf("\nel total de productos es:%i\ny el total es: %2.2f", produ, total);//mostrar el total a pagar
	printf("\ncon cuanto se va a pagar");//pedir cantidad
	scanf("%f",&diner);//guardar la informaci�n
	do//punto dende se regresara la estructura
	{
	if(diner>=total)//hacer comparaci�n
	  { 
		cambio=diner-total;//hacer operacion
		printf("\nel cambio es: %2.2f",cambio);//mostrar el resultado de la operaci�n anterior
		printf("\ngracias por su compra");//mostrar mensaje
		s++;//aumentar en 1 la variable
	  }
	else//en caso de que la comparaci�n sea falsa
	  {
		cambio=total-diner;//hacer operaci�n
		printf("falta: %2.2f para pagar",cambio);//mostrar el resultado de la operaci�n anterior
		printf("\ningrese el dinero faltante\n");//pedir una cantidad
		scanf("%f",&mas);//guardar la informaci�n
		diner+=mas;//sumar y guardar 
	  }
    }while(s!=1);//verificar si se repetira el proceso
	system ("pause");//pausar proceso
	return 0;//valor a regresar
}


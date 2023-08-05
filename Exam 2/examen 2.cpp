#include <stdio.h>
#include <stdlib.h>
int v=0;

struct cineclub 
{
	char codigo[20], titulo[30], genero[15], prestamos[5];
}vec[10];

void accion ()
{
	FILE *fichero;
   char accion[13]={"accion.txt"};
   fichero = fopen( accion, "w+" );
   if( fichero )
      printf("creado (ABIERTO)\n");
   else
   {
      printf("Error (NO ABIERTO)\n");
   }
   fseek(fichero, 0L, SEEK_END);
   fprintf(fichero,"TITULO: %s\n",vec[v].titulo);
   fprintf(fichero,"CODIGO: %s\n",vec[v].codigo);
   fprintf(fichero,"GENERO: suspenso\n");
   fprintf(fichero,"PRESTAMOS: %s\n",vec[v].prestamos);
   if(!fclose(fichero))
      printf( "Fichero cerrado\n" );
   else
   {
      printf("Error: fichero NO CERRADO\n");
   }
}

void suspenso()
{
	FILE *fichero;
	char suspenso[15]={"suspenso.txt"};
	fichero = fopen( suspenso, "w+" );
   if( fichero )
      printf("creado (ABIERTO)\n");
   else
   {
      printf("Error (NO ABIERTO)\n");
   }
   fseek( fichero, 0L, SEEK_END );
   fprintf(fichero,"TITULO: %s\n",vec[v].titulo);
   fprintf(fichero,"CODIGO: %s\n",vec[v].codigo);
   fprintf(fichero,"GENERO: suspenso\n");
   fprintf(fichero,"PRESTAMOS: %s\n",vec[v].prestamos);
   if(!fclose(fichero))
      printf("Fichero cerrado\n");
   else
   {
      printf("Error: fichero NO CERRADO\n");
   }
}

void romance()
{
	FILE *fichero;
	char romance[15]={"romance"};
	fichero = fopen( romance, "w+" );
   if( fichero )
      printf("creado (ABIERTO)\n");
   else
   {
      printf("Error (NO ABIERTO)\n");
   }
   fseek(fichero, 0L, SEEK_END );
   fprintf(fichero,"TITULO: %s\n",vec[v].titulo);
   fprintf(fichero,"CODIGO: %s\n",vec[v].codigo);
   fprintf(fichero,"GENERO: suspenso\n");
   fprintf(fichero,"PRESTAMOS: %s\n",vec[v].prestamos);
   if(!fclose(fichero))
      printf("Fichero cerrado\n");
	  else
   {
      printf("Error: fichero NO CERRADO\n");
   }
}

int main ()
{
	int m;
	char y;
	printf("bienbenido al registro de peliculas del videoclub\n");
	do{
		printf("ingrese el titulo de la pelicula\n");
		fflush(stdin);
	    gets(vec[v].titulo);
	    printf("ingrese el codigo de la pelicula\n");
	    fflush(stdin);
	    gets(vec[v].codigo);
	    printf("cual es la cantidad de prestamos\n");
	    fflush(stdin);
	    gets(vec[v].prestamos);
	    do{
	    printf("cual es el genero:\n1-accion\n2-suspenso\n3-romance\n");
	    scanf("%i",&m);
	    switch(m)
	    {
	    	case 1: accion ();
	    	break;
	    	case 2: suspenso ();
	    	break;
	    	case 3: romance ();
	    	break;
	    	default: printf("opcion no valida");
	    }
	    system("cls");
	   	}while(m>3||m<1);
	   	v++;
	    printf("quiere agregar otra pelicula\n"),
	    scanf("%s",&y);
	}while(y=='s');
	system("pause");
	return 0;
}
FILE *fichero;
	char suspenso[15]={"suspenso.txt"}, n;
	fichero = fopen( suspenso, "w+" );
	do{
		system("cls");
		 printf("ingrese el titulo de la pelicula\n");
		fflush(stdin);
	    gets(vec[v].titulo);
	    printf("ingrese el codigo de la pelicula\n");
	    fflush(stdin);
	    gets(vec[v].codigo);
	    printf("cual es la cantidad de prestamos\n");
	    fflush(stdin);
	    gets(vec[v].prestamos);
   if( fichero )
      printf("creado (ABIERTO)\n");
   else
   {
      printf("Error (NO ABIERTO)\n");

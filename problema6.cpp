#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <String.h>
int main(int argc, char *argv[]) {
int numero;
printf( "\n Introduzca un numero entero: ");
scanf( "%d", &numero );
if ( numero % 2 == 0 )
printf("Es par \n");
else
printf("Es impar \n");
return 0;
}

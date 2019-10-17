#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
int horas=1, minutos=60, segundos=60, total;
printf( "Introduzca los segundos:\n" );
scanf( "%d", &segundos );
horas =  segundos /3600;
minutos = segundos /60;
printf("Horas: %d \n", horas);
printf("Minutos: %d \n", minutos);
printf("Segundos: %d \n", segundos);
}

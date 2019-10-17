#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
int vector[10];
int i,u,p;
printf("Introdusca 10 numeros enteros \n");
for (i=0; i<10; i++){
printf( "Numero %d: \n ", i+1);
scanf("%d", &vector[i]);
u += vector[i];
}
p=(u-1)/10;
int mayor, menor;
mayor = vector[0];
menor = vector[0];
for (i=0; i<10; i++){
if (vector[i]> mayor){
mayor=vector[i];
}
if (vector[i]< menor){
menor=vector[i];
}
}
printf("El mayor es %d\n", mayor);
printf("El menor es %d\n", menor);
printf("El  promedio es: %d\n", p);

}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (void){
int n,j=2;
int s;
printf("Indique estado: ");
scanf("%d",&n);
switch(n){
case 1: printf("Calor \n");
break;
case 2: printf("Templado\n");
break;
case 3: printf("Frio \n");
break;
case 4: printf("Fuera deL rango\n");
break;
default: printf("No es una opcion");
}
}

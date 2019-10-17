#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (void){
int n,j;
int s;
for(j=2;j<100; j++){
j=j+2;
s+=j;
}
printf("El resultado de la sumatoria es:%i",s);
}

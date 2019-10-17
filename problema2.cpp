#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
int n=2, m=5,v;
float a,b,c,d,e;
a = m+n;
b = m%n;
c = ((m-n)*10)%4;
if(a!=2 || n>m || b>m || c==1 ){
printf("m+n \n");
printf("Es: Verdadero");
printf("m>n \n");
printf("Es: Verdadero");
printf("\n m modulo n:");
printf("\n Es falso \n");
printf("C: %f",c);
printf("\n Es falso");
}
 }


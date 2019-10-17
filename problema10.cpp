#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
float l,g,t=0,gt,tt;
printf("Introduca la cantidad de litros gastados al mes;\n");
scanf("%f",&l);
if (l>50 && l<=199){
    t = l-50;
    g = t*10;
}
else{
    t= l-50;
	g = t*20;
}
if(g<=200){
	g=200;
}
printf("Usted va a pagar: %f \n",g);
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
int k,i,j;
printf("Introduce un numero:  \n");
scanf("%d",&k);
printf("\n");
for(i=1;i<=k;i++){
for(j=1;j<=i;j++){
printf("%d",j);
}
printf("\n");
}
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
int i=2,total;
do{
total = total + i;
printf("%d+",i);
i+=3;
}
while(i<100);
printf("\nEl total es:%d\n",total);
system("pause");
return 0;
}

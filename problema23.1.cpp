#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
int i=1,total=2;
i +=1;
while(i<98){
i+=3;
total = total + i;
printf("%d+",i);
}
printf("El total es:%d\n",total);
system("pause");
return 0;
}

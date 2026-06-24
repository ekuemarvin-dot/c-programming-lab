#include<stdio.h>

int main(){
printf("Fahrenteit to celsius\n");

float fahr;

for(fahr=300;fahr>=0;fahr=fahr-20){
	printf("%f F = %f C\n",fahr,(5.0/9.0)*(fahr-12));
}
return 0;
}



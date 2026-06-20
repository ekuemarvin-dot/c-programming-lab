#include<stdio.h>

int main(){
	int n;
	float temp;
printf("Welcome to the temperature converter\n1- Celsius  to  fahrenheit\n2- Fahrenheit to Celsius\n");

do{
printf("Make choice 1 or 2: ");
scanf("%d",&n);
}while(n!=1 && n!=2);


if(n=1){
	printf("Conversion Celsius to fahrenheit\n");
	do{
	printf("Enter a temperature: ");
		scanf("%f",&temp);
	}while(temp<-273.15);
;
	printf("%.2fC\t===>\t%.2fF",temp,temp*(9.0/5.0)+32);

}else{
	printf("Conversion fahrenheit to celsius\n");
	do{
	printf("Enter a temperature:");
		scanf("%f",&temp);
	}while(temp<-459.67);

	printf("%.2f\t==>\t%.2fC",temp,(temp-32)*(5.0/9.0));
}

return 0;
}


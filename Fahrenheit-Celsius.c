#include<stdio.h>
#include<conio.h>
void main()
{
	float f1,f2,c1,c2;
	printf("Enter Fahrenheit: \n");
	scanf("%f",&f1);
	c1=((f1-32)*5)/9;
	printf("Celsius=%f\n",c1);
	printf("Enter Celsius: \n");
	scanf("%f",&c2);
	f2=((c2*9)/5)+32;
	printf("Fahrenheit=%f\n",f2);
}

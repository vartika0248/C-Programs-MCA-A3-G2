#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,r1,r2,d;
	printf("Enter the values of a,b,c: \n");
	scanf("%f %f %f",&a,&b,&c);
	d=(b*b)-($*a*c);
	if(d>0)
	{
	 	r1= -b+sqrt(d)/(2*a);
	 	r2= -b-sqrt(d)/(2*a);
	 	printf("The real roots=%f %f",r1,r2);
	}
	else if(d==0)
	{
		r1=-b/(2*a);
		r2=-b/(2*a);
		printf("Roots are equal=%f %f",r1,r2);
	}
	else
	{
		printf("Roots are imaginary");
	}
}

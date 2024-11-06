#include<stdio.h>
#include<conio.h>
int add(int *a,int *b);
void main()
{
	int a=5,b=7,c;
	printf("Values of a and b: %d  %d\n",a,b);
	c=add(&a,&b);
	printf("Values of a and b after function: %d  %d\n",a,b);
}
int add(int *a, int *b)
{
	*a= *a + *b;
	*b= *b + 10;
	printf("Changed values of a and b: %d  %d\n",*a,*b);
	return 0;
}

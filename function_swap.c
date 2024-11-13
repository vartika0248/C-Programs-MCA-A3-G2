#include<stdio.h>
#include<conio.h>
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("Values after swapping: %d %d\n",x,y);
}
void main()
{
	int a,b;
	printf("Enter any two numbers:\n");
	scanf("%d %d",&a,&b);
	printf("Values before swapping: %d %d\n",a,b);
	swap(a,b);
	
}

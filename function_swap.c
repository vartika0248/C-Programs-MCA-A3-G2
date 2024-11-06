#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
{
	int x=10,y=25;
	printf("Values before swapping: %d  %d\n",x,y);
	swap(x,y);
	getch();
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("Values after swapping: %d  %d\n",x,y);
}

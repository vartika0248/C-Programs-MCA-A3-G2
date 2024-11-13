#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	printf("Enter elements in array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements in array with location are:\n");
	for(i=0;i<5;i++)
	{
		printf("%d at %d address\n",a[i],&a[i]);
	}
}

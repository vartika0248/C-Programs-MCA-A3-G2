#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],b[10],i;
	printf("Enter elements in array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		b[i]=a[i];
	}
	printf("Elements in array a are:\n");
	for(i=0;i<10;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\nElements in array b are:\n");
	for(i=0;i<10;i++)
	{
		printf("%d  ",b[i]);
	}
	
}

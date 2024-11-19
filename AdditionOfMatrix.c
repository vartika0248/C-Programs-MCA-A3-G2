#include<stdio.h>
#include<conio.h>
int main() 
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("Enter elements in array a:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf(" %d",&a[i][j]);
		}
	}
	printf("Enter elements in array b:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf(" %d",&b[i][j]);
		}
	}
	printf("Elements in array a:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
		printf("Elements in array a:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",b[i][j]);
		}
		printf("\n");
	}
	printf("Addition matrix of matrix a and b is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf(" %d",c[i][j]);
		}
		printf("\n");
	}
    return 0;
}

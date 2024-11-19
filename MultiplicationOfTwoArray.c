#include<stdio.h>
#include<conio.h>
int main() 
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
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
	printf("Multiplication matrix of matrix a and b is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]+=a[i][k]+b[j][k];
			}
			printf(" %d",c[i][j]);
		}
		printf("\n");
	}
    return 0;
}

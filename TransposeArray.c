#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],b[3][3],i,j;
	printf("Enter elements in array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf(" %d",&a[i][j]);
		}
	}
	printf("Elements in the array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of the matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf(" %d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

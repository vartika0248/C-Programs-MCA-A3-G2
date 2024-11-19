#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],i,j,sum=0;
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
			sum+=a[i][j];
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	printf("Sum of the elements is %d\n",sum);
	return 0;
}

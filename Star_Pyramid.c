#include<stdio.h>
#include<conio.h>
void main()
{
	int r,i,s,j;
	printf("Enter the no. of rows:\n");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(s=1;s<=r-i;s++)
		{
			printf("  ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

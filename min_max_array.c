#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,sum=0,max,min;
	printf("Enter elements in array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Average of elements:%d\n",(sum/5));
	min=a[0];
	max=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Highest Element: %d\n",max);
	printf("Lowest Element: %d\n",min);
	
	
}

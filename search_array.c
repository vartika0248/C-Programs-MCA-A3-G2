#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,s;
	printf("Enter elements in array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter number to search:\n");
	scanf("%d",&s);
	for(i=0;i<10;i++)
	{
		if(a[i]==s)
		{
			printf("Element found on %d index\n",&a[i]);
		}
	}
	
	
	
}
	

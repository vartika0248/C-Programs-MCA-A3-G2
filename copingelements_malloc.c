#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr,*ptr1;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Sorry!unable to allocate memory");
		exit(0);
	}
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr+i);
	}
	//Copying Elements
	ptr1=(int*)malloc(n*sizeof(int));
	if(ptr1==NULL)
	{
		printf("Sorry!Unable to allocate memory");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		*(ptr1+i)= *(ptr+i);
	}
	printf("First Array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",*(ptr+i));
	}
    printf("Second Array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",*(ptr1+i));
	}
	return 0;
	
}

#include<stdio.h>
int main()
{
	register int a=10,i,count=0;
	for(i=1;i<=10;i++)
	{
		printf("%d\n",a);
		count+=1;
	}
	printf("The count is %d\n",count);
	return 0;
}

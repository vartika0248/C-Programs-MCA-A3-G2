#include<stdio.h>
#include<conio.h>
int power(int n,int p)
{
	if(p!=0)
	{
		return (n*power(n,p-1));
	}
	else
	{
		return 1;
	}
}
int main()
{
	int n,p,r;
	printf("Enter a number:\n");
	scanf("%d",&n);
	printf("Enter power to calculate:\n");
	scanf("%d",&p);
	r=power(n,p);
	printf("Result=%d\n",r);
	return 0;
}

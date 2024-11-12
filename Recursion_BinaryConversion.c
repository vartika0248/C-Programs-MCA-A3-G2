#include<stdio.h>
#include<conio.h>
int binary(int num)
{
	if(num==0)
	{
		return 0;
	}
	else
	{
		return (num%2 + 10 * binary(num/2));
	}
}
int main()
{
	int n;
	printf("Enter any decimal number=\n");
	scanf("%d",&n);
	printf("%d",binary(n));
	return 0;
}

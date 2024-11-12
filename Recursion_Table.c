#include<stdio.h>
#include<conio.h>
void table(int a,int n)
{
	int num=a;
	if(n<=10)
	{
		printf("%d * %d = %d\n",num,n,(num*n));
		table(num,n+1);
	}
}
int main()
{
    int n;
	printf("Enter any number:\n");
    scanf("%d",&n);
    table(n,1);
    return 0;
}

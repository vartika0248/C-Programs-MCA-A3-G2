#include<stdio.h>
#include<conio.h>
int sum(int a)
{
	if(a<=10)
	{
	  return (a+sum(a+1));	
	}
	else 
	{
		return 0;
	}
}
int main()
{
	int n=1,s;
	s=sum(n);
	printf("%d",s);
	return 0;
}

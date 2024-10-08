#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,i;
printf("Enter vaalue of n:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 sum=sum+i;
 }
 printf("Sum = %d",sum);
 getch();
 clrscr();
 }
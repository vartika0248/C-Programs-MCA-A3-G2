#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,fact=1;
 printf("Enter any number to find Factorial: \n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  fact=fact*i;
 }
 printf("Factorial of %d is %d\n",n,fact);
 getch();
 clrscr();
 }

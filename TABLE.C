#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,r;
 printf("Enter no. to print table:\n");
 scanf("%d",&n);
 for(i=1;i<=10;i++)
 {
  r=n*i;
  printf("%d * %d = %d\n",n,i,r);
 }
 getch();
 clrscr();
 }
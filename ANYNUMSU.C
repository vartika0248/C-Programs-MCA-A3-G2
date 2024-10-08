#include<stdio.h>
#include<conio.h>
void main()
{
 int sum,i,n,avg,num;
 printf("Enter value of n:\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("Enter No.:\n");
  scanf("%d",&num);
  sum=sum+num;
 }
 printf("Sum= %d\n",sum);
 avg=sum/n;
 printf("Averge= %d",avg);
 getch();
 clrscr();
 }
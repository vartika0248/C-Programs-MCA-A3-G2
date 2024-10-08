#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,odd_sum=0,even_sum=0;
 printf("Enter value for n:\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  if(i%2==0)
  {
   printf("%d\n",i);
   even_sum+=i;
  }
 }
 printf("Even no.s sum= %d\n",even_sum);
 for(i=1;i<=n;i++)
 {
  if(i%2!=0)
  {
   printf("%d\n",i);
   odd_sum+=i;
  }
 }
 printf("Odd no.s sum= %d",odd_sum);
 getch();
 clrscr();
 }
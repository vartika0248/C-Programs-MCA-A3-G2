#include<stdio.h>
#include<conio.h>
void main()
{
 int n,count=0,r=0,max;
 printf("Enter a binary number:\n");
 scanf("%d",&n);
 do
 {
  r=n%10;
  if(r==0)
  {
      count++;
  }
  if(r==1)
    {
      count=0;
      }
  if(max<count)
  {
   max=count;
  }
  n=n/10;
  }
  while(n!=0);
  printf("Maximun number of Consecutive 0s : %d",max);
  getch();
  clrscr();
  }
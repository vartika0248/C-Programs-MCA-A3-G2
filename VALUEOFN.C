#include<stdio.h>
#include<conio.h>
void main()
{
 int m;
 printf("Enter any number:\n");
 scanf("%d",&m);
 if(m>0)
  {
   printf("The value of n=1");
  }
 else if(m==0)
  {
   printf("The value of n=0");
  }
 else if(m<0)
  {
   printf("The value of n=-1");
  }
 else
  {
   printf("Wrong Input");
  }
 getch();
 clrscr();
 }
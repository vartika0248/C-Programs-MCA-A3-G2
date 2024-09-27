#include<conio.h>
#include<stdio.h>
void main()
{
  int a,b,c;
  printf("Enter any three numbers: \n");
  scanf("%d %d %d",&a,&b,&c);
  if((a>b)|(b>c))
  {
   if(a>b)
   {
    printf("a is the largest number among a,b & c.");
   }
   else
   {
    printf("b is the largest number among a,b & c.");
   }
  }
   else
   {
    printf("c is the largest number among a,b & c.");
   }
   getch();
   clrscr();

 }
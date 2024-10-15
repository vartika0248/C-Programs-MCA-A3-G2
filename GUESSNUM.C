#include<stdio.h>
#include<conio.h>
void main()
{
 int n,num;
 printf("Enter any number:\n");
 scanf("%d",&n);
 do
 {
  printf("Enter number= \n");
  scanf("%d",&num);
 }
 while(num!=n);
 printf("No.is matching.");
 getch();
 clrscr();
 }
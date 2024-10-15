#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 printf("Enter any number to reverse:\n");
 scanf("%d",&n);
 do {
  printf("%d",n%10);
  n=n/10;
 }
 while(n!=0);
 getch();
 clrscr();
 }
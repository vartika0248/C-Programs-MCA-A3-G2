#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i;
 printf("Enter n:\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("Cube of %d= %d\n",i,(i*i*i));
 }
 getch();
 clrscr();
 }
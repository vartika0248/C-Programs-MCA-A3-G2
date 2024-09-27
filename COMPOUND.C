#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 double principal=20000;
 double rate=10;
 double time=2;
 double amount=principal*(pow((1+rate/100),time));
 double CI=amount-principal;
 printf("Compound Interest is %lf",CI);
 getch();
 clrscr();

}

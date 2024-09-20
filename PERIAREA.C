#include<stdio.h>
#include<conio.h>
void main()
{
 int a=-10,b=8,s=4,r=4,B=5,h=8,p=4;
 printf("Area of Square=%d\n",s*s);
 printf("Perimeter of Square=%d\n",4*s);
 printf("Area of Rectangle=%d\n",a*b);
 printf("Perimeter of Rectangle=%d\n",(a+b)/2);
 printf("Area of Circle=%f\n",(3.14*r*r));
 printf("Perimeter of Circle=%f\n",(2*3.14*r));
 printf("Area of a triangle=%d\n",(B*h)/2);
 printf("Perimeter of a triangle=%d\n",(B+h+p));
 getch();
 clrscr();
}
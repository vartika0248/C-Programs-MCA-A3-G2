#include<stdio.h>
#include<conio.h>
void main()
{
int l=10,b=5,h=8,r=5;
int choice;
printf("Enter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
 case 1:
    {
     printf("Area of Circle=%f",(3.14*r*r));
     break;
    }
 case 2:
    {
     printf("Area of Rectangle=%d",l*b);
     break;
    }
 case 3:
    {
     printf("Area of Triangle=%d",((b*h)/2));
     break;
    }
 default:
    {
     printf("Wrong Choice");
    }
}
getch();
clrscr();
}
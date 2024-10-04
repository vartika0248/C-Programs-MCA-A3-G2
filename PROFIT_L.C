#include<conio.h>
#include<stdio.h>
void main()
{
 int CP,SP,L,P;
 printf("Enter Cost Price:\n");
 scanf("%d",&CP);
 printf("Enter Selling Price: \n");
 scanf("%d",&SP);
 if(CP>SP)
   {
    L=CP-SP;
    printf("Loss=%d",L);
   }
 else
   {
    P=SP-CP;
    printf("Profit=%d",P);
   }
 getch();
 clrscr();
 }
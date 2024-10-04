#include<stdio.h>
#include<conio.h>
void main()
{
 int math_m,chem_m,phys_m;
 int total,math_phys_total;
 printf("Enter marks of Maths:\n");
 scanf("%d",&math_m);
 printf("Enter marks of Chemistry:\n");
 scanf("%d",&chem_m);
 printf("Enter marks of Physics:\n");
 scanf("%d",&phys_m);
 if((math_m>=65) && (phys_m>=55) && (chem_m>=50))
  {
   total=math_m + phys_m +chem_m;
   math_phys_total= math_m + phys_m;
   if((total>=190) | (math_phys_total>=140))
    {
     printf("Student is Eligible");
    }
   else
    {
     printf("Student is not Eligible");
    }
   }
  else
  {
   printf("Student is not Eligible");
  }
  getch();
  clrscr();
  }
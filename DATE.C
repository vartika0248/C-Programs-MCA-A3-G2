#include<stdio.h>
#include<conio.h>
void main()
{
 int day,month,year,j,k,f;
 printf("Enter day,month and year:\n");
 scanf("%d %d %d",&day,&month,&year);
 if(month==01)
 {
  month=month+12;
  year=year-1;
 }
 if(month==02)
 {
  month=month+12;
  year=year-1;
  }
  j=year/100;
  k=year%100;
  f=((day+((13*(month+1))/5)+k+(k/4)+(j/4)+(5*j))%7);
  switch(f)
  {
   case 0: printf("Saturday");
	   break;
   case 1: printf("Sunday");
	   break;
   case 2: printf("Monday");
	   break;
   case 3: printf("Tuesdsay");
	   break;
   case 4: printf("Wednesday");
	   break;
   case 5: printf("Thursday");
	   break;
   case 6: printf("Friday");
	   break;
   default: printf("Invalid");
   }
   getch();
   clrscr();
  }
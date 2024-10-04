#include<stdio.h>
#include<conio.h>
void main()
{
 int roll_no,m1,m2,m3,total;
 float per;
 char name[20];
 printf("Enter roll number and name:\n");
 scanf("%d %s",&roll_no,&name);
 printf("Enter marks of three subjects:\n");
 scanf("%d %d %d",&m1,&m2,&m3);
 total=m1+m2+m3;
 per=((total*100)/300);
 printf(" Student Name : %s\n Roll No.:%d \n Total Marks: 300\n",name,roll_no);
 printf(" Marks Obtained:%d\n Percentage: %f\n",total,per);
 if(per>75)
 {
  printf(" Division 1");
 }
 else if((per<75) && (per>45))
 {
  printf(" Division 2");
  }
 else if((per<44) && (per>25))
 {
  printf(" Division 3");
  }
  else
  {
   printf(" Fail");
  }
 getch();
 clrscr();
 }
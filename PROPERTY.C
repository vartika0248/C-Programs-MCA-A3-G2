#include<stdio.h>
#include<conio.h>
void main()
{
int s1,s2,s3;
printf("Enter 3 sides of triangle:\n");
scanf("%d %d %d",&s1,&s2,&s3);
if((s1==s2) && (s2==s3))
{
 printf("Triangle is Equilateral");
}
else if((s1==s2) | (s1==s3) | (s2==s3))
{
 printf("Triangle is Isoceles");
}
else
{
 printf("Triangle is Scalene");
}
getch();
clrscr();
}
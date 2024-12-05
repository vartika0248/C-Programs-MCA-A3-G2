#include<stdio.h>
int main()
{
	struct student{
		char name[20];
		int roll_no;
		int marks[3];
	};
	struct student stud[100];
	int n,i;
	printf("Enter total no. of students:\n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter details of students:\n");
		printf("Student Name:\n");
		scanf("%s",&stud[i].name);
		printf("Roll Number:\n");
		scanf("%d",&stud[i].roll_no);
		printf("Marks of subject 1:\n");
		scanf("%d",&stud[i].marks[1]);
		printf("Marks of subject 2:\n");
		scanf("%d",&stud[i].marks[2]);
		printf("Marks of subject 3:\n");
		scanf("%d",&stud[i].marks[3]);
	
	}
	printf("Details of student whose average is above 75%:\n\n\n");
	for(i=0;i<n;i++)
	{
		int total=stud[i].marks[1]+stud[i].marks[2]+stud[i].marks[3];
		float avg=total/3;
		if(total>225)
		{
			
		}
	}
}

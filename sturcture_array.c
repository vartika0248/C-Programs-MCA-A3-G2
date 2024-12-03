#include<stdio.h>
int main()
{
	struct student{
		int roll_no;
		float total_marks;
		char name[50];
	};
	struct student stud[100];
	int n,i;
	printf("Enter total number of students:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter details of student %d:\n",(i+1));
		printf("Name:\n");
		scanf("%s",&stud[i].name);
		printf("Roll no.:\n");
		scanf("%d",&stud[i].roll_no);
		printf("Total Marks:\n");
		scanf("%f",&stud[i].total_marks);
	}
	printf("STUDENT DETAILS:\n\n\n");
	for(i=0;i<n;i++)
	{
	printf("Roll no.:%d\nName:%s\nTotal Marks:%.2f\n\n",stud[i].roll_no,stud[i].name,stud[i].total_marks);
}
	return 0;
}

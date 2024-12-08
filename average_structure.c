#include<stdio.h>
int main()
{
	struct student{
		char name[20];
		int roll_no;
		int marks[3];
	};
	struct student stud[100];
	int n,i,j;
	printf("Enter total no. of students:\n\n");
	scanf("%d",&n);
	printf("Enter details of students:\n");
	for(i=0;i<n;i++)
	{
		printf("Student Name:\n");
		scanf("%s",&stud[i].name);
		printf("Roll Number:\n");
		scanf("%d",&stud[i].roll_no);
		for(j=0;j<n;j++)
		{
		printf("Marks of subject %d:\n",j+1);
		scanf("%d",&stud[i].marks[j]);
	    }	
	}
	printf("\n\nDetails of student whose average is above 75%:\n\n");
	for(i=0;i<n;i++)
	{
		int total=stud[i].marks[0]+stud[i].marks[1]+stud[i].marks[2];
		float avg=total/3;
		if(avg>75.00)
		{
		    printf("Student Name:%s\n",stud[i].name);
		    printf("Roll No.:%d\n",stud[i].roll_no);
		    printf("Marks of Subject 1:%d\n",stud[i].marks[0]);
		    printf("Marks of Subject 2:%d\n",stud[i].marks[1]);
		    printf("Marks of Subject 3:%d\n",stud[i].marks[2]);
		    printf("Total Marks:%d\n",total);
	    	printf("Average= %.2f\n\n",avg);	
		}
	}
	return 0;
}

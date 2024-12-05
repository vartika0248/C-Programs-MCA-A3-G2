#include<stdio.h>
int main()
{
	struct employee{
		char name[20];
		int ID;
		float salary;
		int year;
	};
	struct employee emp[100];
	int n,i;
	float bonus=0.00;
	printf("Enter total number of employees:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter details of employees:\n");
		printf("Employee Name:\n");
		scanf("%s",&emp[i].name);
		printf("Employee ID:\n");
		scanf("%d",&emp[i].ID);
		printf("Employee Salary:\n");
		scanf("%f",&emp[i].salary);
		printf("Working Till(years):\n");
		scanf("%d",&emp[i].year);	
	}
	printf("\n\n");
	printf("Details of the Employees:\n\n\n");
	for(i=0;i<n;i++)
	{  
		bonus=(emp[i].salary*10)/100;
		printf("Employee Name:%s\nEmployee ID:%d\nSalary:%.3f\nYears of Experience:%d\n",
		emp[i].name,emp[i].ID,emp[i].salary,emp[i].year);
		if(emp[i].year>5)
		{
			printf("Bonus:%.3f\n\n",bonus);
		}
		else
		{
			printf("No Bonus\n\n");
		}
	}
	return 0;
}


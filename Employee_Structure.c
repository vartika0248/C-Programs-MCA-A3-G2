#include<stdio.h>
int main()
{
	struct employee{
		int id;
		float salary;
		char name[50];
		char dept[15];
	};
	struct employee emp={408,150000.00,"Vartika","Development"};
	printf("Employee ID:%d\nEmployee Name:%s\nSalary:%.2f\nDepartment:%s\n",emp.id,emp.name,emp.salary,emp.dept);
	return 0;
}

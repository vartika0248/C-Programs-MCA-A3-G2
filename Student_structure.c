#include<stdio.h>
int main()
{
	struct student{
		int roll_no;
		float marks;
		char name[50];
		int no;
	};
	struct student stud={1,69.56,"Vartika",1234567890};
	printf("Roll no.:%d\nName:%s\nMarks:%.2f\nMobile no.:%d\n",stud.roll_no,stud.name,stud.marks,stud.no);
	return 0;
}

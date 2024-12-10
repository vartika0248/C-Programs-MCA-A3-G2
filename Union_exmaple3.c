#include<stdio.h>
#include<string.h>
int main(){
union Student {

int rollNo;

float marks;

char name[20];};

union Student stud1;

stud1.rollNo = 1;

printf("Roll No: %d\n", stud1.rollNo); // Prints Roll No

stud1.marks = 90.5;

printf("Marks: %.2f\n", stud1.marks); // Prints Marks (Roll No is overwritten)

strcpy(stud1.name, "Alice");

printf("Name: %s\n", stud1.name);
}

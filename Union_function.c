#include<stdio.h>
union Data
{
	int i;
	float f;
	char c;
};
void printUnion(union Data d)
{
	printf("Integer Value: %d\n",d.i);
	printf("Float Value: %.2f\n",d.f);
	printf("Char Value: %c\n",d.c);
}
int main()
{
	union Data data;
	data.i=42;
	printf("Assigned Integer: %d\n",data.i);
	printUnion(data);
	printf("\n\n");
	data.f=3.14;
	printf("Assigned Float: %.2f\n",data.f);
	printUnion(data);
	printf("\n\n");
	data.c='A';
	printf("Assigned Char: %c\n",data.c);
	printUnion(data);
	return 0;
}

#include<stdio.h>
enum operations{ADD=1,SUBTRACT,MULTIPLY,DIVIDE};
int main()
{
	int a=5,b=10;
	enum operations op;
	op=MULTIPLY;
	switch(op)
	{
		case ADD:
			printf("Addition=%d",a+b);
			break;
		case SUBTRACT:
			printf("Subtraction=%d",a-b);
			break;
		case MULTIPLY:
			printf("Multiply=%d",a*b);
			break;
		case DIVIDE:
			printf("Division=%d",a/b);
			break;
		default:
			printf("Invalid");
	}
	return 0;
}

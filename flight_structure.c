#include<stdio.h>
int main()
{
	struct passenger{
		char name[20];
		int age;
		int seat;
		char sclass[];
	};
	struct passenger p[100];
	int n,i,count=0;
	printf("Enter total number of passengers:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter details of passengers:\n");
		printf("Passenger Name:\n");
		scanf("%s",&p[i].name);
		printf("Passenger Age:\n");
		scanf("%d",&p[i].age);
		printf("Seat Number:\n");
		scanf("%d",&p[i].seat);
		printf("Class:\n");
		scanf("%s",&p[i].sclass);	
	}
	char c[]="economy";
	printf("\n\nTotal Number of passengers= %d\n\n",n);
	printf("Details of employess who have Economy class:\n\n");
	for(i=0;i<n;i++)
	{
	  if(strcmp(p[i].sclass,c)==1)
	  {
	  	count++;
	  	printf("Passenger Name:%s\nAge:%d\nSeat Number:%d\nClass:Economy\n\n",p[i].name,p[i].age,p[i].seat,);
	  }	
	}
	printf("Total number of passengers in Economy Class:%d\n",count);
	return 0;
}

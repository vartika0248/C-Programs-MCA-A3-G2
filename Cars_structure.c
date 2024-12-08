#include<stdio.h>
int main()
{
	struct CAR{
		char brand[20];
		int model;
		int year;
		float price;
	};
	struct CAR cars[100];
	int n,i;
	printf("Enter total no. of Cars:\n\n");
	scanf("%d",&n);
	printf("Enter details of Cars:\n");
	for(i=0;i<n;i++)
	{
		printf("Brand Name:\n");
		scanf("%s",&cars[i].brand);
		printf("Model Number:\n");
		scanf("%d",&cars[i].model);
		printf("Year:\n");
		scanf("%d",&cars[i].year);
		printf("Price:\n");
		scanf("%f",&cars[i].price);
    }
    printf("\n\nCars older than 2015:\n\n");
    for(i=0;i<n;i++)
    {
    	if(cars[i].year<2015)
    	{
    		printf("Brand Name:%s\nModel Number:%d\nYear:%d\nPrice:%.2f\n\n",cars[i].brand,
			cars[i].model,cars[i].year,cars[i].price);
		}
    	
	}
}

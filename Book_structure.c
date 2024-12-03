#include<stdio.h>
int main()
{
	struct Book{
		char title[20];
		char author_name[20];
		float price;
		int stock;
	};
	struct Book book[100];
	int n,i;
	printf("Enter number of books:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Details of Book %d:\n",(i+1));
		printf("Title:\n");
		scanf("%s",&book[i].title);
		printf("Auther Name:\n");
		scanf("%s",&book[i].author_name);
		printf("Price:\n");
		scanf("%f",&book[i].price);
		printf("Stock:\n");
		scanf("%d",&book[i].stock);
	}
	printf("\n\n");
	printf("Details of book who have stock more than 10:\n\n\n");
	for(i=0;i<n;i++)
	{
		if(book[i].stock>10)
		{
			printf("Book Title:%s\nAuthor Name:%d\nPrice:%f\nStock Available:%d\n\n",book[i].title,book[i].author_name
			,book[i].price,book[i].stock);
		}
	}
	return 0;
}

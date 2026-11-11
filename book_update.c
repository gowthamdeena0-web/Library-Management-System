#include "library.h"

void book_update(ST *hptr)
{
	char op;

	if(hptr==NULL)
	{
		printf("No Books Available...\n");
		return;
	}

	printf("\n");
	printf("=============================\n");
	printf("      UPDATE MENU\n");
	printf("=============================\n");
	printf("A. By Book ID\n");
	printf("B. By Book Name\n");
	printf("C. Back\n");
	printf("=============================\n");

	printf("Enter Your Choice : ");
	scanf(" %c",&op);

	if(op=='A'||op=='a')
	{
		int id;

		printf("Enter Book ID : ");
		scanf("%d",&id);

		while(hptr)
		{
			if(hptr->bookid==id)
			{
				printf("\nBook Found...\n");

				printf("Enter New Title : ");
				scanf(" %[^\n]",hptr->title);

				printf("Enter New Author : ");
				scanf(" %[^\n]",hptr->author);

				printf("Enter New Quantity : ");
				scanf("%d",&hptr->quantity);

				printf("Book Updated Successfully...\n");
				return;
			}

			hptr=hptr->next;
		}

		printf("Book Not Found...\n");
	}

	else if(op=='B'||op=='b')
	{
		char title[50];

		printf("Enter Book Name : ");
		scanf(" %[^\n]",title);

		while(hptr)
		{
			if(strcmp(hptr->title,title)==0)
			{
				printf("\nBook Found...\n");

				printf("Enter New Title : ");
				scanf(" %[^\n]",hptr->title);

				printf("Enter New Author : ");
				scanf(" %[^\n]",hptr->author);

				printf("Enter New Quantity : ");
				scanf("%d",&hptr->quantity);

				printf("Book Updated Successfully...\n");
				return;
			}

			hptr=hptr->next;
		}

		printf("Book Not Found...\n");
	}
}

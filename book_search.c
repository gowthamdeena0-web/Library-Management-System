#include "library.h"

void book_search(ST *hptr)
{
	char op;

	if(hptr==NULL)
	{
		printf("No Books Available...\n");
		return;
	}

	printf("\n");
	printf("=============================\n");
	printf("      SEARCH MENU\n");
	printf("=============================\n");
	printf("A. By Book ID\n");
	printf("B. By Book Name\n");
	printf("C. By Author Name\n");
	printf("D. Back\n");
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
				printf("\nBook Found\n");
				printf("Book ID : %d\n",hptr->bookid);
				printf("Title   : %s\n",hptr->title);
				printf("Author  : %s\n",hptr->author);
				printf("Quantity: %d\n",hptr->quantity);
				return;
			}
			hptr=hptr->next;
		}

		printf("Book Not Found...\n");
	}
	else if(op=='B'||op=='b')
	{
		char title[50];

		printf("Enter Book Title : ");
		scanf(" %[^\n]",title);

		while(hptr)
		{
			if(strcmp(hptr->title,title)==0)
			{
				printf("\nBook Found\n");
				printf("Book ID : %d\n",hptr->bookid);
				printf("Title   : %s\n",hptr->title);
				printf("Author  : %s\n",hptr->author);
				printf("Quantity: %d\n",hptr->quantity);
				return;
			}

			hptr=hptr->next;
		}

		printf("Book Not Found...\n");
	}
	else if(op=='C'||op=='c')
	{
		char author[50];
		int flag=0;

		printf("Enter Author Name : ");
		scanf(" %[^\n]",author);

		while(hptr)
		{
			if(strcmp(hptr->author,author)==0)
			{
				flag=1;

				printf("%d\t%s\t%s\t%d\n",
				hptr->bookid,
				hptr->title,
				hptr->author,
				hptr->quantity);
			}

			hptr=hptr->next;
		}

		if(flag==0)
			printf("No Books Found...\n");
	}
	else
	{
		return;
	}
}

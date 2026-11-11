#include "library.h"

void book_remove(ST **hptr)
{
	char op;

	ST *temp,*prev;

	if(*hptr==NULL)
	{
		printf("No Books Available...\n");
		return;
	}

	printf("\n");
	printf("=============================\n");
	printf("      REMOVE MENU\n");
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

		temp=*hptr;
		prev=NULL;

		while(temp)
		{
			if(temp->bookid==id)
			{
				printf("\nBook Found\n");
				printf("Book ID : %d\n",temp->bookid);
				printf("Title   : %s\n",temp->title);

				printf("\nDelete This Book(Y/N) : ");

				scanf(" %c",&op);

				if(op=='Y'||op=='y')
				{
					if(prev==NULL)
					{
						*hptr=temp->next;
					}
					else
					{
						prev->next=temp->next;
					}

					free(temp);

					printf("Book Deleted Successfully...\n");
				}

				return;
			}

			prev=temp;
			temp=temp->next;
		}

		printf("Book Not Found...\n");
	}

	else if(op=='B'||op=='b')
	{
		char title[50];

		printf("Enter Book Title : ");
		scanf(" %[^\n]",title);

		temp=*hptr;
		prev=NULL;

		while(temp)
		{
			if(strcmp(temp->title,title)==0)
			{
				printf("%d\t%s\t%s\t%d\n",
				temp->bookid,
				temp->title,
				temp->author,
				temp->quantity);
			}

			temp=temp->next;
		}

		int id;

		printf("\nEnter Book ID To Delete : ");
		scanf("%d",&id);

		temp=*hptr;
		prev=NULL;

		while(temp)
		{
			if(temp->bookid==id)
			{
				printf("Delete This Book(Y/N) : ");
				scanf(" %c",&op);

				if(op=='Y'||op=='y')
				{
					if(prev==NULL)
						*hptr=temp->next;
					else
						prev->next=temp->next;

					free(temp);

					printf("Book Deleted Successfully...\n");
				}

				return;
			}

			prev=temp;
			temp=temp->next;
		}

		printf("Book Not Found...\n");
	}
}


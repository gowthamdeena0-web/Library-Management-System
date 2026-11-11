#include "library.h"

void book_add(ST **hptr)
{
	static int id=1000;

	char op;

	ST *newnode,*temp;

	do
	{
		newnode=(ST *)malloc(sizeof(ST));

		if(newnode==NULL)
		{
			printf("Memory Allocation Failed...\n");
			return;
		}

		newnode->bookid=id++;

		printf("Enter Book Title : ");
		scanf(" %[^\n]",newnode->title);

		printf("Enter Author Name : ");
		scanf(" %[^\n]",newnode->author);

		printf("Enter Quantity : ");
		scanf("%d",&newnode->quantity);

		newnode->next=NULL;

		if(*hptr==NULL)
		{
			*hptr=newnode;
		}
		else
		{
			temp=*hptr;

			while(temp->next!=NULL)
			{
				temp=temp->next;
			}

			temp->next=newnode;
		}

		printf("\nBook Added Successfully...\n");
		printf("Book ID : %d\n",newnode->bookid);

		printf("\nDo You Want To Add Another Book(Y/N) : ");
		scanf(" %c",&op);

	}while(op=='Y'||op=='y');
}

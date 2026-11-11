#include "library.h"

void issue_book(ST *hptr,ISSUE **iptr)
{
	static int issueid=1;

	int bid;

	ISSUE *newnode,*temp;

	if(hptr==NULL)
	{
		printf("No Books Available...\n");
		return;
	}

	printf("Enter Book ID : ");
	scanf("%d",&bid);

	while(hptr)
	{
		if(hptr->bookid==bid)
		{
			if(hptr->quantity<=0)
			{
				printf("Book Not Available...\n");
				return;
			}

			newnode=(ISSUE *)malloc(sizeof(ISSUE));

			newnode->issueid=issueid++;

			newnode->bookid=bid;

			printf("Enter User ID : ");
			scanf("%d",&newnode->userid);

			printf("Enter User Name : ");
			scanf(" %[^\n]",newnode->username);

			printf("Enter Issue Date(dd/mm/yyyy) : ");
			scanf("%s",newnode->issuedate);

			printf("Enter Due Date(dd/mm/yyyy) : ");
			scanf("%s",newnode->duedate);

			strcpy(newnode->returndate,"Not Returned");

			newnode->fine=0;

			newnode->next=NULL;

			if(*iptr==NULL)
			{
				*iptr=newnode;
			}
			else
			{
				temp=*iptr;

				while(temp->next)
					temp=temp->next;

				temp->next=newnode;
			}

			hptr->quantity--;

			printf("\nBook Issued Successfully...\n");

			return;
		}

		hptr=hptr->next;
	}

	printf("Book Not Found...\n");
}

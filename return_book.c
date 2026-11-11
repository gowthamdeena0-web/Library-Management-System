#include "library.h"

void return_book(ST *hptr,ISSUE *iptr)
{
	int issueid;
	char rdate[20];

	if(iptr==NULL)
	{
		printf("No Issued Books...\n");
		return;
	}

	printf("Enter Issue ID : ");
	scanf("%d",&issueid);

	while(iptr)
	{
		if(iptr->issueid==issueid)
		{
			printf("Enter Return Date(dd) : ");
			scanf("%s",rdate);

			strcpy(iptr->returndate,rdate);

			int due,ret;

			due=atoi(iptr->duedate);
			ret=atoi(iptr->returndate);

			if(ret>due)
			{
				iptr->fine=(ret-due)*5;
			}
			else
			{
				iptr->fine=0;
			}

			while(hptr)
			{
				if(hptr->bookid==iptr->bookid)
				{
					hptr->quantity++;
					break;
				}

				hptr=hptr->next;
			}

			printf("\nBook Returned Successfully...\n");
			printf("Fine Amount : %.2f\n",iptr->fine);

			return;
		}

		iptr=iptr->next;
	}

	printf("Issue ID Not Found...\n");
}

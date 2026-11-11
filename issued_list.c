#include "library.h"

void issued_list(ISSUE *iptr)
{
	if(iptr==NULL)
	{
		printf("No Issued Books...\n");
		return;
	}

	printf("\n");

	printf("====================================================================================================\n");

	printf("IssueID\tBookID\tUserID\tUserName\tIssueDate\tDueDate\t\tReturnDate\tFine\n");

	printf("====================================================================================================\n");

	while(iptr)
	{
		printf("%d\t%d\t%d\t%s\t\t%s\t%s\t%s\t%.2f\n",

		iptr->issueid,
		iptr->bookid,
		iptr->userid,
		iptr->username,
		iptr->issuedate,
		iptr->duedate,
		iptr->returndate,
		iptr->fine);

		iptr=iptr->next;
	}

	printf("====================================================================================================\n");
}

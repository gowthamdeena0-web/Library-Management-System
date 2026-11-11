#include "library.h"

void book_view(ST *hptr)
{
	if(hptr==NULL)
	{
		printf("No Books Available...\n");
		return;
	}

	printf("\n");

	printf("================================================================================\n");
	printf("%-10s %-25s %-25s %-10s\n",
			"Book ID",
			"Title",
			"Author",
			"Quantity");

	printf("================================================================================\n");

	while(hptr!=NULL)
	{
		printf("%-10d %-25s %-25s %-10d\n",
				hptr->bookid,
				hptr->title,
				hptr->author,
				hptr->quantity);

		hptr=hptr->next;
	}

	printf("================================================================================\n");
}

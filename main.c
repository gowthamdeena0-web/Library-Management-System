#include "library.h"

int main()
{
	ST *hptr=NULL;
	ISSUE *iptr=NULL;

	int choice;

	do
	{
		printf("\n");
		printf("========================================\n");
		printf("      LIBRARY MANAGEMENT SYSTEM\n");
		printf("========================================\n");
		printf("1. Add New Book\n");
		printf("2. Update Book Details\n");
		printf("3. Remove Book\n");
		printf("4. Search Book\n");
		printf("5. View All Books\n");
		printf("6. Issue Book\n");
		printf("7. Return Book\n");
		printf("8. List Issued Books\n");
		printf("9. Save\n");
		printf("10. Exit\n");
		printf("========================================\n");

		printf("Enter Your Choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				book_add(&hptr);
				break;

			case 2:
				book_update(hptr);
				break;

			case 3:
				book_remove(&hptr);
				break;

			case 4:
				book_search(hptr);
				break;

			case 5:
				book_view(hptr);
				break;

			case 6:
				issue_book(hptr,&iptr);
				break;

			case 7:
				return_book(hptr,iptr);
				break;

			case 8:
				issued_list(iptr);
				break;

			case 9:
				save(hptr);
				break;

			case 10:
				printf("\n");
				printf("=============================\n");
				printf("1. Save and Exit\n");
				printf("2. Exit Without Save\n");
				printf("=============================\n");

				int op;

				printf("Enter Choice : ");
				scanf("%d",&op);

				if(op==1)
				{
					save(hptr);
					printf("Data Saved Successfully...\n");
				}

				printf("Exiting...\n");
				break;

			default:
				printf("Invalid Choice...\n");
		}

	}while(choice!=10);

	return 0;
}

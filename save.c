#include "library.h"

void save(ST *hptr)
{
	FILE *fp;

	fp=fopen("Library_database.txt","w");

	if(fp==NULL)
	{
		printf("File Not Opened...\n");
		return;
	}

	while(hptr)
	{
		fprintf(fp,"%d %s %s %d\n",
				hptr->bookid,
				hptr->title,
				hptr->author,
				hptr->quantity);

		hptr=hptr->next;
	}

	fclose(fp);

	printf("Data Saved Successfully...\n");
}

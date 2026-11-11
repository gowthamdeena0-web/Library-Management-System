#ifndef LIBRARY_H
#define LIBRARY_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct book
{
	int bookid;
	char title[50];
	char author[50];
	int quantity;

	struct book *next;

}ST;


/* Issue Record Structure */

typedef struct issue
{
	int issueid;
	int bookid;

	int userid;
	char username[50];

	char issuedate[20];
	char duedate[20];
	char returndate[20];

	float fine;

	struct issue *next;

}ISSUE;


/* Book Management Functions */

void book_add(ST **);
void book_update(ST *);
void book_remove(ST **);
void book_search(ST *);
void book_view(ST *);


/* Issue Management Functions */

void issue_book(ST *,ISSUE **);
void return_book(ST *,ISSUE *);
void issued_list(ISSUE *);


/* File Handling */

void save(ST *);

#endif


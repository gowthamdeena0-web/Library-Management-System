out:main.o book_add.o book_search.o book_view.o issued_list.o return_book.o book_remove.o book_update.o issue_book.o save.o 
	cc main.c book_add.c book_search.c book_view.c issued_list.c return_book.c book_remove.c book_update.c issue_book.c save.c -o out
main.o :main.c
	cc -c main.c
book_add.o:book_add.c
	cc -c book_add.c
book_search.o:book_search.c
	cc -c book_search.c
book_view.o:book_view.c
	cc -c book_view.c
issued_list.o:issued_list.c
	cc -c issued_list.c
return_book.o:return_book.c
	cc -c return_book.c
book_remove.o:book_remove.c
	cc -c book_remove.c
book_update.o:book_update.c
	cc -c book_update.c
issue_book.o:issue_book.c
	cc -c issue_book.c
save.o:save.c
	cc -c save.c



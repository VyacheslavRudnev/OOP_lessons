#include "Book.h"

class LibrariProvider
{
private:
	Book* books = nullptr;
	uint64_t size;
public:
	void addBooks(Book* books);
	Book* getBooks();
	
	bool addBook(Book* new_book);
	bool removeBook();
	bool searchBook();
	bool setAvailabilityBook();
	bool displayAvailableBooks();

	LibrariProvider();
	LibrariProvider(uint64_t size);
	~LibrariProvider();
};
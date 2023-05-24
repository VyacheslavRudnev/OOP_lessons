#include "../book/Book.h"

class BookLibrary
{
private:
	Book* books;
	int booksCount;
	int size;
	void extend_memmory(int step);
public:
	//setters
	void setBooks(Book* books);
	void setBooksCount(int booksCount);
	void setSize(int size);
	//getters
	Book* getBooks();
	int getBooksCount();
	int getSize();
	//methods
	bool isFull();
	bool isEmpty();
	void addBook(Book book);
	bool removeBook(int index);
	bool removeBook(Book book);
	bool removeBook(string title);
	Book* searchBook(string title);
	bool setAvailability(Book book);
	bool setAvailability(int index);

	//constructors
	BookLibrary();
	BookLibrary(Book* books);
	BookLibrary(int size);
	BookLibrary(Book* books,int bookCount, int size);
	//destructor
	~BookLibrary();

};
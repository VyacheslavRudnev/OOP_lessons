#include "book_library.h"

//setters
void BookLibrary::setBooks(Book* books)
{
	this->books = books;
}
void BookLibrary::setBooksCount(int booksCount)
{
	this->booksCount = booksCount;
}
void BookLibrary::setSize(int size)
{
	this->size = size;
}
//getters
Book* BookLibrary::getBooks()
{
	return books;
}
int BookLibrary::getBooksCount()
{
	return booksCount;
}
int BookLibrary::getSize()
{
	return size;
}
//methods
void BookLibrary::extend_memmory(int step = 10)
{
	setSize(getSize() + step);
	Book* temp = new Book[getSize()];
	for (size_t i = 0; i <= getBooksCount(); i++)
	{
		temp[i] = books[i];
	}
	delete[]books;
	books = temp;
}
bool BookLibrary::isFull()
{
	return (booksCount == size) ? true : false;
}
bool BookLibrary::isEmpty()
{
	return (booksCount == 0) ? true : false;
}
void BookLibrary::addBook(Book book)
{
	if (isFull())
	{
		extend_memmory();
	}
	booksCount++;
	books[booksCount] = book;
}
bool BookLibrary::removeBook(int index)
{
	if (index<0 || index>booksCount)
	{
		return false;
	}
	Book* temp = new Book[getSize()];
	booksCount--;
	for (size_t i = 0; i <= getBooksCount(); i++)
	{
		if (i < index)
		{
			temp[i] = books[i];
		}
		else if (i >=index)
		{
			temp[i] = books[i + 1];
		}
	}
	delete[]books;
	books = temp;
	return true;
	}
bool BookLibrary::removeBook(Book book)
{
	int index = -1;
	for (size_t i = 0; i <= getBooksCount(); i++)
	{
		if (book.getTitle() == books[i].getTitle()
			&& book.getAuthor() == books[i].getAuthor()
			&& book.getYear() == books[i].getYear())
		{
			index = i;
			return removeBook(index);
		}
	}
	return false;
}
bool BookLibrary::removeBook(string title)
{
	int index = -1;
	for (size_t i = 0; i <= getBooksCount(); i++)
	{
		if (title == books[i].getTitle())
		{
			index = i;
			return removeBook(index);
		}
	}
	return false;
}
Book* BookLibrary::searchBook(string title)
{
	for (size_t i = 0; i <= getBooksCount(); i++)
	{
		if (title == books[i].getTitle())
		{
			return &books[i];
		}
	}
	return nullptr;
}
bool BookLibrary::setAvailability(Book book)
{
	int index = -1;
	for (size_t i = 0; i <= getBooksCount(); i++)
	{
		if (book.getTitle() == books[i].getTitle()
			&& book.getAuthor() == books[i].getAuthor()
			&& book.getYear() == books[i].getYear())
		{
			index = i;
			return setAvailability(index);
		}
	}
	return false;
}
bool BookLibrary::setAvailability(int index)
{
	if (index<0 || index>booksCount)
	{
		return false;
	}
	else 
	{
		if (books[booksCount].getIsAvelible())
		{
			return false;
		}
		else
		{
			books[booksCount].setIsAvelible(false);
			return true;
		}
	}
	
}

//constructors
BookLibrary::BookLibrary(Book* books)
{
	setBooks(books);
}
BookLibrary::BookLibrary()
{
	setSize(10);
	setBooksCount(-1);
	setBooks(new Book[getSize()]);
}
BookLibrary::BookLibrary(int size)
{
	setSize(size);
	setBooksCount(-1);
	setBooks(new Book[getSize()]);
}
BookLibrary::BookLibrary(Book* books, int bookCount, int size)
{
	setSize(size);
	setBooksCount(bookCount);
	setBooks(books);
}
//destructor

BookLibrary::~BookLibrary()
{
	delete[] books;
	booksCount=0;
	size=0;
}
#include "BookProvider.h"

void LibrariProvider::addBooks(Book* books)
{
	this->books = books;
}

Book* LibrariProvider::getBooks() {
	return books;
}

bool LibrariProvider::addBook(Book* new_book = nullptr)
{
	if (new_book == nullptr)
	{
				cout << "Enter Author: ";
		string author;
		getline(cin, author);
		cout << "Enter Year: ";
		int year;
		cin >> year;
		new_book = new Book(author, year);
	}
	books = new_book;
	return true;
}
bool LibrariProvider::removeBook()
{
	return true;
}
bool LibrariProvider::searchBook()
{
	
}
bool LibrariProvider::setAvailabilityBook()
{
	
}
bool LibrariProvider::displayAvailableBooks()
{

}

LibrariProvider::LibrariProvider()
{
	size = 1;
	books = new Book[size];
}
LibrariProvider::LibrariProvider(uint64_t size)
{
	books = new Book[size];
}
LibrariProvider::~LibrariProvider()
{
	delete[] books;
	books = nullptr;
}
#include "Book.h"

void Book::setTitle(string title)
{
	if (title.empty())
		this->title = "NULL";
	else
		this->title = title;
}

void Book::setAuthor(string author)
{
	if (author.empty())
		this->author = "NULL";
	else
		this->author = author;
}

void Book::setYear(int year)
{
	if (year >= 1500 && year <= 2023)
	{
		this->year = (uint16_t)year;
	}
	else
	{
		this->year = 0;
	}
}

bool Book::setIsAvailable() // потрібно допрацювати умови
{
	return true;
}

string Book::getTitle()
{
	return title;
}

string Book::getAuthor()
{
	return author;
}

uint16_t Book::getYear()
{
	return year;
}

bool Book::getIsAvailable()
{
	return isAvailable;
}

Book::Book()
{
	setTitle("Test book");
	setAuthor("Rudnev.V");
	setYear(2023);
	setIsAvailable();
}

Book::Book(string author) :Book()
{
	setAuthor(author);
	setYear(2023);
}

Book::Book(string author, int year) : Book(author)
{
	setAuthor(author);
	setYear(2020);

}

Book::Book(const Book& book)
{
	setTitle(book.title);
	setAuthor(book.author);
	setYear(book.year);
	setIsAvailable();
}

Book::~Book()
{
	cout << " Delete object! " << endl;
	setTitle(" ");
	setAuthor(" ");
	setYear(0);
	setIsAvailable();
}
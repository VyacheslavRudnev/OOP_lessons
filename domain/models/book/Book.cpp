#include "Book.h"

void Book::setTitle(string title)
{
	if (title.empty())
	{
		this->title = "NULL";
	}
	else
	{
		this->title = title;
	}
	
}
void Book::setAuthor(string author)
{
	if (author.empty())
	{
		this->author = "NULL";
	}
	else
	{
		this->author = author;
	}
}
void Book::setYear(int year)
{
	this->year = year;
}
void Book::setIsAvelible(bool isAvelible)
{
	this->isAvelible = isAvelible;
}

string Book::getTitle()
{
	return this->title;
}
string Book::getAuthor()
{
	return this->author;
}
int Book::getYear()
{
	return this->year;
}
bool Book::getIsAvelible()
{
	return this->isAvelible;
}

Book::Book()
{
	setTitle(" ");
	setAuthor(" ");
	setYear(0);
	setIsAvelible(true);
}
Book::Book(string title):Book()
{
	setTitle(title);
}
Book::Book(string title, string author):Book(title)
{
	setAuthor(author);
}
Book::Book(string title, string author, int year):Book(title, author)
{
	setYear(year);
}
Book::Book(string title, string author, int year, bool isAvelible) :Book(title, author, year)
{
	setIsAvelible(isAvelible);
	if (title.empty())
	{
		this->setIsAvelible(false);
	}
}
Book::Book(const Book& book)
{
	setTitle(book.title);
	setAuthor(book.author);
	setYear(book.year);
	setIsAvelible(book.isAvelible);
}


Book::~Book()
{
	this->title.clear();
	this->author.clear();
}

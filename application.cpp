#include "library.h"

class Book
{
private:
	string title;
	string author;
	uint16_t year;
	bool isAvailable;

public:

	void setTitle(string title)
	{
		if (title.empty())
			this->title = "NULL";
		else
			this->title = title;
	}

	void setAuthor(string author)
	{
		if (author.empty())
			this->author = "NULL";
		else
			this->author = author;
	}

	void setYear(int year)
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

	bool setIsAvailable() // потрібно допрацювати умови
	{
		return true;
	}

	string getTitle()
	{
		return title;
	}

	string getAuthor()
	{
		return author;
	}

	uint16_t getYear()
	{
		return year;
	}

	bool getIsAvailable()
	{
		return isAvailable;
	}

	Book()
	{
		setTitle("Test book");
		setAuthor("Rudnev.V");
		setYear(2023);
		setIsAvailable();
	}
	
	Book(string author):Book()
	{
		setAuthor(author);
		setYear(2023);
	}

	Book(string author, int year) : Book(author)
	{
		setAuthor(author);
		setYear(2020);
		
	}

	explicit Book(const Book & book)
	{
		setTitle(book.title);
		setAuthor(book.author);
		setYear(book.year);
		setIsAvailable();
	}

	~Book()
	{
		cout << " Delete object! " << endl;
		setTitle(" ");
		setAuthor(" ");
		setYear(0);
		setIsAvailable();
	}


};


int main()
{
	Book a, b("Rudnev", 2022);
	Book a_copy(a);

	cout << "a Title : " << a.getTitle() << endl;
	cout << "a Author : " << a.getAuthor() << endl;
	cout << "a Year : " << a.getYear() << endl;
	cout << "a IsAvailable : " << a.getIsAvailable() << endl;
	cout << "_____________________" << endl;
	cout << "b Title : " << b.getTitle() << endl;
	cout << "b Author : " << b.getAuthor() << endl;
	cout << "b Year : " << b.getYear() << endl;
	cout << "b IsAvailable : " << b.getIsAvailable() << endl;
	cout << "_____________________" << endl;
	cout << "a_copy Title : " << a_copy.getTitle() << endl;
	cout << "a_copy Author : " << a_copy.getAuthor() << endl;
	cout << "a_copy Year : " << a_copy.getYear() << endl;
	cout << "a_copy IsAvailable : " << a_copy.getIsAvailable() << endl;
	
	return 0;
}
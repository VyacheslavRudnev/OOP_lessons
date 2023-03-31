#include <iostream>
#include <string> 
#include <windows.h> 

using namespace std;

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
	
	/*Book(string title,string author)
	{
		setTitle(title);
		setAuthor(author);
		setYear(0);
		setIsAvailable();
	}*/

	Book(string title, string author) : Book()
	{
		setTitle(title);
		setAuthor(author);
	}


};


int main()
{
	Book a, b("BOOK", "Rudnev");
	/*a.getTitle();
	a.getAuthor();
	a.getYear();
	a.getIsAvailable();*/

	cout << "a Title " << a.getTitle() << endl;
	cout << "a Author " << a.getAuthor() << endl;
	cout << "a Year " << a.getYear() << endl;
	cout << "a IsAvailable " << a.getIsAvailable() << endl;
	cout << "_____________________" << endl;
	cout << "b Title " << b.getTitle() << endl;
	cout << "b Author " << b.getAuthor() << endl;
	cout << "b Year " << b.getYear() << endl;
	cout << "b IsAvailable " << b.getIsAvailable() << endl;
	
	
	return 0;
}
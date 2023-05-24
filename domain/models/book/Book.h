#include "../../../internal/library.h"

class Book
{

private:
	string title;
	string author;
	int year;
	int isAvelible;
public:
	//setters
	void setTitle(string title);
	void setAuthor(string author);
	void setYear(int year);
	void setIsAvelible(bool isAvelible);
	//getters
	string getTitle();
	string getAuthor();
	int getYear();
	bool getIsAvelible();
	//constructors
	Book();
	Book(string title);
	Book(string title, string author);
	Book(string title, string author, int year);
	Book(string title, string author, int year, bool isAvelible);

	Book(const Book& book);
	//destructor	
	~Book();

};


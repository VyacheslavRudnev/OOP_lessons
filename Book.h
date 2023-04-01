#include "library.h"

class Book
{
private:
	string title;
	string author;
	uint16_t year;
	bool isAvailable;

public:

	void setTitle(string title);
	void setAuthor(string author);
	void setYear(int year);
	bool setIsAvailable(); // потрібно допрацювати умови
	
	string getTitle();
	string getAuthor();
	uint16_t getYear();
	bool getIsAvailable();
	
	Book();
	Book(string author);
	Book(string author, int year);
	explicit Book(const Book& book);
	
	~Book();


};

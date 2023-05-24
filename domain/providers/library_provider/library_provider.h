#include "../../models/book_library/book_library.h"
#include "../../../presentation/dialogs/consol_dialogs.h"

class LibraryProvider
{
private:
	BookLibrary* bookLibrary;
public:
	void setBookLibrary(Book* book, int size)
	{
		bookLibrary = new BookLibrary(book, size, 10);
	}
	void ShowLibrary()
	{
		Book* books = bookLibrary->getBooks();
		for (size_t i = 0; i < bookLibrary->getBooksCount(); i++)
		{
			println("����� � : " << i + 1);
			println("����� : " << books[i].getTitle());
			println("����� : " << books[i].getAuthor());
			println("г� : " << books[i].getYear());
			print("����������: ");
			if (books[i].getIsAvelible())
			{
				Dialogs::access_message("��������");
			}
			else
			{
				Dialogs::error_message("����������");
			}
			next_line;
			next_line;
		}
	}
	void removeBook(string title)
	{
		bookLibrary->removeBook(title);
	}

	void exit() {
		delete bookLibrary;
	}

	Book* searchBook(string title) 
	{
		return bookLibrary->searchBook(title);
	}

	bool setAvailability(Book book)
	{
		return bookLibrary->setAvailability(book);
	}

	bool setAvailability(int index) 
	{
		return bookLibrary->setAvailability(index);
	}

	~LibraryProvider()
	{
		println("~LibraryProvider()");
		delete bookLibrary;
	}

};


#include "../screens.h"

void Screens::Home()
{
	
	int booksCount = 10;
	Book* book = new Book[booksCount];
	book[0] = Book("����� 1", "����� 1", 2000, true);
	book[1] = Book("����� 2", "����� 2", 2001, true);
	book[2] = Book("����� 3", "����� 3", 2002, true);
	book[3] = Book("����� 4", "����� 4", 2003, false);
	book[4] = Book("", "����� 5", 2004, true);
	book[5] = Book("����� 6", "����� 6", 2005, false);
	book[6] = Book("����� 7", "", 2006, true);
	book[7] = Book("����� 8", "����� 8", 2007, false);
	book[8] = Book("", "����� 9", 2008, true);
	book[9] = Book("����� 10", "����� 10", 2009, false);

	LibraryProvider libraryProvider;
	libraryProvider.setBookLibrary(book, booksCount);
	libraryProvider.ShowLibrary();

}

void Screens::displayMenu() {
	println("==== ³���� � �������� ! ====");
	println("1. ������ �����");
	println("2. �������� �����");
	println("3. ����� �����");
	println("4. ���������� ������ ���������� �����");
	println("5. ����� ��������� ����");
	println("6. �����");
	println("������ ��� ���� (1-6): ");

	int choice;
	int booksCount = 10;
	cin >> choice;
	string title;
	LibraryProvider libraryProvider;


	switch (choice) {
	case 1:
	{
		Book book;
		println("������ ����� �����: ");
		cin.ignore();
		getline(cin, title);
		book.setTitle(title);
		book.setAuthor("����� 1");
		book.setYear(2000);
		book.setIsAvelible(true);
		libraryProvider.setBookLibrary(&book, 1);
		libraryProvider.ShowLibrary();
		displayMenu();
		break;
	}
	case 2:
	{
		println("������ ����� �����: ");
		cin.ignore();
		getline(cin, title);
		libraryProvider.removeBook(title);
		libraryProvider.ShowLibrary();
		displayMenu();
		break;
	}
	case 3:
	{
		println("������ ����� �����: ");
		cin.ignore();
		getline(cin, title);
		Book* book = libraryProvider.searchBook(title);
		if (book != nullptr) 
		{
			bool isAvailable;
			println("������ ������ ���������� (1 - ��������, 0 - ����������): ");
			cin >> isAvailable;
			book->setIsAvelible(isAvailable);
			println("������ ���������� ����� ��������.");
		}
		else {
			println("����� �� ��������.");
		}
		break;
	}
	case 4:
	{
		println("������ ����� �����: ");
		cin.ignore();
		getline(cin, title);
		libraryProvider.setAvailability(title);
		libraryProvider.ShowLibrary();
		displayMenu();
		break;
	}
	case 5:
	{
		libraryProvider.ShowLibrary();
		displayMenu();
		break;
	}
	case 6:
	{
		println("�� ���������!");
		libraryProvider.exit();
		break;
	}
	default:
	{
		println("������� ����. ��������� �� ���.");
		next_line;
		displayMenu();
		break;
	}
	}
}









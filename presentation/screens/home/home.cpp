#include "../screens.h"

void Screens::Home()
{
	
	int booksCount = 10;
	Book* book = new Book[booksCount];
	book[0] = Book("Книга 1", "Автор 1", 2000, true);
	book[1] = Book("Книга 2", "Автор 2", 2001, true);
	book[2] = Book("Книга 3", "Автор 3", 2002, true);
	book[3] = Book("Книга 4", "Автор 4", 2003, false);
	book[4] = Book("", "Автор 5", 2004, true);
	book[5] = Book("Книга 6", "Автор 6", 2005, false);
	book[6] = Book("Книга 7", "", 2006, true);
	book[7] = Book("Книга 8", "Автор 8", 2007, false);
	book[8] = Book("", "Автор 9", 2008, true);
	book[9] = Book("Книга 10", "Автор 10", 2009, false);

	LibraryProvider libraryProvider;
	libraryProvider.setBookLibrary(book, booksCount);
	libraryProvider.ShowLibrary();

}

void Screens::displayMenu() {
	println("==== Вітаємо в бібліотеці ! ====");
	println("1. Додати книгу");
	println("2. Видалити книгу");
	println("3. Пошук книги");
	println("4. Встановити статус доступності книги");
	println("5. Показ доступних книг");
	println("6. Вихід");
	println("Зробіть свій вибір (1-6): ");

	int choice;
	int booksCount = 10;
	cin >> choice;
	string title;
	LibraryProvider libraryProvider;


	switch (choice) {
	case 1:
	{
		Book book;
		println("Введіть назву книги: ");
		cin.ignore();
		getline(cin, title);
		book.setTitle(title);
		book.setAuthor("Автор 1");
		book.setYear(2000);
		book.setIsAvelible(true);
		libraryProvider.setBookLibrary(&book, 1);
		libraryProvider.ShowLibrary();
		displayMenu();
		break;
	}
	case 2:
	{
		println("Введіть назву книги: ");
		cin.ignore();
		getline(cin, title);
		libraryProvider.removeBook(title);
		libraryProvider.ShowLibrary();
		displayMenu();
		break;
	}
	case 3:
	{
		println("Введіть назву книги: ");
		cin.ignore();
		getline(cin, title);
		Book* book = libraryProvider.searchBook(title);
		if (book != nullptr) 
		{
			bool isAvailable;
			println("Введіть статус доступності (1 - Доступна, 0 - Недоступна): ");
			cin >> isAvailable;
			book->setIsAvelible(isAvailable);
			println("Статус доступності книги оновлено.");
		}
		else {
			println("Книга не знайдена.");
		}
		break;
	}
	case 4:
	{
		println("Введіть назву книги: ");
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
		println("До побачення!");
		libraryProvider.exit();
		break;
	}
	default:
	{
		println("Невірний вибір. Спробуйте ще раз.");
		next_line;
		displayMenu();
		break;
	}
	}
}









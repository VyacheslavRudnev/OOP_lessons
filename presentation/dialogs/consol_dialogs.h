#include "../../internal/library.h"

enum Colors
{
	Default = 7,
	Green = 10,
	Red = 12,
	Yellow = 14,
};

class Dialogs {
public:
	static void error_message(string message)
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, Colors::Red);
		cout << message;
		SetConsoleTextAttribute(hConsole, Colors::Default);
	}
	static void warning_message(string message)
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, Colors::Yellow);
		cout << message;
		SetConsoleTextAttribute(hConsole, Colors::Default);
	}
	static void access_message(string message)
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, Colors::Green);
		cout << message;
		SetConsoleTextAttribute(hConsole, Colors::Default);
	}
};
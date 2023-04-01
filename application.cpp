#include "library.h"




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
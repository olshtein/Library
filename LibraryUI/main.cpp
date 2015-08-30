#include <iostream>
#include <string>
//#include "LibraryBE\Book.h"

using namespace std;

void main()
{
	cout << "Hello Staff!\nWelcome to the Library" << endl;
	cout << endl << "Please choose an option below:" << endl
		<< " 1. Borrow book\n 2. Return Book"<<endl;

	int _choice;
	cin >> _choice;

	switch (_choice)
	{
	case 1://borrow book
	{
			   cout << "Which book would you like to borrow?" << endl;
		break;
	}
	case 2://return book
	{
		cout << "Entered Return Book";
		break;
	}
	default:
		break;
	}

	system("pause");
	return;
}
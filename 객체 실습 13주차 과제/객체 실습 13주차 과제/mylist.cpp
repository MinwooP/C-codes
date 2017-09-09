// mylist.cpp
#include "mylist.h"

using namespace std;

// @method_name: constructor  of the class
// @method_abstract: initialize the elements of the array listItem[]
// @parameter: int initnum
// @return: none
Mylist::Mylist(int initnum)
{
	ptrlist = listItem;

	for (int i = 0; i < 10; i++)
	{*(ptrlist + i) = initnum;}
}


// @method_name: management
// @method_abstract: management the overall sequence
// @parameter: none
// @return: void
void Mylist::management()
{
	int menu;
	cin >> menu;
	// cin은 enter전까지 입력받음?ㅣ
	switch (menu)
	{
		if (sizeof(menu) != 4)
			cout << "please enter the integer ^-^";

	case(0):
		printlist();
		management();
		break;

	case(-1):
		if(*ptrlist != 0)
			deleteitem();
		else if (*ptrlist == 0)
		{
			cout << "the list is already empty . . "
				<< "you can't delete the item\n";
		}
		management();
		break;

	case(100):
		cout << "exit now...\n";
		break;

	default:
		if (*(ptrlist + 9) == 0)
			additem(menu);
		else if (*(ptrlist + 9) != 0)
		{
			cout << "the list is already full . . "
				<< "you can't add the item\n";
		}
		management();
		break;
	}
}


// @method_name: printmessage
// @method_abstract: print the first message
// @parameter: double X1
// @return: void
void Mylist::printmessage()
{
	cout << "insert number < 0:printlist, -1:deleteItem, 100:exit >\n";
}


// @method_name: printlist
// @method_abstract: print the array listItem's elements 
// @parameter: none
// @return: void
void Mylist::printlist()
{
	cout << "now list has . . .\n";
	cout << "------------------------------\n";
	for (int i = 0; i < 10; i++)
	{
		cout << *(ptrlist + i) << " ";
	}
	cout << "\n------------------------------\n";
}


// @method_name: additem
// @method_abstract: add entered item to list
// @parameter: none
// @return: void
void Mylist::additem(int num)
{
	for (int i = 0; i < 10; i++)
	{
		if (*(ptrlist + i) == 0)
		{
			*(ptrlist + i) = num;
			break;
		}
	}
}

// @method_name: deleteitem
// @method_abstract: change the element to 0
// @parameter: none
// @return: void
void Mylist::deleteitem()
{
	for (int i = 0; i < 10; i++)
	{
		if (*(ptrlist + 9 - i) != 0)
		{
			*(ptrlist + 9 - i) = 0;
			break;
		}
	}
}
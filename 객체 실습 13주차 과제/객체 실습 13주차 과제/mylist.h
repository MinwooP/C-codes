// mylist.h
#include <iostream>


/**
* @author:     Minerva
* @date:       2017. 05. 29
* @brief:      get and print arraylist using pointers 
* @modified:   none
* @abstarct:   none
* @difficulty: low
*/

class Mylist
{
public:

	/* FUNCTION PROTOTYPE*/
	Mylist(int);
	void management();
	void printmessage();
	void printlist();
	void additem(int num);
	void deleteitem();

private:
	int listItem[10];
	int* ptrlist;
};
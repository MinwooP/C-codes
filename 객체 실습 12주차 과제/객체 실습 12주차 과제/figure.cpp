// figure.cpp

#include "figure.h"
using namespace std;


// @method_name: printMessage
// @method_abstract: 
// 1. print the message to get sentence with english
// 2. assign the value 0 to array str[] to check the size of array
// 3. copy array str[] to array copystr[]
// @parameter: none
// @return: void
void SortingChar::printMessage()
{
	cout << "input the sentence(only english with lowercase): ";
	
	for (int i = 0; i < 100 ;i++)
		str[i] = 0;

	cin >> str;
	arraysize = 0;
	while (str[arraysize] != 0)
		arraysize++;

	for (int i = 0; i < 100; i++)
		copystr[i] = str[i];
	/* the reason to make copy of str : 
	array is processed with call by reference */
}


// @method_name: insertionSorting
// @method_abstract: do insertion sort with array[]
// @parameter: char array[]
// @return: void
void SortingChar::insertionSorting(char array[])
{
	int insert;

	for (int i = 0; i < arraysize; i++)
	{
		insert = array[i];

		int moveItem = i;
		
		while ((moveItem > 0) && (array[moveItem - 1] > insert))
		{
			array[moveItem] = array[moveItem - 1];
			moveItem--;
		}

		array[moveItem] = insert;	
	}

	cout << "sorting: ";
	
	for (int i = 0; i < 100; i++)
	{
		cout << array[i];
	}

	cout << endl;
}


// @method_name: backwardSorting
// @method_abstract: reverse the array[]
// @parameter: char array[]
// @return: void
void SortingChar::backwardSorting(char array[])
{
	cout << "backward: ";
	for (int i = arraysize-1; i >= 0; i--)
	{
		cout << array[i];
	}

	cout << endl;	
}


// @method_name: halfSorting
// @method_abstract: print only the half part of array[]
// @parameter: char array[]
// @return: void
void SortingChar::halfSorting(char array[])
{
	cout << "half: ";
	for (int i = 0; i < arraysize/ 2; i++)
	{
		cout << array[i];
	}

	cout << endl;

}


// @method_name: management
// @method_abstract: management the overall sequence
// @parameter: none
// @return: void
void SortingChar::management()
{
	printMessage();
	insertionSorting(str);
	backwardSorting(copystr);
	halfSorting(copystr);
}
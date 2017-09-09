#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name)
{
	setCourseName(name);
}
//������ �Լ� �ȿ� set�Լ��� �־ ����?

void GradeBook::setCourseName(string name)
{
	if (name.size() <= 25) //name.size() 
						   //The C++ Standard Library's string class defines a member function size that returns 
		                   //thd number of characters in a string object
		courseName = name;
	if (name.size() > 25)
	{
		courseName = name.substr(0, 25); //start at 0, length of 25
		// C++ Standard class string provides memv=ber function subst that returns a new string object created
		// by copying part of an existing string object
		cerr << "Name \"" << name << "\" exceeds maximum length (25).\n"
			<< "Limiting courseName to first 25 characters.\n" << endl;
	}
}

string GradeBook::getCourseName() const
{
	return courseName;
}

void GradeBook::displayMessage() const
{
	cout << "Welcome to the grade book for\n" << getCourseName()
		<< "!" << endl;
}
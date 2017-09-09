#include <iostream> 
#include "GradeBook.h"
using namespace std;

//���⿡�� Ŭ���� GradeBook�� �Լ����� ����
//GradeBook�� �Լ����� ��Ÿ���� ���� �Լ��� �տ� GradeBook::�� ���� 
GradeBook::GradeBook(string name)
	: courseName(name)
{

}

void GradeBook::setCourseName(string name)
{
	courseName = name;
}

string GradeBook::getCouresName() const
{
	return courseName;
}

void GradeBook::displayMessage() const
{
	cout << "Welcome to the grade book for\n" << getCouresName()
		<< "!" << endl;
}




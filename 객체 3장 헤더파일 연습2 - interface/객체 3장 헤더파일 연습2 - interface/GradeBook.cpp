#include <iostream> 
#include "GradeBook.h"
using namespace std;

//여기에다 클래스 GradeBook의 함수들을 정의
//GradeBook의 함수임을 나타내기 위해 함수명 앞에 GradeBook::을 써줌 
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




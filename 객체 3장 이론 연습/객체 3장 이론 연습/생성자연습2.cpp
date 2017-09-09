#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
	GradeBook(string name) : courseName(name){  }

	void setCourseame(string name)
	{
		courseName = name;
	}

	string getCourseName() const
	{
		return courseName;
	}

	void displayMessage() const
	{
		cout << "Welcome to the grade book for\n" << getCourseName()
			<< "!" << endl;
	}

private:
	string courseName;
};

int main()
{
	GradeBook gradeBook1("CS101 Introduction");
	GradeBook gradeBook2("CS102 ~~");

	cout << "gradeBook1 created ";
}
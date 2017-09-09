#include <iostream>
#include <string>    //string이라는 데이터 타입을 사용하기 위햐서  #include 해야함?ㄹ
using namespace std;  

class GradeBook
{
public:

	explicit GradeBook( string name  )  //생성자 함수
		: courseName( name )
	{

	}

	void setCourseName(string name)
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
	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CS102 Data Structures in C++");

	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
	     << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		 << endl;
}
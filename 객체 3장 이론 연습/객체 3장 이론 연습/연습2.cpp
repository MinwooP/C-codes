#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:

	void setCourseName(string name)
	{
		courseName = name;
	}

	string getCourseName() const // const - 이 함수가 실행될 때 객체를 수정해서는 안됨
	{
		return courseName;
	}

	void displayMessage() const //상수 멤버 함수- 데이터 멤버 값을 변하지 않게
	{
		cout << "Welcome to the grade book for\n" << getCourseName() << "!"
			<< endl;
	}
	 
private: //private - 그 클래스의 함수를 통해서만 접근될 수 있음
	string courseName;
};

int main()
{
	string nameOfCourse;
	GradeBook myGradeBook;

	cout << "initial course name is:" << myGradeBook.getCourseName()
		<< endl;
	//보통 int sum; 하고 sum을 사용하면 garbage값 나오는데
	//여기서 getcoursename사용하면 coursename의 값이 나오는데 왜 아무것도 출력이 안됨?
	


	cout << "\nPlease enter the course name:" << endl;
	getline(cin, nameOfCourse);
	myGradeBook.setCourseName(nameOfCourse);

	cout << endl;
	myGradeBook.displayMessage();
}
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

	string getCourseName() const // const - �� �Լ��� ����� �� ��ü�� �����ؼ��� �ȵ�
	{
		return courseName;
	}

	void displayMessage() const //��� ��� �Լ�- ������ ��� ���� ������ �ʰ�
	{
		cout << "Welcome to the grade book for\n" << getCourseName() << "!"
			<< endl;
	}
	 
private: //private - �� Ŭ������ �Լ��� ���ؼ��� ���ٵ� �� ����
	string courseName;
};

int main()
{
	string nameOfCourse;
	GradeBook myGradeBook;

	cout << "initial course name is:" << myGradeBook.getCourseName()
		<< endl;
	//���� int sum; �ϰ� sum�� ����ϸ� garbage�� �����µ�
	//���⼭ getcoursename����ϸ� coursename�� ���� �����µ� �� �ƹ��͵� ����� �ȵ�?
	


	cout << "\nPlease enter the course name:" << endl;
	getline(cin, nameOfCourse);
	myGradeBook.setCourseName(nameOfCourse);

	cout << endl;
	myGradeBook.displayMessage();
}
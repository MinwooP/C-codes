#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public: 
	void displayMessage(string courseName) // string�̶�� data type�� courseName�̶�� �Ķ���� ���
	{                                      // ?string coursename; �̶�� ������̵� �Ű������� ��� ����?
		cout << "Welcome to the grade book for\n" << courseName << "!"
			<< endl;
	}
};

int main()
{
	string nameOfCourse;
	GradeBook myGradeBook;

	cout << "Please enter the course name:" << endl;
	getline(cin, nameOfCourse);  //getline�� �Լ�. �Է¹��� ���ڿ��� nameOfCourse�� ����
	                             //?���⼭ nameOfCourse��� �׳� coursename���� �ȵ�?  ����
	cout << endl;				 //getline�� ���� ������ ������ �Է¹��� �� ����
	                            //(�������� cin�� �ٸ�)

	myGradeBook.displayMessage(nameOfCourse); //���⼭ nameOfCourse�� argumernt - ����
	                                          //�̷��� �Լ��� ����� ���� ()�ȿ� � ���� �;��� ex) ����, ���ڿ���
											  
	return 0;
}
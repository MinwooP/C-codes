#include <iostream>  // �Ƚᵵ ��
#include "GradeBook1.h" // "(quote)�� ����ڰ� ������ ��������̶� ���� �ǹ��Ѵ�
                       // < >(angle bracket)�� C++ Standard Library�� �ִٴ� ���� �ǹ̤�
using namespace std;

int main()
{

	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CSS102 Data Structures in C++");

	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;
}
#include <iostream>  // 안써도 됨
#include "GradeBook1.h" // "(quote)는 사용자가 정의한 헤더파일이란 것을 의미한다
                       // < >(angle bracket)는 C++ Standard Library에 있다는 것을 의미ㄹ
using namespace std;

int main()
{

	GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2("CSS102 Data Structures in C++");

	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;
}
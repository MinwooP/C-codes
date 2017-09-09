#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public: 
	void displayMessage(string courseName) // string이라는 data type인 courseName이라는 파라미터 사용
	{                                      // ?string coursename; 이라는 선언없이도 매개변수로 사용 가능?
		cout << "Welcome to the grade book for\n" << courseName << "!"
			<< endl;
	}
};

int main()
{
	string nameOfCourse;
	GradeBook myGradeBook;

	cout << "Please enter the course name:" << endl;
	getline(cin, nameOfCourse);  //getline은 함수. 입력받은 문자열이 nameOfCourse에 저장
	                             //?여기서 nameOfCourse대신 그냥 coursename쓰면 안됨?  ㅇㅇ
	cout << endl;				 //getline은 엔터 누르기 전까지 입력받을 수 있음
	                            //(이점에서 cin과 다름)

	myGradeBook.displayMessage(nameOfCourse); //여기서 nameOfCourse는 argumernt - 인자
	                                          //이렇게 함수를 사용할 때는 ()안에 어떤 값이 와야함 ex) 정수, 문자열니
											  
	return 0;
}
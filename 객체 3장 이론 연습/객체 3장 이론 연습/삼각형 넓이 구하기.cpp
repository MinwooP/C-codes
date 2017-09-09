#include <iostream>  // <iostream>이라는 헤더파일 포함
#include <string> // <string>이라는 헤더파일 포함
using namespace std;  // 표준공간 namespace 사용 

class Point     // Point class 생성
{
private:        // 멤버 접근 명시자: private
	double x;    // 실수형 변수 x 정의
	double y;    // 실수형 변수 y 정의


public:         // 멤버 접근 명시자: public
	Point(double a, double b)  // 생성자 함수
	{
		x = a;    // x에 a 대입
		y = b;    // y에 b 대입
	};

	void SetX(double X1)// Set함수 정의- return값 없음, paramater는 X1
	{
		x = X1;          // X1을 x에 대입
	}

	void SetY(double Y1) // Set함수 정의- return값 없음, paramater는 X1
	{
		y = Y1;          // Y1을 y에 대입
	}

	double GetX() const  // Get함수 정의- return값 실수형, parameter 없음
	{
		return x;  // x값 전달
	}

	double GetY() const
	{
		return y; // y값 전달
	}

	void ShowInfo() // ShowInfo함수 정의-return값 
	{
		cout << "[" << x << ", " << y << "] "; // [ , ] [ , ] [ , ] 형식으로 출력
	}

};

int main()     // main함수 정의
{
	Point p1(0, 0);    // 세 점 초기값 설정
	Point p2(3, 0);
	Point p3(10, 3);

	p1.ShowInfo();  // 세 점 Showinfo함수로 출력
	p2.ShowInfo();
	p3.ShowInfo();

	cout << "\nTriangle Area is: " << (p2.GetX() - p1.GetX())*(p3.GetY() - p2.GetY()) * 1 / 2 << "\n";
	// 삼각형의 넓이 출력

	p1.SetX(2); // Set함수를 이용해 p1의 x값 재설정
	p1.SetY(3); // Set함수를 이용해 p1의 y값 재설정
	p2.SetX(4); // Set함수를 이용해 p2의 x값 재설정
	p2.SetY(3); // Set함수를 이용해 p2의 y값 재설정
	p3.SetX(2); // Set함수를 이용해 p3의 x값 재설정
	p3.SetY(6); // Set함수를 이용해 p3의 y값 재설정

	p1.ShowInfo(); //  재설정된 p1의 x, y값 Showinfo함수로 출력 
	p2.ShowInfo(); //  재설정된 p2의 x, y값 Showinfo함수로 출력 
	p3.ShowInfo(); //  재설정된 p3의 x, y값 Showinfo함수로 출력 

	cout << "\nTriangle Area is: " << (p2.GetX() - p1.GetX())*(p3.GetY() - p2.GetY()) * 1 / 2 << "\n";
	//  재설정된 삼각형의 넓이 출력
	return 0;
}

//
#pragma once
#include <iostream>
using namespace std; 

class myMath // myMath class 선언
{
public: //public 멤버 접근 명시자


	// 함수 프로토타입
	void ShowMenu();
	void management();
	void PowerFunction();
	void PowerFunction1(int num1, int num2);
	void PowerFunction1(double num1, double num2);
	void CommonDivisiors();
	void CommonDivisiors1(int num1, int num2);
	void CommonDivisiors1(double num1, double num2);
	void Fibonacci();
	int Fibonacci1(int num1);
	void Fibonacci1(double num1);

private: //private - class의 member함수 외에는 private으로 명시된 변수나 함수를 변경할 수 없음ㅣ
	int n, k;
};
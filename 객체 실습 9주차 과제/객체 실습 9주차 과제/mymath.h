#pragma once
#include <iostream>
using namespace std; 

class myMath // myMath class ����
{
public: //public ��� ���� �����


	// �Լ� ������Ÿ��
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

private: //private - class�� member�Լ� �ܿ��� private���� ��õ� ������ �Լ��� ������ �� ������
	int n, k;
};
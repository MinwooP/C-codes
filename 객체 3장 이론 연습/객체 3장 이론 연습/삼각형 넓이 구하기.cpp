#include <iostream>  // <iostream>�̶�� ������� ����
#include <string> // <string>�̶�� ������� ����
using namespace std;  // ǥ�ذ��� namespace ��� 

class Point     // Point class ����
{
private:        // ��� ���� �����: private
	double x;    // �Ǽ��� ���� x ����
	double y;    // �Ǽ��� ���� y ����


public:         // ��� ���� �����: public
	Point(double a, double b)  // ������ �Լ�
	{
		x = a;    // x�� a ����
		y = b;    // y�� b ����
	};

	void SetX(double X1)// Set�Լ� ����- return�� ����, paramater�� X1
	{
		x = X1;          // X1�� x�� ����
	}

	void SetY(double Y1) // Set�Լ� ����- return�� ����, paramater�� X1
	{
		y = Y1;          // Y1�� y�� ����
	}

	double GetX() const  // Get�Լ� ����- return�� �Ǽ���, parameter ����
	{
		return x;  // x�� ����
	}

	double GetY() const
	{
		return y; // y�� ����
	}

	void ShowInfo() // ShowInfo�Լ� ����-return�� 
	{
		cout << "[" << x << ", " << y << "] "; // [ , ] [ , ] [ , ] �������� ���
	}

};

int main()     // main�Լ� ����
{
	Point p1(0, 0);    // �� �� �ʱⰪ ����
	Point p2(3, 0);
	Point p3(10, 3);

	p1.ShowInfo();  // �� �� Showinfo�Լ��� ���
	p2.ShowInfo();
	p3.ShowInfo();

	cout << "\nTriangle Area is: " << (p2.GetX() - p1.GetX())*(p3.GetY() - p2.GetY()) * 1 / 2 << "\n";
	// �ﰢ���� ���� ���

	p1.SetX(2); // Set�Լ��� �̿��� p1�� x�� �缳��
	p1.SetY(3); // Set�Լ��� �̿��� p1�� y�� �缳��
	p2.SetX(4); // Set�Լ��� �̿��� p2�� x�� �缳��
	p2.SetY(3); // Set�Լ��� �̿��� p2�� y�� �缳��
	p3.SetX(2); // Set�Լ��� �̿��� p3�� x�� �缳��
	p3.SetY(6); // Set�Լ��� �̿��� p3�� y�� �缳��

	p1.ShowInfo(); //  �缳���� p1�� x, y�� Showinfo�Լ��� ��� 
	p2.ShowInfo(); //  �缳���� p2�� x, y�� Showinfo�Լ��� ��� 
	p3.ShowInfo(); //  �缳���� p3�� x, y�� Showinfo�Լ��� ��� 

	cout << "\nTriangle Area is: " << (p2.GetX() - p1.GetX())*(p3.GetY() - p2.GetY()) * 1 / 2 << "\n";
	//  �缳���� �ﰢ���� ���� ���
	return 0;
}

//
#include <iostream>
using namespace std;

class Point
{
public:
	int GetX()  //�б� ���� �׼��� �Լ�
	{ return x; }

	int GetY()
	{ return y; }
  
	void SetX(int xpos) //���� ���� �׼��� �Լ�
	{ x = xpos; }

	void SetY(int ypos)
	{ y = ypos; }
	

	// ���ѵ� ��������� ���ٸ� ����� �ؼ� �߸��� ���� ������� �ʵ��� ����, �� �Ǽ��� ���� ��,
	// �Ǽ��� ���� �߰ߵ� �� �ֵ��� �ؾ� �Ѵ�!
	void ShowInfo()
	{ cout << "x: " << x << "\ty: " << y << endl; }

private:
	int x, y;
};

int main()
{
	
	Point ex;
	ex.SetX(10);
	ex.SetY(5);
	cout << ex.GetX() << " " << ex.GetY() << endl;
	ex.ShowInfo();
}
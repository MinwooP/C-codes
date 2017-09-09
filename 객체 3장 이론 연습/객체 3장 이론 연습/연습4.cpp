#include <iostream>
using namespace std;

class Point
{
public:
	int GetX()  //읽기 전용 액세스 함수
	{ return x; }

	int GetY()
	{ return y; }
  
	void SetX(int xpos) //쓰기 전용 액세스 함수
	{ x = xpos; }

	void SetY(int ypos)
	{ y = ypos; }
	

	// 제한된 방법으로의 접근만 허용을 해서 잘못된 값이 저장되지 않도록 돕고, 또 실수를 했을 때,
	// 실수가 쉽게 발견될 수 있도록 해야 한다!
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
#include <iostream> 
using namespace std;

const int SIZE = 20;
class AAA
{
	int i, j;   //int i,j를 하면 클래스 AAA안에 I, J라는 data member가 생성?
public:
	AAA(int _i, int _j)    //생성자 함수- 객체가 생성되면 바로 실행
	{
		i = _i, j = _j;
	}

	void ShowData()
	{
		cout << i << " " << j << endl;
	}
};

int main()
{
	AAA aaa(111, 222);  //이 때, 객체가 생성되고 생성자 함수도 실행
	aaa.ShowData();

	return 0;
}
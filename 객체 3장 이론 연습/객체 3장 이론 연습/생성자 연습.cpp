#include <iostream> 
using namespace std;

const int SIZE = 20;
class AAA
{
	int i, j;   //int i,j�� �ϸ� Ŭ���� AAA�ȿ� I, J��� data member�� ����?
public:
	AAA(int _i, int _j)    //������ �Լ�- ��ü�� �����Ǹ� �ٷ� ����
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
	AAA aaa(111, 222);  //�� ��, ��ü�� �����ǰ� ������ �Լ��� ����
	aaa.ShowData();

	return 0;
}
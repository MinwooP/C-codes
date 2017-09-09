#include <iostream> 
using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			cout << "continue로 skip!" << endl;
			continue;
		}
		if (i == 7)
		{
			cout << "break로 for문 종료!" << endl;
		}

		cout << i << endl;
	}
}
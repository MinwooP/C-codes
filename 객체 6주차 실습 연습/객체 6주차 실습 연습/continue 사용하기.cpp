#include <iostream> 
using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			cout << "continue�� skip!" << endl;
			continue;
		}
		if (i == 7)
		{
			cout << "break�� for�� ����!" << endl;
		}

		cout << i << endl;
	}
}
#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			
			if (5 - i <= j && j < 11 + i)
			{
				cout << "■";
			}

			else
			{
				cout << "□";
			}
		}
		cout << "\n";
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			

			if (3+i <= j && j < 13-i)
			{
				cout << "■";
			}

			else
			{
				cout << "□";
			}
		}
		cout << "\n";
	}
	//여기다 오리 별 표시하는 기능도 포함
	//if(j == xpos && i == ypos )
	//{ cout << "☆ ";   }
}
#include <iostream>
using namespace std;

class numPyramid
{
public:
	int menu;

	void displayMenu()
	{
		cout << "********************\n";
		cout << "1. normal pyramid\n";
		cout << "2. inverse pyramid\n";
		cout << "3. left pyramid\n";
		cout << "4. exit\n";
		cout << "********************\n";
	}

	void chooseMenu(int menu)
	{
		cout << "*choose the menu: ";
		cin >> menu;

		if (menu == 4)
		{
			cout << "\n<<Finish the progrm>>wn";
		}
		else
		{
			 switch (menu)
			 {
			case 1: normalpyramid();
				chooseMenu(menu);    //chooseMenu��� �Լ��� ������ ���� ()�ȿ� int menu��� �Ķ���� Ÿ�԰� �̸����� ���µ�
				break;               //���⼭�� menu�� �ᵵ �ǳ�? �̹� �����ؼ� �׷��ǰ�?
			case 2: inversepyramid();
				chooseMenu(menu);
				break;
			case 3: leftpyramid();
				chooseMenu(menu);
				break;
			 }
		}
	}
	
	void normalpyramid()
	{
		int height = 0;   // ��������
		cout << "*set the height: ";
		cin >> height;
		int n = 1;
		int sum = 0;
		int i = 1;
		while (i <= height)
		{
			sum = sum + n;
			for (int j = 0; j < i; j++)
			{
				cout << " " << n;
				n++;
			}
			cout << "\n";
			i++;
		}
		cout << "sum of every first num: " << sum << "\n";
	}

	void inversepyramid()
	{
		int height = 0;
		cout << "*set the height: ";
		cin >> height;
		int n = 1;
		int sum = 0;
		for (int i = 1; i <= height; i++)
		{
			sum = sum + n;
			for (int j = 0; j < i; j++)
			{
				cout << " " << n;
				n = n - 1;
			}
			n = n + 1 + 2 * i;
			cout << "\n";
		}
		cout << "sum of every first num: " << sum << "\n";
	}

	void leftpyramid()
	{
		int height = 0;
		cout << "*set the height: ";
		cin >> height;
		int n = 1;
		int k;
		k = height - 1;
		for (int i = 1; i <= height; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << " " << n;
				n = n + k - j;
			}
			n = i + 1;
			cout << "\n";
		}

		cout << "sum of every first num: " << height*(height + 1) / 2 << "\n";
	}
};

int main()
{
	int cinmenu=0;
	numPyramid Pyramid;
	Pyramid.displayMenu();
	Pyramid.chooseMenu(cinmenu);
}
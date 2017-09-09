#include <iostream>
using namespace std;
int main()
{
	int height;
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

	cout << "sum of every first num: " << height*(height + 1)/2 << "\n";
}

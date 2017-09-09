#include <iostream>
using namespace std;
int main()
{
	int height;
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
		n = n +1 + 2*i;
		cout << "\n";
	}
	cout << "sum of every first num: " << sum << "\n";
}
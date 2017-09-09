#include <iostream>
using namespace std;
int main()
{
	int height;
	cin >> height;
	int n = 1;
	int sum=0;
	int i = 1;
	while(i <= height)
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
	cout << "sum of every first num: " << sum << "\n" ;
}
#include <iostream>
using namespace std;

int main()
{
	const int arraySize = 10;
	int a[arraySize] = { 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };
	int total = 0;

	for (int i = 0; i < arraySize; i++)
		total += a[i]; // 직접 생각햇음

	cout << "Total of array elements: " << total << endl;

	return 0;
}


#include <iostream>
using namespace std;

void staticArrayInit(void);
void automaticArrayInit(void);

int main()
{
	cout << "First call to each function: \n";
	staticArraInit();
	automaticArrayInit();

	cout << "\n\nSecond call to each function:\n";
	staticArraInit();
	automaticArrayInit();
	cout << endl;

	return 0;
}

void staticArrayInit(void)
{
	static int array1[3];

	cout << "\nvalues on entering staticArrayInit: \n";

	for (int i = 0; i < 3; i++)
		cout << "array1[" << i << "]=" << array1[i] << " ";

	cout << "\nvalues on exiting staticArrayInit:\n";

	for (int j = 0; j < 3; j++)
		cout << "array1[" << j << "] = " << (array1[j] += 5) << " ";
}


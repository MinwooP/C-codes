#include <iostream>
#include <iomanip>
using namespace std;

void printArray(char array[], int size)
{
	cout << "size of array is " << sizeof(array) << "???" << endl;
	//여기서 sizeof(array)는 array가 배열 첫번째 요소의 주소를 가리키므로
	//주소값의 size는 4byte이다

	for (int i = 0; i < size; i++)
		cout << array[i] << ' ';
}

int main()
{
	char array[] = "Hello World";
	int sizeOfArray = sizeof(array);
	//여기서 sizeofarray는 배열의 크기를 나타낸다

	cout << "size of array is " << sizeOfArray << endl;
	printArray(array, sizeOfArray);

	return 0;

}
#include <iostream>
#include <iomanip>
using namespace std;

void printArray(char array[], int size)
{
	cout << "size of array is " << sizeof(array) << "???" << endl;
	//���⼭ sizeof(array)�� array�� �迭 ù��° ����� �ּҸ� ����Ű�Ƿ�
	//�ּҰ��� size�� 4byte�̴�

	for (int i = 0; i < size; i++)
		cout << array[i] << ' ';
}

int main()
{
	char array[] = "Hello World";
	int sizeOfArray = sizeof(array);
	//���⼭ sizeofarray�� �迭�� ũ�⸦ ��Ÿ����

	cout << "size of array is " << sizeOfArray << endl;
	printArray(array, sizeOfArray);

	return 0;

}
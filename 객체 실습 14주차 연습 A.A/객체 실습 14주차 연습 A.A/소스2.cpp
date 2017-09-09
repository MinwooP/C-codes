#include <iostream>
using namespace std;

#define MAX_SIZE 100000

int main()
{

	//1차원 배열과 포인터
	int array[MAX_SIZE];
	int *pointer = array;
	int index;

	cout << "1차원배열 array의 크기는?" << sizeof(array) << "byte" << endl;
	cout << "array를 가리키키는 pointer의 크기는 " << sizeof(pointer) << "byte" << endl;

	for (index = 0; index < 3; index++)
	{
		cout << "\narray의 " << index << "번째 주소는" << &array[index] << endl;
			cout << "pointer로 접근한 값은" << &pointer[index] << endl;
	}
}
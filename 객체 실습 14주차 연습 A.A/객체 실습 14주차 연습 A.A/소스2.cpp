#include <iostream>
using namespace std;

#define MAX_SIZE 100000

int main()
{

	//1���� �迭�� ������
	int array[MAX_SIZE];
	int *pointer = array;
	int index;

	cout << "1�����迭 array�� ũ���?" << sizeof(array) << "byte" << endl;
	cout << "array�� ����ŰŰ�� pointer�� ũ��� " << sizeof(pointer) << "byte" << endl;

	for (index = 0; index < 3; index++)
	{
		cout << "\narray�� " << index << "��° �ּҴ�" << &array[index] << endl;
			cout << "pointer�� ������ ����" << &pointer[index] << endl;
	}
}
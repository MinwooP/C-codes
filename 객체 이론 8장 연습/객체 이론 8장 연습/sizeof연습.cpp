#include <iostream>
using namespace std;

size_t getSize( double array[])
{
	return sizeof(array); 
}

// �迭�� �Լ��� �Ķ���ͷ� �Ѱ��ִ� ��Ŀ����� �迭�� ũ�⸦ �� �� ����?
// �迭�� �Լ��� �Ķ���ͷ� �Ѱ��� ���� ������ �迭�� �ּҷθ� �ν��ϳ���
int main()
{
	double numbers[20];

	cout << "The number of bytes in the array is " << sizeof(numbers);

	cout << "\nThe number of bytes returned by getSize is "
		<< getSize(numbers) << endl;
}
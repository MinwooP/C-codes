#include <iostream>
using namespace std;

size_t getSize( double array[])
{
	return sizeof(array); 
}

// 배열을 함수의 파라미터로 넘겨주는 방식에서는 배열의 크기를 알 수 없나?
// 배열을 함수의 파라미터로 넘겨줄 때는 무조건 배열의 주소로만 인식하나ㅣ
int main()
{
	double numbers[20];

	cout << "The number of bytes in the array is " << sizeof(numbers);

	cout << "\nThe number of bytes returned by getSize is "
		<< getSize(numbers) << endl;
}
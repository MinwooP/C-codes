// figure.h

#include <iostream>

/**
* @author:     Minerva
* @date:       2017. 05. 22
* @brief:      do various sort with entered string
* @modified:   none
* @abstarct:   none
* @difficulty: little difficult
*/

class SortingChar
{
public:

	/* FUNCTION PROTOTYPE*/
	void printMessage();
	void insertionSorting(char array[]);
	void backwardSorting(char array[]);
	void halfSorting(char array[]);
	void SortingChar::management();

private:

	int arraysize;
	char str[100];
	char copystr[100];
};

/* parts that modified during coding, reasons */
// 처음에는 3개의 sorting 함수 모두 입력받은 배열 str을 파라미터로 
// 사용했는데, 배열은 함수에 호출될 때 pass by reference 로 처리되므로
// 첫번째 sorting 함수를 실행 후, 값이 변하더라
// 이를 해결하기 위해 copystr이라는 배열을 만들어 이를 2, 3번째
// sorting 함수의 파라미터로 사용했음ㅣ
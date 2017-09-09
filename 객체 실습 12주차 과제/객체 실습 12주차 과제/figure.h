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
// ó������ 3���� sorting �Լ� ��� �Է¹��� �迭 str�� �Ķ���ͷ� 
// ����ߴµ�, �迭�� �Լ��� ȣ��� �� pass by reference �� ó���ǹǷ�
// ù��° sorting �Լ��� ���� ��, ���� ���ϴ���
// �̸� �ذ��ϱ� ���� copystr�̶�� �迭�� ����� �̸� 2, 3��°
// sorting �Լ��� �Ķ���ͷ� ���������
#include <iostream>
using namespace std;

int main()

{
	int x, y;
	int * const ptr = &x;

	*ptr = 7; // allowed : *ptr is not const
	ptr = &y;
}
#include <iostream>
using namespace std;

void f(const int *);

int main()
{
	int x, y = 0;
	const int *ptr = &y;
	ptr = &x; //가능
	*ptr = 7; //불가능

}

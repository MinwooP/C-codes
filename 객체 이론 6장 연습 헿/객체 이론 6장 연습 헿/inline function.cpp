#include <iostream>
using namespace std;


inline double cube(const double side)
{
	return side*side*side; 
}

int main()
{
	double sideValue;
	cout << "Enter the side Value of your cube: ";
	cin >> sideValue;

	cout << "Volume of cube with side "
		<< sideValue << " is " << cube(sideValue) << endl;
}
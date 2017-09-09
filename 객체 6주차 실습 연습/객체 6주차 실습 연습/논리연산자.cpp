	#include <iostream>
	using namespace std;

	int main()
	{
	   // create truth table for && (logical AND) operator
	cout << boolalpha << "Logical AND (&&)"
		 << "\nfalse && false: " << (1 && 1)   //true대신 1, false대신 0 사용가능ㄴ
		 << "\nfalse && true: " << (false && true)
	     << "\ntrue && false: " << (true && false)
		 << "\ntrue && true: " << (true && true) << "\n\n";
	
	  // create truth table for || (logical OR) operator
	cout << "Logical OR (||)"
		 << "\nfalse || false: " << (false || false)
		 << "\nfalse || true: " << (false || true)
		 << "\ntrue || false: " << (true || false)
		 << "\ntrue || true: " << (true || true) << "\n\n";
	
	  // create truth table for ! (logical negation) operator
    cout << "Logical NOT (!)"
		 << "\n!false: " << (!false)
		 << "\n!true: " << (!true) << endl;
		} // end main

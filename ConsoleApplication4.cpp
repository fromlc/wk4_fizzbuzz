//------------------------------------------------------------------------------
// fizzbuzz.cpp
//------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main()
{
	// numbers 1 - 100
	int x = 1;

	// each number from 1-100
	while (x <= 100)
	{
		//  divisible by 3 and by 5: display "fizzbuzz"
		if (x % 15 == 0)
			cout << "fizzbuzz";

		//  divisible by 3: display "fizz"
		else if (x % 3 == 0)
			cout << "fizz";

		//  divisible by 5: display "buzz"
		else if (x % 5 == 0)
			cout << "buzz";

		//  otherwise display the number
		else
			cout << x;

		cout << "\n";

		x = x + 1;
	}
	cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

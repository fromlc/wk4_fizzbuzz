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
	// numbers range from 1 - 100
	int x = 1;

	if (x % 15 == 0)
		cout << "fizzbuzz";

	// each number from 1-100
	while (x <= 100)
	{
		// divisible by 3 and by 5: display "fizzbuzz"
		if (x % 15 == 0)
			cout << "fizzbuzz";

		// divisible by 3: display "fizz"
		else if (x % 3 == 0)
			cout << "fizz";

		// divisible by 5: display "buzz"
		else if (x % 5 == 0)
			cout << "buzz";

		// otherwise display the number
		else
			cout << x;

		cout << "\n";

		x = x + 1;
	}
	cout << "Goodbye!\n";
}

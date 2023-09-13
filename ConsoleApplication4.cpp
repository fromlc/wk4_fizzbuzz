//------------------------------------------------------------------------------
// fizzbuzz.cpp
//------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//------------------------------------------------------------------------------
// constants
//------------------------------------------------------------------------------
constexpr int FIZZ = 3;
constexpr int BUZZ = 5;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main()
{
	// numbers range from 1 - 100
	int x = 1;

	// each number from 1-100
	while (x <= 100)
	{
		// divisible by 3 and by 5: display "fizzbuzz"
		if (x % FIZZ == 0 && x % BUZZ == 0)
			cout << "fizzbuzz";

		// divisible by 3: display "fizz"
		else if (x % FIZZ == 0)
			cout << "fizz";

		// divisible by 5: display "buzz"
		else if (x % BUZZ == 0)
			cout << "buzz";

		// otherwise display the number
		else
			cout << x;

		cout << "\n";

		x = x + 1;
	}
	cout << "Goodbye!\n";
}

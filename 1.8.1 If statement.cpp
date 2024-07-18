// Demonstrate the if.

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	a = 2;
	b = 3;

	if (a < b)
	{ // I like to create code blocks. Even if the its a ONE line codes.
		cout << "a is less than b\n"; //An IF statement
	}

	// this won't display anything
	if (a == b) cout << "you won't see this\n"; //I placed it in the same line as the if statement.
	//Personally prefer to have it in a code block.

	cout << "\n";

	c = a - b; // c contains -1

	cout << "c contains -1\n";
	if (c >= 0) cout << "c is non-negative\n";
	if (c < 0) cout << "c is negative\n";

	cout << "\n";

	c = b - a; // c now contains 1
	cout << "c contains 1\n";
	if (c >= 0) cout << "c is non-negative\n";
	if (c < 0) cout << "c is negative\n";

	system("pause");
	return 0;
}
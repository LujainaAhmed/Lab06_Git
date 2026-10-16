#include <iostream>
using namespace std;

int main() {
	int code;
	int originalCode;
	int divisor = 1;
	int digit;
	int digitCount = 0;

	cout << "enter positive emergency code: ";
	cin >> code;

	originalCode = code;
	
	while (originalCode / divisor >= 10) {
		divisor = divisor * 10;
	}

	cout << "\nCode spoken in words: ";

	while (divisor > 0) {
		digit = originalCode / divisor;

		switch (digit) {
		case 0:
			cout << "zero ";
			break;
		case 1:
			cout << "one ";
			break;
		case 2:
			cout << "two ";
			break;
		case 3:
			cout << "three ";
			break;
		case 4:
			cout << "four ";
			break;
		case 5:
			cout << "five ";
			break;
		case 6:
			cout << "six ";
			break;
		case 7:
			cout << "seven ";
			break;
		case 8:
			cout << "eight ";
			break;
		case 9:
			cout << "nine ";
			break;

		}
		digitCount++;

		originalCode = originalCode % divisor;
		divisor = divisor / 10;

	}
	cout << "\nNumber of digits spoken: " << digitCount << endl;

	cout << "this is my new edit" << endl;

	return 0;
}
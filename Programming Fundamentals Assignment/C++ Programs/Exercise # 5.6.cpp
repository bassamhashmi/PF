#include <iostream>

using namespace std;

const int EXIT = -1;

int main() {
	int integers = 0;
	int even = 0;
	int odd = 0;

	cout << "Enter an integer (-1 to terminate): " << endl;

	while (integers != EXIT) {
		cin >> integers;
		if (integers % 2 == 0) {
			even = even + integers;
		}
		else {
			odd = odd + integers;
		}
	}

	cout << "The sum of your even integers is: " << even << endl;
	cout << "The sum of your odd integers is: " << odd << endl;

	return 0;
}

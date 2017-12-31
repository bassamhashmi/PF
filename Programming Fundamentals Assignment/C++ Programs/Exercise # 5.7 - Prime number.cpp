#include <iostream>
using namespace std;
main() {
	int n, i, x = 0;
	
	cout << "Enter the positive integer: ";
	cin >> n;
	
	for(i = 1; i <= n; i++) {
		if(n % i == 0) {
			x++;
		}
	}
	
	if(x == 2) {
		cout << "It is a Prime number" << endl;
	} else {
		cout << "It is not a Prime number" << endl;
	}
		
	return 0;
}

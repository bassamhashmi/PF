#include <iostream>

using namespace std;

bool x,y;

int analyze_num1(int n){
	bool x;
	if(n % 2 == 0) {
		x = true;
	} else {
		x = false;
	}
	return x;
}
int analyze_num2(int m){
	bool y;
	if(m % 2 == 0) {
		y = true;
	} else {
		y = false;
	}
	return y;
}
int even(int x, int y){
	cout << "Both numbers are even" << endl;
	cout << "Product: " << x * y << endl;
}

int odd(int x, int y){
	cout << "Both numbers are odd" << endl;
	cout << "Division: " << x / y << endl;
}
int both(int x, int y){
	cout << "The numbers are both even and odd" << endl;
	cout << "Sum: " << x + y << endl;
}

int main(){
	int num1, num2, a, b, result;
	
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	
	a = analyze_num1(num1);
	b = analyze_num2(num2);
	a = x;
	b = y;
	if(x==true && y==true){
		result = even(num1, num2);
	} else if(x==false && y==false){
		result = odd(num1, num2);
	} else{
		result = both(num1, num2);
	}
	
	
}



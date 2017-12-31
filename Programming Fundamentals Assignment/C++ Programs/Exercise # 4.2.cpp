#include <iostream>
#include <conio.h>
using namespace std;

main() {
	
	int number1, number2, number3;
	
	cout << "This program will get three integers as input and diplays them in ascending order" << endl;
	cout << "\n";
	cout << "Enter first integer: ";
	cin >> number1;
	cout << "Enter second integer: ";
	cin >> number2;
	cout << "Enter third integer: ";
	cin >> number3;
	cout << "\n";
	
	
	cout << "The ascending order of the three given integers is:  ";
	//sorting numbers in asscending order
	if((number1 > number2) && (number1 > number3)){
		if(number2 > number3){
			cout << "  " << number1 << "  " << number2 << "  " << number3;
		} else{
			cout << "  " << number1 << "  " << number3 << "  " << number2;
		}
	}
	
	if((number2 > number1) && (number2 > number3)){
		if(number1 > number3){
			cout << "  " << number2 << "  " << number1 << "  " << number3;
		} else{
			cout << "  " << number2 << "  " << number3 << "  " << number1;
		}
	}
	 
	if((number3 > number1) && (number3 > number2)){
		if(number1 > number2){
			cout << "  " << number3 << "  " << number1 << "  " << number2;
		} else{
			cout << "  " << number3 << "  " << number2 << "  " << number1; 
		}
	}
	
	return 0;
	
}

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int num, temp_num, sum = 0;
	int divisor, digit, count = 0;
	
	cout << " Enter Number: ";
	cin >> num;
	
	temp_num = num;
	
	//counting the number of digits in the entered integer
	while(temp_num != 0){
		temp_num = temp_num / 10;
		count ++;
	}
	
	temp_num = num;
	
	
	//Extracting the digits
	cout << " Individual digits are: ";
	do{
		divisor = pow(10.0, --count);
		digit = temp_num / divisor;
		temp_num = temp_num % divisor;
		
		cout << " " << digit;
		sum = sum + digit;
	} while(count != 0);
	
	cout << "\n" << " Sum of the digits is = " << sum << endl;
	
	return 0;
}

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

main(){
	int accountNumber;	
	char accountType;
	float minBalance, currentBalance;
	
	const float savingsServiceCharge = 10.00;
	const float checkingServiceCharge = 25.00;
	const float	savingsInterestRate = 0.04;
	const float checkingLowInterestRate = 0.03;
	const float checkingDefaultInterestRate = 0.05;
	
	cout << "Enter your account number: ";
	cin >> accountNumber;
	cout << "Enter account type (S => Savings, C => Checking): ";
	cin >> accountType;
	cout << "Enter minimum balance to maintain account: $";
	cin >> minBalance;
	cout << "Enter your current balance: $";
	cin >> currentBalance;
	cout << "\n";
	cout << "__________________________________________________________________________________________________________________" << endl;
	cout << "\n";
	
	switch(accountType){
		
		case 's':
		case 'S':
			cout << "Account Number: " << accountNumber << endl;
			cout << "Account Type: Savings" << endl;
			cout << fixed << showpoint << setprecision(2);
			cout << "Current Balance: $" << currentBalance << endl;
			
			if(currentBalance < minBalance){
				cout << "Service Fee: $" << savingsServiceCharge << endl;
			} else {
				cout << "Interest Earned: $" << currentBalance * savingsInterestRate << " at " << savingsInterestRate*100 << "% p.a" << endl;
			}
		break;
		
		case 'c':
		case 'C':
			cout << "		Account Number: " << accountNumber << endl;
			cout << "		Account Type: Checking" << endl;
			cout << fixed << showpoint << setprecision(2);
			cout << "		Current Balance: $" << currentBalance << endl;
			
			if(currentBalance < minBalance){
				cout << "		Service Fee: $" << checkingServiceCharge;
			} else if(currentBalance <= (minBalance + 5000.00)){
				cout << "		Interest Earned : $" << currentBalance * checkingLowInterestRate << " at " << checkingLowInterestRate * 100 << "% p.a" << endl;
			} else {
				cout << "		Interest Earned : $" << currentBalance * checkingDefaultInterestRate << " at " << checkingDefaultInterestRate * 100 << "% p.a" << endl;
			}
		break;
		
		default:
			cout << "		There is some problem in your given information. Kindly recheck!" << endl;
			return 1;
		break;
	}
	
	cout << "\n";
	cout << "		Thank you for checking in!" << endl;
	 
	return 0;
	
}

#include<iostream>
using namespace std;
main()
{
	char a;
	int b, c;
	char choice;
	
	do{
	cout << "  ___________________________________________________________________________________________________________________" << endl;
	cout << "\n";
	cout << " This program is a simple calculator......" << endl;
	cout << "\n";
	cout << " Enter an operator (+ - * /): ";
	cin >> a;
	cout << " Enter first operend: ";
	cin >> b;
	cout << " Enter second operand: ";
	cin >> c;
	cout << "\n";
	
	switch(a){
		case '+':
			cout << b << " + " << c << " = " << b + c << endl;
		break;
	
		case '-':
			cout << b << " - " << c << " = " << b - c << endl;
		break;
	
		case '*':
		case 'x':
			cout << b << " * " << c << " = " << b * c << endl;
		break;
	
		case '/':
		case '%':
			if(c != 0){
			cout << b << " / " << c << " = " << b / c << endl;
			}else{
				cout << " Division Error!";
			}
		break;
		
		default:
			cout << " Invalid input!" << endl;
		break;
	}
	
	cout << "\n";
	cout << "\n";
	cout << " Do you want to perform another calculation? (Y/N): ";
	cin >> choice;
		
	}while(choice == 'Y' || choice == 'y');
	
	if(choice == 'N' || choice == 'n'){
		cout << " Program terminated......";
	}
	
	return 0;
	
}

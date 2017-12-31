#include <iostream>
#include <cmath>
using namespace std;

main()
{
	float x, x1, x2, a, b, c, discriminant, realPart, imaginaryPart;
	
	cout << "Enter value of a (coefficient of x^2): ";
	cin >> a;
	cout << "Enter value of b (coefficient of x): ";
	cin >> b;
	cout << "Enter value of c (constant term): ";
	cin >> c;
	cout << "\n";
	
	discriminant = b*b - 4*a*c;
	
	if(discriminant == 0){
		x = (-b + pow(discriminant, 0.5)) / (2 * a);
		
		cout << "The equation has a single (repeated) root" << endl;
		cout << "x = "<< x << endl;
	}else if(discriminant > 0){
		x1 = (-b + pow(discriminant, 0.5)) / (2 * a);
		x2 = (-b - pow(discriminant, 0.5)) / (2 * a);
		
		cout << "The roots are real and equation has two real roots" << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}else if(discriminant < 0){
		discriminant = -1 * discriminant;
		realPart = -b / (2 * a);
		imaginaryPart = (pow(discriminant, 0.5)) / (2 * a);
		
		cout << "The roots are imaginary and equation has two complex roots" << endl;
		cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
		cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
	} 
	
	return 0;
	
}

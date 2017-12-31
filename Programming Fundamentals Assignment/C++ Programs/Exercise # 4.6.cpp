#include <iostream>
using namespace std;

main() {
	
	int p, b , h;
	
	cout << " This program will display that whether triangle is right angle or not......" << endl;
	cout << "\n";
	
	cout << " Enter base length: ";
	cin >> b;
	cout << " Enter perpendicular length: ";
	cin >> p;
	cout << " Enter hypotenuse length: ";
	cin >> h;
	cout << "\n";
	//sample input : 12, 5 ,13
	
	
	if((b*b + p*p) == h*h){
		cout << " Triangle is right angle triangle." << endl;
	}else{
		cout << " Triangle is not right angle triangle." << endl;
	}
	
	return 0;
	
}

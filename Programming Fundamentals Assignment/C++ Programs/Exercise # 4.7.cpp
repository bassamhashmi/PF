#include <iostream>
using namespace std;

main() {
	int cookiesPerBox, boxesPerContainer, numberOfCookies, boxesRequired, containersRequired;
	
	cookiesPerBox = 24;
	boxesPerContainer = 75;

	cout << " This program will tell you that how many boxes and containers are required to ship cookies..." << endl;
	cout << " Note: " << endl;
	cout << "\t >>> Each box can contain 24 cookies" << endl;
	cout << "\t >>> Each container can contain 75 boxes" << endl;
	cout << "\n";
		
	cout << " Enter the total number of cookies: ";
	cin >> numberOfCookies;
	
	boxesRequired = numberOfCookies / cookiesPerBox;
	containersRequired = numberOfCookies / (cookiesPerBox * boxesPerContainer);
	
	cout << "\n";
	cout << " That will require " << boxesRequired << " boxes and " << containersRequired + 1 << " containers" << endl;
	cout << " There are also " << numberOfCookies % cookiesPerBox << " cookies left over." << endl;
	
	return 0;

}

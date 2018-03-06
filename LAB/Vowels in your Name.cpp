#include <iostream>
#include <string>

using namespace std;


int main(){
	
	string x;
	int n, v = 0;
	
	cout << "Enter your name: ";
	cin >> x;
	cout << "\n";
	
	n = x.size(); 
	
	cout << "Number of alphabets: " << n << endl;
	cout << "Vowels: ";
	for(int i = 0; i < n; i++){
		if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u'){
			v += 1;
			cout << x[i] << " , ";
		}
	}
	cout << "\n";
	cout << "Number of vowels: " << v << endl;
	
	return 0;
	
}

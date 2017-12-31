/* Program Description:
	
Samantha and Vikas are looking to buy a house in a new development. 
After looking at various models they like are colonial, Spilt-entry and single story. 
The builder gave them the base price and the finished area in square feet of the three models . 
they want to know the model(s) with the least price per square foot.
Write a program that accepts as input the base price and the finished area in square feet of the three models.
The program outputs the model(s) with the least price per square feet.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double price1, price2, price3, sqft1, sqft2, sqft3, result1, result2, result3;
    double final;
    
    cout << "\t Model # 1" << endl;
    cout << "Enter house base price: $";
    cin >> price1;
    cout << "Enter house's total square feet area: ";
    cin >> sqft1;
    cout << "\n";
    
    cout << "\t Model # 2" << endl;
    cout << "Enter house base price: $";
    cin >> price2;
    cout << "Enter house's total square feet area: ";
    cin >> sqft2;
	cout << "\n";
	
	cout << "\t Model # 3" << endl;
    cout << "Enter house base price: $";
    cin >> price3;
    cout << "Enter house's total square feet area: ";
    cin >> sqft3;
    cout << "\n";
    
    result1 = price1 * sqft1;
    result2 = price2 * sqft2;
    result3 = price3 * sqft3;
    
    if((result1 > result2) && (result1 > result3)){
		if(result2 > result3){
			
			final = result2;
			cout << "The house model with least price per square foot is: Model # 2" << endl;
			cout << fixed << showpoint << setprecision(2);
			cout << "The value of house per square foot is: $" << final;
			
		} else{
			
			final = result3;
			cout << "The house model with least price per square foot is: Model # 3" << endl;
			cout << fixed << showpoint << setprecision(2);
			cout << "The value of house per square foot is: $" << final;
			
		}
	}
	
	if((result2 > result1) && (result2 > result3)){
		if(result1 > result3){
			
			final = result1;
			cout << "The house model with least price per square foot is: Model # 1" << endl;
			cout << fixed << showpoint << setprecision(2);
			cout << "The value of house per square foot is: $" << final;
			
		} else{
			
			final = result3;
			cout << "The house model with least price per square foot is: Model # 3" << endl;
			cout << fixed << showpoint << setprecision(2);
			cout << "The value of house per square foot is: $" << final;
			
		}
	}
	 
	if((result3 > result1) && (result3 > result2)){
		if(result1 > result2){
			
			final = result1;
			cout << "The house model with least price per square foot is: Model # 1" << endl;
			cout << fixed << showpoint << setprecision(2);
			cout << "The value of house per square foot is: $" << final;
			
		} else{
			
			final = result2; 
			cout << "The house model with least price per square foot is: Model # 2" << endl;
			cout << fixed << showpoint << setprecision(2);
			cout << "The value of house per square foot is: $" << final;
			
		}
	}
	
    
    return 0;
}

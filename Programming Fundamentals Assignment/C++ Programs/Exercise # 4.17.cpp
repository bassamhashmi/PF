/*	Program Description:

You have several pictures of different sizes that you would like to frame. 
 A local picture-framing store offers two types of frames—regular and fancy. 
 The frames are available in white and can be ordered in any color the customer desires. 
 Suppose that each frame is 1 inch wide. The cost of coloring the frame is $0.10 per inch. 
 The cost of a regular frame is $0.15 per inch, and the cost of a fancy frame is $0.25 per inch. 
 The cost of putting a cardboard paper behind the picture is $0.02 per square inch, and the cost 
 of putting glass on top of the picture is $0.07 per square inch. The customer can also choose to 
 put crowns on the corners, which costs $0.35 per crown. 
 
 Write a program that prompts the user to input the following information and then 
 output the cost of framing the picture:
 
 a. The length and width, in inches, of the picture
 b. The type of the frame
 c. Customer’s choice of color to color the frame
 d. If the user wants to put the crowns, then the number of crowns
 
 */


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    int length, width, sqInchSize, perimiter, numOfCrowns;
    char frameType;
    string frameColor;
    float totalPrice;
    
    // cost per inch
    const float frameColoringPrice = 0.10;
    const float regularFramePrice = 0.15;
    const float fancyFramePrice = 0.25;
    
    // cost per square inch
    const float cardboardPrice = 0.02;
    const float glassPrice = 0.07;
    
    // cost per item
    const float crownPrice = 0.35;
        
    cout << "Enter Length of the picture in inches: ";
    cin >> length;
    cout << "Enter Width of the picture in inches: ";
    cin >> width;
    
    sqInchSize = length * width;
    perimiter = (length * 2) + (width * 2);
  
    
    cout << "Select the Type of frame (R => Regular, F => Fancy): ";
    cin >> frameType;
    // calculating cost of the frame
    switch(frameType){
    	case 'R':
    	case 'r':
    		totalPrice = perimiter * regularFramePrice;
    		break;
    		
    	case 'F':
    	case 'f':
    		totalPrice = perimiter * fancyFramePrice;
    		break;
    		
    	default:
    		cout << "You entered an invalid frame type!" << endl;
    		return 1;
    		break;
   	}
    
    
    cout << "Enter which color frame would you like (Note: White is default): ";
    cin >> frameColor;
	//Charging only for coloring if user want other than default color
	if(frameColor != "white" || frameColor != "White" || frameColor != ""){
		totalPrice = totalPrice + (frameColoringPrice * perimiter);
	}
	
	
	
    cout << "Enter the total number of Crowns you wish to have on frame: ";
    cin >> numOfCrowns;
    if(numOfCrowns > 0){
    	totalPrice = totalPrice + (numOfCrowns * crownPrice);
	}
	
	cout << "\n";
    
    //Adding the cost of cardboard and glass
    totalPrice = totalPrice + (glassPrice * sqInchSize) + (cardboardPrice * sqInchSize);
	
	//Final Cost
	cout << fixed << showpoint << setprecision(2);
	cout << "Your total bill for your frame is: $" << totalPrice << endl;
	
	
    return 0;
}

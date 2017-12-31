/* Program Description:
	
The number of lines that can be printed on a paper depends on the paper size,
the point size of each character in a line, whether lines are double-spaced or
single-spaced, the top and bottom margin, and the left and right margins of the
paper. Assume that all characters are of the same point size, and all lines are either
single-spaced or double-spaced. Note that 1 inch=72 points. Moreover, assume that the
lines are printed along the width of the paper. For example, if the length of the paper
is 11 inches and width is 8.5 inches, then the maximum length of a line is 8.5 inches.
Write a program that calculates the number of characters in a line and the number of lines
that can be printed on a paper based on the following input from the user:
a. The lenght and width, in inches of the paper
b. The top, bottom, left and right margins
c. The point size of a line
d. If the lines are double-spaced, then double the point size of each character 
*/


#include <iostream>
using namespace std;

int main() {

    float length, width, top, bottom, left, right, pointSize;
    char type;
	int characters, lines;
    
    cout << "Enter Length of the paper in inches: ";
    cin >> length;
    cout << "Enter Width of the paper in inches: ";
    cin >> width;
    cout << "Enter Top margin of the paper: ";
    cin >> top;
    cout << "Enter Bottom margin of the paper: ";
    cin >> bottom;
    cout << "Enter Left margin of the paper: ";
    cin >> left;
    cout << "Enter Right margin of the paper: ";
    cin >> right;
    cout << "Enter PointSize of a line: ";
    cin >> pointSize;
    cout << "Enter the type of line (S => Single, D => Double): ";
    cin >> type;
    cout << "\n";
    
    if(type == 'D' || type == 'd'){
    	pointSize = pointSize * 2;
	}

	length = length - (top + bottom);
	width = width - (left + right);
	characters = (width * 72) / pointSize;
	pointSize = pointSize / 72;		//converting points into inches
	lines = length / pointSize;
	
	cout << "The number of characters that can be printed is: " << characters << endl;
	cout << "The number of lines that can be printed is: " << lines << endl;
	
    return 0;
}

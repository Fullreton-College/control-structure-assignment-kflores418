/* 
Assignment 1
The area of a rectangle is the rectangle’s length times its width. 
Write a program that asks for the length and width of two rectangles. 
The program should then tell the user which rectangle has the greater 
area or if the areas are the same.

Input
length of the first rectangle, 
width of the first rectangle, 
length of the second rectangle,
width of the first rectangle,

Output
if area of the first rectangle > area of the second rectangle then write 
"The 1st rectangle has the greater area" 
if area of the first rectangle < area of the second rectangle then write 
"The 2nd rectangle has the greater area" 
if area of the first rectangle = area of the second rectangle then write 
"The areas are the same"
*/

#include <iostream>

using namespace std;

int main()
{
    double rec1_len, rec1_wid, rec2_len, rec2_wid;
    
    cout << "Rectangle with larger area" << endl; // need a new line

    cout << "Length of first rectangle:";
    cin >> rec1_len;

    cout << "Width of first rectangle:";
    cin >> rec1_wid;

    cout << "Length of second rectangle:";
    cin >> rec2_len;

    cout << "Width of second rectangle:";
    cin >> rec2_wid;

    cout << "Rectangle 1 - Length:" << rec1_len << ", " << "Width:" << rec1_wid << endl;
    cout << "Rectangle 2 - Length:" << rec2_len << ", " << "Width:" << rec2_wid << endl;

    double area1 = rec1_len * rec1_wid, area2 = rec2_len * rec2_wid;

    if (area1 == area2)
        cout << "The areas are the same" << endl;
    
    else if (area1 > area2)
        cout << "The 1st rectangle has the greater area" << endl;
    
    else if (area1 < area2)
        cout << "The 2nd rectangle has the greater area" << endl ;

    return 0;

}
/* 
A software company sells a package that retails for $199. Quantity discounts are given according to the following table.

Quantity	Discount
10-19	    20%
20-40	    30%
50-99	    40%
100 or more	50%
Write a program that asks for the number of units purchased and computes the total cost of the purchase.

Test for the following number of units: 12, 29, 55, 150, 5.

*/


#include <iostream>

using namespace std;

int main()
{
    
    int quantity;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Discount Package Calculator" << endl;
    cout << "How many packages will you purchase?" << endl;
    cin >> quantity;

    double price = 199 * quantity;


    if (quantity < 10)
        cout << "Total Cost:$" << price << endl;

    else if ((quantity >= 10) && (quantity <= 19))
        cout << "Total Cost:$" << price *0.8 << endl;

    else if ((quantity >= 20) && (quantity <= 49))   // I think the range was probably supposed to be 20 - 49.
        cout << "Total Cost:$" << price *0.7 << endl;

    else if ((quantity >= 50) && (quantity <= 99))
        cout << "Total Cost:$" << price *0.6 << endl;
    
    else if (quantity >= 100)
        cout << "Total Cost:$" << price *0.5 << endl;    
    
    return 0;

}
/*
A mobile phone service has three different data plans for its customers:

Plan	Feature
Plan A	For $39.99 per month, 2 gigabytes are provided. Additional usage costs $8.00 per gigabyte.
Plan B	For $59.99 per month, 8 gigabytes are provided. Additional usage costs $8.00 per gigabyte.
Plan C	For $79.99 per month, unlimited data is provided.

Write a program that calculates a customer’s monthly bill. It should input the customer name, 
which plan was purchased, and how many gigabytes were used. It should then create a bill that includes 
the input information and the total amount due. It should also display how much money plan A customers 
would save if they purchased plan B or C, and how much money plan B customers would save if they 
purchased plan C. If there would be no savings, no message should be printed. Wherever possible, use 
named constants instead of numbers.

*/

#include <iostream>
#include <string>

using namespace std;

int main ()
{

string name;
int gig;
char plan;

cout << "Mobile Phone Service Calculator" << endl;

cout << "Your name:" ;
cin >> name;

cout << "Plan Type (A, B, or C):";
cin >> plan;

cout << "Gigabytes used:";
cin >> gig;

double bill = 0; 

if (((plan == 'A') || (plan == 'a')) && (gig <= 2))
        bill = 39.99;
else if (((plan == 'A') || (plan == 'a')) && (gig > 2))
        bill = 39.99 + (8 * (gig - 2));
else if (((plan == 'B' )|| (plan == 'b')) && (gig <= 8))
        bill = 59.99;
else if (((plan == 'B' )|| (plan == 'b')) && (gig > 8))
        bill = 59.99 + (8 * (gig - 8));
else if ((plan == 'C') || (plan == 'c'))
        bill = 79.99;

cout << "Mobile Plan:" << plan<< endl;
cout << name << "'s Bill:$" << bill << endl;

double plan_a = 0, plan_b = 0, plan_c = 0;

if (gig <=2)
        {        
        plan_a = 39.99; 
        plan_b = 59.99; 
        plan_c = 79.99;
        }
else if ((gig > 2) && (gig <= 8))
        {
        plan_a = 39.99 + (8 * (gig - 2));
        plan_b = 59.99;
        plan_c = 79.99;
        }
else if (gig > 8)
        {
        plan_a = 39.99 + (8 * (gig - 2));
        plan_b = 59.99 + (8 * (gig - 8));
        plan_c = 79.99; 
        }


// I used this section when I was working out the errors in my code
/*
cout << "Plan A Price:$" << plan_a << endl; 
cout << "Plan B Price:$" << plan_b << endl;
cout << "Plan C Price:$" << plan_c << endl;

cout << "User's Plan:" << plan << endl;
*/

if ((plan_b < plan_a) && ((plan == 'a') || (plan == 'A')))
        cout << "You save $" << plan_a - plan_b << " with Plan B." << endl;
else if ((plan_c < plan_b) && ((plan == 'b') || (plan == 'B')))
        cout << "You save $" << plan_b - plan_c << " with Plan C." << endl;
else{
}


if (((plan == 'a') || (plan == 'A')) && (plan_c < plan_a))
        cout << "You save $" << plan_a - plan_c << " with Plan C." << endl;  
else {
}


return 0;
}
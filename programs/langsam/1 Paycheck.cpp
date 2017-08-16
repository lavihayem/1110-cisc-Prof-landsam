/*
  Name: paycheck
  Copyright: 
  Author: CIS 1.5
  Date: 29/01/06 18:51
  Description: Calculates net and gross pay
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const float TAX = 25.00;
    float hours, rate, gross, net;
    
    cout.setf(ios::fixed,ios::floatfield);          // setup output format for 
    cout.precision(2);                              // dollars and cents
    
    cout << "Enter the hours worked and the rate of pay: " << endl;
    cin >> hours >> rate;
    
    gross = hours * rate;
	net = gross - TAX;
    
    cout << endl << "The gross pay is: $" << gross;
    cout << endl << "The net pay is: $" << net << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
} // end main

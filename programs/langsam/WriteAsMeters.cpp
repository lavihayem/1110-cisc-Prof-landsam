/*
  Name: WriteAsMeters
  Copyright: 
  Author: Professor Langsam
  Date: 27/02/06 21:53
  Description: Converts feet and inches to meters.
               Uses a call by value.
*/
#include <cstdlib>
#include <iostream>

using namespace std;


void writeAsMeters(int feet, int inches)
{
     float meters;           // local variable
     
     inches = 12 * feet + inches;
     meters = inches / 39.39;
     
     cout << endl << meters << " meters" << endl;
} // end writeAsMeters




/***************************************************************/




int main(int argc, char *argv[])
{
    int feet, inches;
  
    void writeAsMeters(int, int);
  
    cout << "Enter two integers representing the number of feet" << endl;
    cout << "and the number of inches: ";
    cin >> feet >> inches;
  
    writeAsMeters(feet, inches);
    cout << "is the same as " << feet << " feet and " <<  inches << " inches" << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

/*
  Name: Birthdays 3 
  Copyright: 2006
  Author: CIS 1.5 Class
  Date: 02/02/06 10:38
  Description: Write a C++ program.......
  Use the trailer method to signal the end of data
  Improved version using functions to prompt the user for the data
  Improved version getting the current date only once
*/
#include <cstdlib>
#include <iostream>

using namespace std;

float currentMonth, currentYear;            // global variables



/***************************************************************************/



// Gets the current date from the user
void getCurrentDate()
{
    cout << "Please enter the current month followed by the current year." 
         << endl; 
    cin >> currentMonth >> currentYear;
}  // end function currentDate



/***************************************************************************/



// Prints the prompts for the user
void promptUser()
{
     cout << "Please enter your birth month and birth year." << endl;
     cout << "Enter two zeros to stop." << endl;
} // end function input 



/***************************************************************************/



int main(int argc, char *argv[])
{
    float birthMonth, birthYear, age;       // local variables
    void promptUser(void);
    void getCurrentDate(void);
    
    cout.setf(ios::fixed,ios::floatfield);
    
    getCurrentDate();
    promptUser();
    cin >> birthMonth >> birthYear;
    while (birthMonth > 0) {
        age = currentYear - birthYear + (currentMonth - birthMonth)/12;  
        
        cout.precision(0);
        cout << "For " << birthMonth << " and " << birthYear << " your age is "; 
        cout.precision(1);
        cout << age << endl  << endl;
        
        promptUser();
        cin >> birthMonth >> birthYear;
    } // end of loop   
 
  
    system("PAUSE");
    return EXIT_SUCCESS;
} // end main

/*
  Name: Birthdays2
  Copyright: 2006
  Author: CIS 1.5 Class
  Date: 07/05/06 10:38
  Description: Write a C++ program.......
  Use the trailer method to signal the end of data.
  Improved version using functions to prompt the user for the data.
*/

#include <cstdlib>
#include <iostream>

using namespace std;




// Prints the prompts for the user
void promptUser()
{
     cout << "Please enter your birth month, birth year as well as" << endl;
     cout << "the current month followed by the current year." << endl;
     cout << "Enter four zeros to stop." << endl;
} // end function input 





int main(int argc, char *argv[])
{
    float birthMonth, birthYear, currentMonth, currentYear, age;
    void promptUser(void);
    
    cout.setf(ios::fixed,ios::floatfield);
    
    promptUser();
    cin >> birthMonth >> birthYear >> currentMonth >> currentYear;
    while (birthMonth > 0) {
        age = currentYear - birthYear + (currentMonth - birthMonth)/12;  
        
        cout.precision(0);
        cout << "For " << birthMonth << " and " << birthYear << " your age is "; 
        cout.precision(1);
        cout << age << endl  << endl;
        
        promptUser();
        cin >> birthMonth >> birthYear >> currentMonth >> currentYear;
    } // end of loop   
 
  
    system("PAUSE");
    return EXIT_SUCCESS;
} // end main

/*
  Name: Average1
  Copyright: 
  Author: 
  Date: 08/02/06 21:34
  Description: Finds the average of a list of numbers using the trailer method
*/
#include <cstdlib>
#include <iostream>

using namespace std;


/****************************************************************************/


// Function promptuser() isses a prompt to the user
void promptUser()
{
     cout << endl << "Please enter a number.";
     cout << endl << "In order to stop enter a negative number. ";
} // end promptUser


/****************************************************************************/


int main(int argc, char *argv[])
{
    int counter;
    float average, number, sum;
    void promptUser(void);
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(1);
    
    counter = 0;
    sum = 0;
  
    promptUser();
    cin >> number;
    while (number >= 0) {
        ++counter;
        sum = sum + number;
        promptUser();
        cin >> number;
    } // end while

    average = sum / counter;
    cout << endl << endl << "The average is " << average << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

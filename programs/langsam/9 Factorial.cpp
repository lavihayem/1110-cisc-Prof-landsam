/*
  Name: Factorial
  Copyright: 
  Author: Professor Langsam
  Date: 08/02/06 22:00
  Description: This program calculates N!.
*/
#include <cstdlib>
#include <iostream>

using namespace std;


/******************************************************/


// Function issues a prompt to the user. 
void promptUser()
{    cout << "\nPlease enter a value for which you ";
     cout << "\nwish to calculate the factorial.";
     cout << "\nIn order to stop enter a negative number.\n";
} // end promptUser


/******************************************************/



int main()
{
    int counter, n;
    double product;
    void promptUser(void);
  
    promptUser();
    cin >> n;
    while (n >= 0) {
        product = 1;
        for (counter = 1; counter <= n; ++counter)
            product = product * counter;
        cout << n << " factorial is " << product;
        promptUser();
        cin >> n;
    } // end while
    
    system("PAUSE");
    return EXIT_SUCCESS;
} // end main

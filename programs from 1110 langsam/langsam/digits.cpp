/*
  Name: digits
  Copyright: 
  Author: Professor Langsam
  Date: 12/02/06 17:44
  Description: The program determines the number of digits in a number
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int inputNumber, numberOfDigits = 0;

    cout << "\nPlease enter an integer: ";
	cin >> inputNumber;
	do {
		inputNumber /= 10;
		numberOfDigits++;
	} while (inputNumber != 0);
	cout << "\nNumber has " << numberOfDigits << " digits." << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
} // end main

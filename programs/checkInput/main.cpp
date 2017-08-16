/*
  Name: checkInput
  Copyright:
  Author: Professor Langsam
  Date: 12/02/06 17:38
  Description: CheckInput prompts the user for an integer between
               a given lower and upper range and allows the user
               to correct improperly entered data.
*/
#include <cstdlib>
#include <iostream>

using namespace std;


/* Function checkInput prompts the user for an integer between  */
/* a given lower and upper range and allows the user to correct */
/* improperly entered data.                                     */
int checkInput(int lower, int upper)
{
	int value;

	do {
		cout << "\nEnter an integer between " << lower << " and " << upper << ": ";
		cin >> value;
		if (value < lower)
			cout << "\nToo small. Try again. ";
		else if (value > upper)
					cout << "\nToo large. Try again. ";
	} while (value < lower || value > upper);
	return value;
} // end checkInput



/*******************************************************************/



/* main function tests the function checkInput */
int main()
{
	int lower, upper;
	int checkInput(int, int);

	cout << "\n\nEnter a lower and upper limit for your integer. ";
	cin >> lower >> upper;
	cout << "\nThe number you entered was: " << checkInput(lower, upper) << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
/*

Enter a lower and upper limit for your integer. 100
1000

Enter an integer between 100 and 1000: 5

Too small. Try again.
Enter an integer between 100 and 1000: 9

Too small. Try again.
Enter an integer between 100 and 1000: 10000

Too large. Try again.
Enter an integer between 100 and 1000: 1001

Too large. Try again.
Enter an integer between 100 and 1000: 900

The number you entered was: 900
Press any key to continue . . .*/

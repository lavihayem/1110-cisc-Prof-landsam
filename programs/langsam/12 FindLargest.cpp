/*
  Name: FindLargest
  Copyright: 
  Author: Professor Langsam
  Date: 12/02/06 16:53
  Description: Finds the largest number in a list using the header method
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    float findLargest(int);

	cout << "\nEnter the number of items in the list: ";
	cin >> n;
	cout << "\nThe largest number that was entered was: " 
         << findLargest(n) << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}



/********************************************************************/



/* Function returns the largest number of items in a list      */
/* given the number of items.                                  */
float findLargest(int n)
{
	int i;
	float number, largest;

	cout << "\nEnter the first number: ";
	cin >> largest;
	for(i = 1; i < n; ++i) {
		cout << "\nNext number: ";
		cin >> number;
		if (number > largest)
			largest = number;
	} /* end for */
	return largest;
} /* end findlargest */




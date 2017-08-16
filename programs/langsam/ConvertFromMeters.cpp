/*
  Name: ConvertFromMeters
  Copyright: 
  Author: Professor Langsam
  Date: 27/02/06 21:43
  Description: Converts from meters to feet and inches.
                Uses reference parameters to return the 'feet' & 'inches'.
*/
#include <cstdlib>
#include <iostream>

using namespace std;
/* Converts from meters to feet and inches.                    */
/* Uses reference parameters to return the 'feet' & 'inches'.   */
void convertFromMeters(float meters, int &feet, int &inches)
{
     int lengthInInches;

     lengthInInches =  (int) (meters * 39.39); // 'cast' converts from float to int
	 feet = lengthInInches / 12;
	 inches = lengthInInches % 12;
}



/***************************************************************/



/* Exercises the convertfrominches function. Illustrates the   */
/* use of reference parameters.                                 */
int main(int argc, char *argv[])
{
    float meters;
	int feet, inches;

    void convertFromMeters(float, int &, int &);   /* prototype */
	
	cout << "\n\nEnter the number of meters: ";
	cin >> meters;
	convertFromMeters(meters, feet, inches);
	cout << endl << meters << " meters = " 
         << feet << " feet " << inches << " inches.\n\n";
   
    system("PAUSE");
    return EXIT_SUCCESS;
}

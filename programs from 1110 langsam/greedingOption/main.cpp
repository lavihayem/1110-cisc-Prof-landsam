/*
  Name: GradingComment
  Copyright:
  Author:
  Date: 18/03/06 21:57
  Description: Assigns comments given a numerical grade.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

// Function assigns comments given a numerical grade.
void comment(int score)
{
	switch (score) {
		case 10:	cout << "Exceptional!" << endl;		break;
		case 9:
		case 8:		cout << "Good!" << endl; 			break;
		case 7:
		case 6:
		case 5:		cout << "Barely Passing." << endl;	break;
		case 4:
		case 3:		cout << "Flunking!" << endl;		break;
		case 2:
		case 1:
		case 0:		cout << "Miserable!" << endl;	 	break;
		default: 	cout << "Invalid score!" << endl;
   } // end switch
} // end comment



/*********************************************************/



// Program to exercise the comment fuction
int main(int argc, char *argv[])
{
    int grade;
	void comment(int);

	cout << "\nEnter a grade from 1 to 10: ";

    while (!cin.eof() && cin >> grade) {                //Either ^z or bad data
                                                        //will terminate the loop
          comment(grade);
		  cout << "\nEnter a grade from 1 to 10: ";
    } /* end while */

    system("PAUSE");
    return EXIT_SUCCESS;
}
/*
Enter a grade from 1 to 10: 10
Exceptional!

Enter a grade from 1 to 10: 6
Barely Passing.

Enter a grade from 1 to 10: 7
Barely Passing.

Enter a grade from 1 to 10: 8
Good!

Enter a grade from 1 to 10:*/

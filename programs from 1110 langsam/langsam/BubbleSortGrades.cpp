/*
  Name: BubbleSortGrades
  Copyright: 
  Author: Professor Langsam
  Date: 19/03/06 21:22
  Description: Sorts up to 100 records consisting of 3 digit codes and
               grades in code order.                                    
*/
#include <cstdlib>
#include <iostream>
#include <fstream>                    //include library for file processing

const int MAXNUMBER = 100;

using namespace std;

// Bubble Sort - Modified as described in class.
void bubble(int code[], int grade[], int n)
{
	int hold, j, pass;
	bool switched = true;

	for (pass = 0; pass < n-1 && switched == true; pass++) {
		/*     outer loop controls the number of passes     		     */
		switched = false;   	        /* initially no interchanges     */
                                        /* have been made on this pass   */
		for (j = 0; j < n-pass-1; j++)
			/*    inner loop governs each individual pass    		     */
			if (code[j] > code[j+1]) {
				/*           elements out of order            		     */
				/*        an interchange is necessary         		     */
				switched = true;
				hold = code[j];
				code[j] = code[j+1];
				code[j+1] = hold;
				hold = grade[j];
				grade[j] = grade[j+1];
				grade[j+1] = hold;
			}  /* end if */
	}  /* end for */
}  /* end bubble */



/********************************************************************/


/* Sorts up to 100 records consisting of 3 digit codes and          */
/* grades in code order.                                            */

int main(int argc, char *argv[])
{
    int code[MAXNUMBER], grade[MAXNUMBER], i, count;
	void bubble(int [], int[], int);
	
    ifstream infile;                      //create the file infile for input
    infile.open("BubbleSortGrades.txt");  //open the file
                                     
    if ( !infile.is_open() ) {            //checks to see if file was opened
       // The file could not be opened
       cout << endl << "ERROR: Unable to open file" << endl;
       system ("PAUSE");
       exit(1);
    }
	
    count = 0;
	while (!infile.eof() && infile >> code[count] && infile >> grade[count])
        count++;
    infile.close();                       //close the file
    
    bubble(code, grade, count);

	cout << "\nCode   Grade" << endl;
	for (i = 0; i < count; i++)
		cout << code[i] << "      " << grade[i] << endl;
      
    system("PAUSE");
    return EXIT_SUCCESS;
}

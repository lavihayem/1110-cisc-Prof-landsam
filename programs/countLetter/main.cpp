/*
  Name: CountLetters
  Copyright:
  Author: Professor Langsam
  Date: 18/03/06 22:50
  Description: Counts the letters in a file
*/
#include <cstdlib>
#include <iostream>
#include <fstream>                      //include library for file processing
#include <cctype>

using namespace std;

int main(int argc, char *argv[])
{
    char c;
    int i, letter[26];

    ifstream infile;                   //create the file infile for input
    infile.open("OriginalFile.txt");   //open the file

    if ( !infile.is_open() ) {         //check to see if file was opened
       // The file could not be opened
       cout << endl << "ERROR: Unable to open file" << endl;
       system ("PAUSE");
       exit(1);
    }

    for (i = 0; i < 26; ++i)                                // initialize array to zero
        letter[i] = 0;

    while (!infile.eof() && (c = infile.get()))            // count the letters
        if (isalpha(c)) {
           c = toupper(c);
           ++letter[c - 'A'];
        } // end if


    // print the results
    for (i = 0; i < 26; ++i) {
        if (i % 6 == 0)
           cout << endl;
        cout.width(5);
        cout << right << (char) ('A' + i) <<":";
        cout.width(5);
        cout << right << letter[i];
    } // end for

    cout << endl << endl;
    infile.close();                      //close the file
    system("PAUSE");
    return EXIT_SUCCESS;
}
/*
    A:    1    B:    0    C:    0    D:    0    E:    1    F:    0
    G:    0    H:    1    I:    0    J:    0    K:    0    L:    0
    M:    0    N:    0    O:    2    P:    0    Q:    0    R:    1
    S:    0    T:    0    U:    1    V:    0    W:    1    X:    0
    Y:    1    Z:    0

Press any key to continue . . .*/

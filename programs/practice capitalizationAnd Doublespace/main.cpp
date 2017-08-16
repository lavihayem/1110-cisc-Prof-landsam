/*
  Name: capitalizeAndDoubleSpace1
  Copyright:
  Author: Professor Langsam
  Date: 17/03/06 13:10
  Description: Capitalize lowercase letters and double space
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int c;//reserve 4byte whic is 2 billion

    while (!cin.eof()){
        c = cin.get(); //get one character
        if ('a' <= c && c <= 'z')// if the character islower case between a and z
            //then  make that upper case.
           cout.put(c + 'A' -'a');
        // if is not lower case but is end of line
        // print two line space
        else if (c == '\n'){
           cout.put('\n');
           cout.put('\n');
        }
       // if is not lower case and is not end of line
       //just print that this could be capital letter or symbol
        else
           cout.put(c);
       cout.put('\a');// bell character
    }  // end while

    system("PAUSE");
    return EXIT_SUCCESS;
}

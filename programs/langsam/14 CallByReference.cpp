/*
  Name: CallByReference
  Copyright: 
  Author: Professor Langsam
  Date: 27/02/06 22:22
  Description: Arguments may be passed to parameters 
               by a mechanism known as a call by reference. 
               The location of the arguments are sent to the parameters.
               Changes to the arguments also change the parameters.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i = 7, j = 3;
    void order(int &, int &);
    
    cout << i << "  " << j << endl;
    order(i, j);
    cout << i << "  " << j << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}


/**********************************************************************/


// illustrates a call by reference using pointers
void order(int &p, int &q)
{
     int temp;
     
     if (p > q) {
            temp = q;
            p = q;
            q = temp;
     } // end if
} // end order

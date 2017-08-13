/*
  Name: PrintATable
  Copyright: 
  Author: Professor Langsam
  Date: 12/02/06 16:31
  Description: Prints a table of squares, square roots and cubes
*/
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    float number, square, cube, root;

    cout << "\nNumber\tSquare\tCube\tRoot\n\n";
    for(number = 1; number <= 10; ++number) {
		square = number * number;
		cube = number * square;
		root = sqrt(number);
		cout << number << '\t' << square  << '\t' << cube  << '\t' << root << endl;
    } // end for loop
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

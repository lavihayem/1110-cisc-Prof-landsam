/*
  Name: Fibonacci
  Copyright: 
  Author: Professor Langsam
  Date: 08/02/06 21:50
  Description: This program calculates and prints all
               fibonacci numbers less than or equal to 1000.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int next, latest, sum;
  
    next = 0;
    latest = 1;
    printf("\n%6d ", latest);
    sum = latest + next;
  
    while (sum <= 1000) {
        cout << sum << " ";
        next = latest;
        latest = sum;
        sum = latest+ next;
    } // end while

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
} // end main

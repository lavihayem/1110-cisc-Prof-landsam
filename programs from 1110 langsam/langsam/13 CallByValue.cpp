/*
  Name: CallByValue
  Copyright: 
  Author: Professor Langsam
  Date: 27/02/06 22:09
  Description: Arguments are passed to parameters by a mechanism
               known as a call by value. The value of the arguments
               is sent to the parameters but changes to the parameters
               do not effect the arguments.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n = 3, sum;
    int computeSum(int);
  
    cout << "n = " << n << endl;
    sum = computeSum(n);
    cout << "n = " << n << endl;
    cout << "sum = " << sum << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}



/***************************************************************/



// Sum the integers from 1 to n
int computeSum(int n)
{
    int sum = 0;
    
    for (; n > 0; --n)        // n gets changed here, but not in main()
        sum += n;
        
    cout << "n = " << n << endl;
    
    return sum;
} // end computeSum

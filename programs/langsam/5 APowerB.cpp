/*
  Name: APowerB
  Copyright: 
  Author: Professor Langsam
  Date: 12/02/06 16:38
  Description: Calculates a raised to the b power, for  
               non-negative values of b. 
*/

#include <cstdlib>
#include <iostream>

using namespace std;

// main function illustrates use of the aPowerB function
int main()
{
    float a, b, c, d, result;
    float aPowerB(float, float);       //function prototype
		
    a = 3;
    b = 5;
    c = 2;
    d = 5;
    result = aPowerB(a, b) + aPowerB(c, d);
    cout << "\nApowerB(" << a << "," << b 
         << ") + ApowerB(" <<  c << "," <<  d << ") = " << result << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
} // end main




/**************************************************************/



// Function calculates a raised to the b power, for
// non-negative values of b.
float aPowerB(float a, float b)
{
	float i, product;

	product = 1;
	for (i = 1; i <= b; ++i)
		product *= a;
	return product;
} /* end apowerb */

/*
  Name: relativelyPrimePairs
  Copyright: 
  Author: Professor Langsam
  Date: 12/02/06 17:01
  Description: Finds all relatively prime pairs from 1 to 100 inclusive.
               Relatively Prime Pairs are pairs of numbers that only 1
               can be divided into both numbers. 
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int first, second, divisor; 
    bool possiblyPrime;

	for (first = 1; first <= 100; first++)
		for (second = 1; second <= 100; second++) {
			divisor = first;
			possiblyPrime = true;                          // a boolean variable
			while (divisor >= 1 && possiblyPrime) {
					if (first % divisor == 0)
						if (divisor == 1)
							cout << endl << first << " and " << second 
                                 << " are relatively prime";
						else if (second % divisor == 0) {
								cout << endl << first << " and " << second 
                                 << " are not relatively prime";
								possiblyPrime = false;
						}
					divisor--;
			} /* end while */
		} /* end for */
  
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

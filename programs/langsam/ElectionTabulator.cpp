/*
  Name: ElectionTabulator
  Copyright: 
  Author: Professor Langsam
  Date: 18/03/06 22:41
  Description: Program tabulates the result of an election.
*/
#include <cstdlib>
#include <iostream>

const int NUMBEROFCANDIDATES = 4;

using namespace std;

int main(int argc, char *argv[])
{
    int voter, candidate, count[NUMBEROFCANDIDATES];

	// Initialize all counts to zero.
	for (candidate = 0; candidate < NUMBEROFCANDIDATES; candidate++)
		count[candidate] = 0;

	// Tabulate the votes.
	cout << "\nEnter your choice as a number from 1 to " << NUMBEROFCANDIDATES;
	cout << "\nEnter a zero number to stop: ";
	cin >> candidate;
	while (candidate > 0 && candidate <= NUMBEROFCANDIDATES) {
		++count[candidate-1];
		cout << "\nEnter your choice as a number from 1 to " << NUMBEROFCANDIDATES;
	    cout << "\nEnter a zero number to stop: ";
	    cin >> candidate;
	} // end while

	// Print the results.
	for (candidate = 0; candidate < NUMBEROFCANDIDATES; candidate++)
		cout << "\nCandidate " << candidate+1 
             << " recieved " << count[candidate] << " votes.";
 
    cout << endl << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

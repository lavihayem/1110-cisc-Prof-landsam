/*
  Name: HeadsOrTails
  Copyright:
  Author: Professor Langsam
  Date: 12/02/06 17:57
  Description: Plays the game of Heads or Tails
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
  int n;
  void printInstructions(void);
  void play(int);

  printInstructions();
  cout << "\n\nHow many times do you want to play? ";
  cin >> n;
  play(n);

  system("PAUSE");
  return EXIT_SUCCESS;
} // end main



/**********************************************************/



//prints instructions for the user
void printInstructions()
{
   cout
       << "This is the game of \'Heads or Tails\'.\n"
       << "I will flip a coin; you call it.\n"
       << "If you call it correctly, you win; otherwise, I win.\n"
       << "To call \'heads\', type 0; to call \'tails\', type 1.\n"
       << "As I toss my coin I wil tell you to \'call it\'.\n";
} // end printInstructions



/**********************************************************/



// Function play actually plays the game
// The computer does the tossing, use does the calling
void play(int n)
{
     int coin, i, lose = 0, win = 0;
     int toss(void);
     int getCallFromUser(void);
     void reportAWin(int);
     void reportALoss(int);
     void printFinalReport(int, int, int);

     for (i=0; i < n; ++i) {
         cout << "Call it:  ";
         coin = toss();
         if (getCallFromUser() == coin){
            ++win;
            reportAWin(coin);
         }
         else {
             ++lose;
             reportALoss(coin);
         }
     } // end for loop
     printFinalReport(win, lose, n);
} // end play



/**********************************************************/



// function toss generates a random toss
// returns 0 for heads and 1 for tails
int toss(void)
{
    return (rand() % 2);
} // end toss



/**********************************************************/



// function getCallFromUser returns 0 for heads
// and 1 for tails
int getCallFromUser()
{
    int guess;

    cin >> guess;
    //check that only a 1 or 0 is entered
    while (guess != 0 && guess != 1) {
          cout << "ERROR: type 0 for heads and 1 for tails" << endl;
          cin >> guess;
    } // end while
    return guess;
} // end getCallFromUser



/**********************************************************/



//Function reports a win
void reportAWin(int coin)
{
     if (coin == 0)
        cout << "I have heads, you win." << endl;
     else
         cout << "I have tails, you win." << endl;
} // end reportAWin



/**********************************************************/



//Function reports a loss
void reportALoss(int coin)
{
     if (coin == 0)
        cout << "I have heads, you lose." << endl;
     else
         cout << "I have tails, you lose." << endl;
} // end reportALoss



/**********************************************************/



//Function printFinalReport reports the finals statistics of the game
void printFinalReport(int win, int lose, int n)
{
     cout << "Final Report:" << endl
          << "Number of games you won:   " << win  << endl
          << "Number of games you lost:  " << lose << endl
          << "Total number of games:     " << n    << endl;
} // end printFinalReport




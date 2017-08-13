/*
  Name: copyFile 1
  Copyright:
  Author: Professor Langsam
  Date: 17/03/06 12:24
  Description: Echos what is typed character by character.
               Program ends when a Ctrl-z is typed.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int c;//reserve 4 byte. char y; reserve One or two byte

    while (!cin.eof()){
        c = cin.get();//get character put in c
        cout.put(c);//the character in c print
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
/*
shalom12
shalom12

*/

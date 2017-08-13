/*
  Name: ParameterPassingExercise
  Copyright: 
  Author: Professor Langsam
  Date: 27/02/06 22:34
  Description: What is the output of the following program? 
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x, y, z;
    
    void func1(int, int, int);
    void func2(int &, int &, int &);
    
    x = y = z = 4;
    func1(x, y, z);
    cout << x << "  " << y << "  " << z << endl;
    func2(x, y, z);
    cout << x << "  " << y << "  " << z << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


/**************************************************************/


void func1(int a, int b, int c)
{
     b++;
     c= a + b;
     cout << a << "  " << b << "  " << c << endl;
} // func1


/**************************************************************/


void func2(int &a, int &b, int &c)
{
     b++;
     c= a + b;
     cout << a << "  " << b << "  " << c << endl;
} // func2


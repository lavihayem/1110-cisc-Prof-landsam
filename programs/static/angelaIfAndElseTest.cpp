#include <iostream>

using namespace std;

int main()
{
    bool s=true;
    bool b=false;
    if(b);



    else if(s)   //==line759
        if(b) // b==true if(b)  if you say !b if b==false)
            cout << "go to first" << endl;
        else// does not belong to 9 the ist if
            cout << "go to else" << endl;



    return 0;
}

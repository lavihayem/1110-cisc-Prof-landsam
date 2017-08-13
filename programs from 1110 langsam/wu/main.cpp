#include <iostream>
#include <fstream>

using namespace std;


int print (int a);

int main()
{
    int a;

    ifstream infile ("input.txt");

    infile>>a;
    while(infile){
    print(a);

    infile>>a;
    }

    return 0;
}

int print (int a){
    cout<<"the value is "<<a<<endl;
}

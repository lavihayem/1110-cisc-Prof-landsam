#include <iostream>
using namespace std;

void primeFactors(int number);

int main() {
 int number = 10577490,a[100];
 primeFactors(number);
 return 0;
}

void primeFactors(int number) {
 for(int i=2; i <= number/i; i++){
 cout<<"i= "<< i <<" number= " << number <<endl;

  while(number%i == 0) {
  number = number/i;

  cout << "Factor: " << i << endl;
  int a[100];
  for(int j;j<=100;j++){
    a[j]=i;
    cout<<"**"<<a[j];

  }

 }

 if(number > 1) {
 cout << "Factor: " << number <<endl;
 }
 }}

/*
i= 2 number= 10577490
Factor: 2
i= 3 number= 5288745
Factor: 3
i= 4 number= 1762915
i= 5 number= 1762915
Factor: 5
i= 6 number= 352583
i= 7 number= 352583
Factor: 7
i= 8 number= 50369
i= 9 number= 50369
i= 10 number= 50369
i= 11 number= 50369
Factor: 11
i= 12 number= 4579
i= 13 number= 4579
i= 14 number= 4579
i= 15 number= 4579
i= 16 number= 4579
i= 17 number= 4579
i= 18 number= 4579
i= 19 number= 4579
Factor: 19
Factor: 241

Process returned 0 (0x0)   execution time : 2.841 s
Press any key to continue.
*/

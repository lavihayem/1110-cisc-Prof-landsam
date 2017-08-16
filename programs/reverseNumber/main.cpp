// Example program
#include <iostream>
using namespace std;
void reverse(int [8], int);
int main(){
   int size = 4;
   int nums[size]= {9,6,4,7};
    reverse(nums, size);
    return 0;
}

void reverse(int mynumber[] , int size){
   for(int i = size-1; i >=0 ; i--){
       cout << mynumber[i] << " ";
   }
}


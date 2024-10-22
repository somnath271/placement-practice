// Problem statement 01:

// Given an array, we have to find the smallest element in the array:

// Sample input:

// input: arr[]={2,5,1,3,0}
// output: 0

// Sample input:

// arr[]={8,10,5,7,9};
// Output: 5

// code

#include <iostream>
using namespace std;
int main() {
    
    int arr[]={2,5,1,3,0};
    int small=2;
    int sm=small;
    for(int i = 0; i<5; i++){
        if(arr[i]<small){
            sm=arr[i];
        }
    }
    cout << "The smallest number is "<< sm;
    return 0;
}

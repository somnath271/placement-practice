// Problem 2:
// /*Example: 
//  Input:[1,2,4,7,7,5]
// output: 
// second smallest : 2
// second largest : 5
// Example:
// input : [1]
// output:
// second smallest:-1
// second largest: -1 

// code

#include <iostream>
#include <vector>
#include <climits> 
#include <set>     

using namespace std;

void findSecondSmallestAndLargest(const vector<int>& arr) {
   
    if (arr.size() < 2) {
        cout << "Second smallest: -1" << endl;
        cout << "Second largest: -1" << endl;
        return;
    }
  
    set<int> uniqueElements(arr.begin(), arr.end());


    if (uniqueElements.size() < 2) {
        cout << "Second smallest: -1" << endl;
        cout << "Second largest: -1" << endl;
        return;
    }

    vector<int> sortedUniqueElements(uniqueElements.begin(), uniqueElements.end());

    cout << "Second smallest: " << sortedUniqueElements[1] << endl;
    cout << "Second largest: " << sortedUniqueElements[sortedUniqueElements.size() - 2] << endl;
}

int main() {
    // Example 1
    vector<int> arr1 = {1, 2, 4, 7, 7, 5};
    findSecondSmallestAndLargest(arr1);

    // Example 2
    vector<int> arr2 = {1};
    findSecondSmallestAndLargest(arr2);

    return 0;
}

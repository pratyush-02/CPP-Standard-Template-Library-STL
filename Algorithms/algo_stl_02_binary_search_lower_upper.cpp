#include <iostream>
#include <algorithm>
using namespace std;
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 
  

int main() {

    int arr[] = {20, 30, 40, 40, 40, 50, 100, 1100};
    int n = sizeof(arr) / sizeof(int);
    //Search in a sorted array
    int key ;
    cin >> key;

    bool present = binary_search(arr, arr + n, key); //logN
    if (present) {
        cout << "Present";
    }
    else {
        cout << "Absent!";
    }

    //Two more things
    // Get the index of the element
    // lower_bound(s,e,key) and upper_bound(s,e,key)

    auto lb = lower_bound(arr, arr + n, 41);
    cout << endl << "Lower bound of 40 is" << (lb - arr) << endl;


    //uppper bound method
    auto ub = upper_bound(arr, arr + n, 40);
    cout << endl << "Upper bound of 40 is" << (ub - arr) << endl;

    cout << "Occ Freq of 40 is " << (ub - lb) << endl;

    return 0;
}

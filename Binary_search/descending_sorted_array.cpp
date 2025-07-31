#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int BinarySearchDescending(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            return mid; // Target found
        }
        else if (arr[mid] < target) {
            high = mid - 1; // Search in the left half
        }
        else {
            low = mid + 1; // Search in the right half
        }
    }
    
    return -1; // Target not found
}
int main(){
    int arr[] = {20,15,10,5,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 10;
    int result = BinarySearchDescending(arr, n, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
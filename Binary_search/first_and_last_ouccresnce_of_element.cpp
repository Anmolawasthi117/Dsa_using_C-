#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int first_occurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            result = mid; // Found target, but continue searching left
            high = mid - 1; // Search in the left half
        } else if (arr[mid] < target) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    return result;
}

int last_occurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid; // Found target, but continue searching right
            low = mid + 1; // Search in the right half
        } else if (arr[mid] < target) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    return result;
}

int main(){
    int arr[] = {20,15,10,10,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 10;
    int first = first_occurrence(arr, n, target);
    int last = last_occurrence(arr, n, target);
    if (first != -1 && last != -1) {
        cout << "First occurrence at index: " << first << endl;
        cout << "Last occurrence at index: " << last << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
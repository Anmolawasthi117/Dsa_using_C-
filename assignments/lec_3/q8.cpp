#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1,y1;
    cout<<"Enter the coordinates of the first point: ";
    cin>>x1>>y1;
    int x2,y2;
    cout<<"Enter the coordinates of the second point: ";
    cin>>x2>>y2;
    int x3,y3;
    cout<<"Enter the coordinates of the third point: ";
    cin>>x3>>y3;
   slope1 = (y2 - y1) / (x2 - x1);
    slope2 = (y3 - y2) / (x3 - x2);

    if (slope1 == slope2) {
        cout << "All 3 points lie on the same line";
    } else {
        cout << "All 3 points do not lie on the same line";
    }
   

   
    
    return 0;
};